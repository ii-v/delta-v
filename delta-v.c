#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float
rocket_equation(float total_mass, float dry_mass, float sp_impulse)
/* Using the Tsiolkovsky rocket equation */
{
    float delta_v;
    float g = 9.81; /* Gravitational Constant */
    
    delta_v = sp_impulse * g * log(total_mass / dry_mass);
    return delta_v;
}

int
main(int argc, char *argv[])
{
    float total_mass; /* The total mass of the vehicle including fuel. */
    float dry_mass; /* The mass of the vehicle without fuel. */
    float sp_impulse; /* The specific impulse of the engine. (Fuel effiency) */
    int num_stages = 0;
    float delta_v;
    float total_dv = 0;

    if (argc == 2)
    {
        num_stages = atoi(argv[1]);
    }
    
    else
    {
        printf("Usage: delta-v [number of stages]\n");
    }
    
    if (num_stages == 1)
    {
        printf("Write the total mass of the vehicle: ");
        scanf("%f", &total_mass);
     
        printf("Write the mass of the vehicle without fuel: ");
        scanf("%f", &dry_mass);

        printf("Write the vehicle's engines specific impulse in seconds: ");
        scanf("%f", &sp_impulse);
     
        delta_v = rocket_equation(total_mass, dry_mass, sp_impulse);
        
        printf("The total Delta-V is %0.2f\n", delta_v);
    }
    
    else if (num_stages > 1)
    {     
        for (int i = num_stages; i > 0; i--)
        {
            printf("Write the total mass of stage %i: ", i);
            scanf("%f", &total_mass);
         
            printf("Write the mass of stage %i without fuel: ", i);
            scanf("%f", &dry_mass);

            printf("Write stage %i engine's specific impulse in seconds: ", i);
            scanf("%f", &sp_impulse);
         
            delta_v = rocket_equation(total_mass, dry_mass, sp_impulse);
            total_dv = total_dv + delta_v;     
            
        }
    
        printf("The total Delta-V is %0.2f\n", total_dv);
    }
    
    return 0;
}
