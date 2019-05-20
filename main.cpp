#include <stdio.h>
#include <iostream>
using namespace std;


class Rocket {
    
    public:
    int density, velocity, area, mass;
};

    

int main()
{
    int Thrust, Momentum;
    
    Rocket Rocket1;
    Rocket Rocket2;
    Rocket Rocket3;
    Rocket Rocket4;
    
    
    Rocket1.density = 1.45;
    Rocket2.density = 1.14;
    Rocket3.density = 1.50;
    Rocket4.density = 1.44;
    
    Rocket1.velocity = 9.5;
    Rocket2.velocity = 10.2;
    Rocket3.velocity = 8.6;
    Rocket4.velocity = 9.25;
    
    
    Rocket1.area = 12;
    Rocket2.area = 15;
    Rocket3.area = 11.75;
    Rocket4.area = 11;
    
    Rocket1.mass = 111;
    Rocket2.mass = 485;
    Rocket3.mass = 2222;
    Rocket4.mass = 1438;
    
    
    Thrust = (Rocket1.density * Rocket1.velocity * Rocket1.area);
    std::cout << "The thrust of Rocket 1 is: " << Thrust << std::endl;
    
    Momentum = (Rocket1.mass * Rocket1.velocity);
    std::cout << "The momentum of Rocket 1 is: " << Momentum << std::endl;
    
    Thrust = (Rocket2.density * Rocket2.velocity * Rocket2.area);
    std::cout << "The thrust of Rocket 2 is: " << Thrust << std::endl;
    
    Momentum = (Rocket2.mass * Rocket2.velocity);
    std::cout << "The momentum of Rocket 2 is: " << Momentum << std::endl;
    
    Thrust = (Rocket3.density * Rocket3.velocity * Rocket3.area);
    std::cout << "The thrust of Rocket 3 is: " << Thrust << std::endl;
    
    Momentum = (Rocket3.mass * Rocket3.velocity);
    std::cout << "The momentum of Rocket 3 is: " << Momentum << std::endl;
    
    
    Thrust = (Rocket4.density * Rocket4.velocity * Rocket4.area);
    std::cout << "The thrust of Rocket 4 is: " << Thrust << std::endl;
    
    Momentum = (Rocket4.mass * Rocket4.velocity);
    std::cout << "The momentum of Rocket 4 is: " << Momentum << std::endl;
    

    return 0;
}
