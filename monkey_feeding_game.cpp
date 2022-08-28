#include <iostream>
#include <windows.h>

// written by chapel1337
// started on 8/27/2022, finished on 8/28/2022
// took frequent breaks when making this because i just got a ps2, project probably could've been finished much quicker

void newline()
{
    std::cout << std::endl;
}

void clear()
{
    std::cout << "\x1B[2J\x1B[H"; // funny
}


//-----------------------------------------------\\


bool monkeyFat{ false };
int monkeyWeight = 80;
int maxWeight = 165;

void feedMonkey();
void checkWeight();
void feedMonkeyFood(char food);
void exit();

void menu()
{
    if (monkeyWeight >= maxWeight)
    {
        monkeyFat = true;

        clear();
        std::cout << "your monkey is fat! it has been put on a diet" << std::endl;
        std::cout << "game over" << std::endl;

        for (int i = 0; i < 3; i++)
        {
            Sleep(1500);
            return;
        }
        exit();
    }
    else if (monkeyWeight != maxWeight)
    {
        char menuAnswer;

        std::cout << "what would you like to do?" << std::endl;
        std::cout << "1. feed monkey food" << std::endl;
        std::cout << "2. check weight of monkey" << std::endl;
        std::cout << "3. exit game" << std::endl;
        std::cin >> menuAnswer;

        switch (menuAnswer)
        {
        case '1':
            feedMonkey();
            break;

        case '2':
            checkWeight();
            break;

        case '3':
            exit();
            break;

        default:
            newline();

            std::cout << "please input 1, 2, or 3" << std::endl;
            std::cout << "if confused, use your brain" << std::endl;

            menu();
            break;
        }
    }
}

void feedMonkey()
{
    char feedAnswer;

    std::cout << "what would you like to feed your monkey?" << std::endl;
    std::cout << "1. apple" << std::endl;
    std::cout << "2. banana" << std::endl;
    std::cout << "3. pomegranate" << std::endl;
    std::cout << "4. peach" << std::endl;
    std::cout << "5. lemon" << std::endl;
    std::cout << "6. ???" << std::endl;
    std::cin >> feedAnswer;

    switch (feedAnswer) // why does this annoying ide format the breaks a tab further
    {
    case '1':
        feedMonkeyFood('1');
    break;

    case '2':
        feedMonkeyFood('2');
    break;

    case '3':
        feedMonkeyFood('3');
    break;

    case '4':
        feedMonkeyFood('4');
    break;

    case '5':
        feedMonkeyFood('5');
    break;

    case '6':
        feedMonkeyFood('6');
    break;

    default:
        newline();

        std::cout << "please input 1, 2, or 3" << std::endl;
        std::cout << "if confused, use your brain" << std::endl;

        menu();
    break;
    }

    menu();
}

void exit()
{
    quick_exit(0);
}

void feedMonkeyFood(char food)
{
    switch (food)
    {
    case '1':
        std::cout << "you fed your monkey an apple!" << std::endl;

        newline();

        monkeyWeight += 7;
    break;

    case '2':
        std::cout << "you fed your monkey a banana!" << std::endl;

        newline();

        monkeyWeight += 10;
    break;

    case '3':
        std::cout << "you fed your monkey a pomegranate!" << std::endl;

        newline();

        monkeyWeight += 12;
    break;

    case '4':
        std::cout << "you fed your monkey a peach!" << std::endl;

        newline();

        monkeyWeight += 6;
    break;

    case '5':
        std::cout << "you fed your monkey a lemon!" << std::endl;

        newline();

        monkeyWeight += 4;
    break;

    case '6':
        std::cout << "???" << std::endl;
        monkeyWeight += 165;
    break;

    default:
        newline();

        std::cout << "please input 1, 2, or 3" << std::endl;
        std::cout << "if confused, use your brain" << std::endl;

        menu();
    break;
    }
}

void checkWeight()
{
    std::cout << "your monkey weighs " << monkeyWeight << std::endl;

    newline();

    menu();
}

void feedMonkeyFood()
{
}

int main() {
    std::cout << "welcome to monkey feeding simulator!" << std::endl;
    newline();

    menu();

    return 0;
}
