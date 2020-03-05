/*
 * GPIO.c
 *
 *  Created on:
 *      Author:
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

#define LED1        BIT0
#define LED2_Red    BIT0
#define LED2_Green  BIT1
#define LED2_Blue   BIT2
#define BLED_Green  BIT4
#define BLED_Red    BIT6
#define BLED_Blue   BIT6
#define B1_Boost    BIT1 //Top
#define B2_Boost    BIT5 //Bottom
#define L1_Launch   BIT1 //Left
#define L2_Launch   BIT4 //Right

// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    //LED1
      P1DIR &= ~LED1;
      P1OUT |= LED1;

    //LED2_RED
      P2DIR |= LED2_Red;
      P2OUT &= ~LED2_Red;

      //LED2_Green
      P2DIR |= LED2_Green;
      P2OUT &= ~LED2_Green;

      //LED2_Blue
      P2DIR |= LED2_Blue;
      P2OUT &= ~LED2_Blue;

      //BLED_Blue
      P5DIR |= BLED_Blue;
      P5OUT &= ~BLED_Blue;

      //BLED_Green
      P2DIR |= BLED_Green;
      P2OUT &= ~BLED_Green;

      //BLED_Red
      P2DIR |= BLED_Red;
      P2OUT &= ~BLED_Red;

    //Buttons

    // Launchpad S2
      P1DIR &= ~L2_Launch;
      P1REN |= L2_Launch;
      P1OUT |= L2_Launch;

    // Boosterpack S1
      P5DIR &= ~B1_Boost;
      P5REN |= B1_Boost;
      P5OUT |= B1_Boost;

    // Boosterpack S2
      P3DIR &= ~B2_Boost;
      P3REN |= B2_Boost;
      P3OUT |= B2_Boost;


    // Turn off all LEDs at the start.
}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    return ((P1IN & L1_Launch) == L1_Launch);
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    return ((P1IN & L2_Launch) == L2_Launch);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return ((P5IN & B1_Boost) == B1_Boost);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    return ((P3IN & B2_Boost) == B2_Boost);
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1OUT = P1OUT |  LED1;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1OUT = P1OUT & ~LED1;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P2OUT = P2OUT |  LED2_Red;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P2OUT = P2OUT & ~LED2_Red;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2OUT = P2OUT |  LED2_Green;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2OUT = P2OUT & ~LED2_Green;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2OUT = P2OUT |  LED2_Blue;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2OUT = P2OUT & ~LED2_Blue;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2OUT = P2OUT |  BLED_Red;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2OUT = P2OUT & ~BLED_Red;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2OUT = P2OUT |  BLED_Green;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2OUT = P2OUT & ~BLED_Green;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5OUT = P5OUT |  BLED_Blue;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5OUT = P5OUT & ~BLED_Blue;
}
