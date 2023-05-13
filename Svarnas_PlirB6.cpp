#include <iostream>
#include <string>

using namespace std ;
//Using namespace to avoid typing stuff like std::cout.
class Robot {
    private :
     //Constructor 
        string callsign ;
        int battery ;
    //Using 'Prettier' code formatter for better structure
    public :
        Robot(string cs) {
            callsign = cs;
            battery = 500 ;
        }
        
        void moveForward() {
            cout << callsign << " is moving forward." << endl;
            battery -= 100 ;
        }
        
        void turnLeft90deg() {
            cout << callsign << " is turning left." << endl;
            battery -= 50 ;
        }
        
        void turnRight90deg() {
            cout << callsign << " is turning right." << endl;
            battery -= 50 ;
        }
        
        void sayHello() {
            cout << "Hello My Friend, my callsign is " << callsign << "." << endl;
            battery -= 75 ;
        }
        
        void charge() {
            battery += 300 ;
        }
        
        int getbattery() {
            return battery ;
        }
} ;

int main() {
    //callsign name robotakis (couldnt make it work na to dinei o xristis me to cin)
    Robot takis("robotakis") ;

    //The moves takis is executing:
    takis.moveForward() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.turnLeft90deg() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.moveForward() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.turnRight90deg() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.sayHello() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.moveForward() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.turnLeft90deg() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.sayHello() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.turnRight90deg() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.moveForward() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.sayHello() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.moveForward() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.turnLeft90deg() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    takis.sayHello() ;
    cout << "Battery: " << takis.getbattery() << endl ;
    
    return 0 ;
}
