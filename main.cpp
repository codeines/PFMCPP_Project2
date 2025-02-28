#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 integer
 float
 character
 boolean
 double
 unsigned integer
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int life = 0;
    int myPower = 9;
    int endOfRainbowLocation = 3;
    
    float hate = 66.f;
    float airQuality = 1.f;
    float hairThickness = 12.f;
    
    double blue = 0.21;
    double speed = 51.6;
    double drumTuning = 84.2;

    char Z = 'Z';
    char D = 'D';
    char H = 'H';
    
    bool hasTail = true;
    bool isMale = false;
    bool isExpensive = true;

    ignoreUnused(number, life, myPower, endOfRainbowLocation, hate, airQuality, hairThickness, blue, speed, drumTuning, Z, D, H, hasTail, isMale, isExpensive);
    
    //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) 
 */
bool playAShow(int playDuration = 2, int showGenre = 4)
{
    ignoreUnused(playDuration, showGenre);
    return {};
}
/*
 2)
 */
double getDressed(bool shirt = true, int pants = 7, int shoes = 11)
{
    ignoreUnused(shirt, pants, shoes);
    return {};
}
/*
 3)
 */
float celebrateHalloween(int halloweenCostume = 42, bool celabratoryCandy = true, int drinkChoice = 33, double spiritLevel = 56.1)
{
    ignoreUnused(halloweenCostume, celabratoryCandy, drinkChoice, spiritLevel);
    return {};
}
/*
 4)
 */
bool goShopping(int numItemsBought = 3, float shoppingDuration = 11.f)
{
    ignoreUnused(numItemsBought, shoppingDuration);
    return {};
}
/*
 5)
 */
bool prepareCoffee(int numScoops = 3, double steepDuration = 6.84)
{
    ignoreUnused(numScoops, steepDuration);
    return {};
}
/*
 6)
 */
int paintPicture(int numColors = 7, int subject = 5)
{
    ignoreUnused(numColors, subject);
    return {};
}
/*
 7)
 */
bool doMeditation(int numBreaths = 99)
{
    ignoreUnused(numBreaths);
    return {};
}
/*
 8)
 */
float goFishing(int baitType = 4, float castLocation = 13.2f, int castDuration = 5)
{
    ignoreUnused(baitType, castLocation, castDuration);
    return {};
}
/*
 9)
 */
bool watchTv(int channel = 20, double duration = 3.51)
{
    ignoreUnused(channel, duration);
    return {};
}
/*
 10)
 */
double smellFlower(int flowerType = 1, float breathDuration = 10.f)
{
    ignoreUnused(flowerType, breathDuration);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    //1) 
    auto showPlayed = playAShow(2, 4);
    //2)
    auto gotDressed = getDressed(true, 7, 11);
    //3)
    auto halloweenCelebrated = celebrateHalloween(42, true, 33, 56.1);
    //4)
    auto shoppingDone = goShopping(3, 11.f);
    //5)
    auto coffeePrepared = prepareCoffee(3, 6.84);
    //6)
    auto picturePainted = paintPicture(7, 5);
    //7)
    auto meditationDone = doMeditation(99);
    //8)
    auto fishingDone = goFishing(4, 13.2f, 5);
    //9)
    auto tvWatched = watchTv(20, 3.51); 
    //10)
    auto flowerSmelled = smellFlower(1, 10.f);
    
    ignoreUnused(carRented, showPlayed, gotDressed, halloweenCelebrated, shoppingDone, coffeePrepared, picturePainted, meditationDone, fishingDone, tvWatched, flowerSmelled);
    std::cout << "good to go!" << std::endl;
    return 0;        
}
