#include <stdio.h>
#include <math.h>

float
rocket_equation(float total_mass, float dry_mass, float sp_impulse)
/* Using the Tsiolkovsky rocket equation */
{
    float delta_v;
    float g = 9.81; /* Gravitational Constant */

    delta_v = sp_impulse * g * log(total_mass / dry_mass);
    
    printf("The ΔV of the vehicle is %0.2f meters/second.\n", delta_v);
    
    return 0;
}

int
main()
{
    float total_mass; /* The total mass of the vehicle including fuel. */
    float dry_mass; /* The mass of the vehicle without fuel. */
    float sp_impulse; /* The specific impulse of the engine. (Fuel effiency) */

    printf("Write the total mass of the vehicle: ");
    scanf("%f", &total_mass);
 
    printf("Write the mass of the vehicle without fuel: ");
    scanf("%f", &dry_mass);

    printf("Write the vehicle's engines specific impulse in seconds: ");
    scanf("%f", &sp_impulse);
 
    rocket_equation(total_mass, dry_mass, sp_impulse);
    
    return 0;
}
