#include "MainMenu.h"
MainMenu :: MainMenu(float width, float height)
{
    if(!font.loadFromFile("data/font/Con.ttf"))
        cout<<"O";
    mainMenu[0].setFont(font);
    mainMenu[0].setFillColor(Color :: White);
    mainMenu[0].setString("PLAY");
    mainMenu[0].setCharacterSize(40);
    mainMenu[0].setPosition(300, 100);

    //option
    mainMenu[1].setFont(font);
    mainMenu[1].setFillColor(Color :: White);
    mainMenu[1].setString("OPTIONS");
    mainMenu[1].setCharacterSize(40);
    mainMenu[1].setPosition(300, 200);
    //about
    mainMenu[2].setFont(font);
    mainMenu[2].setFillColor(Color :: White);
    mainMenu[2].setString("ABOUT");
    mainMenu[2].setCharacterSize(40);
    mainMenu[2].setPosition(300, 300);
    //exit
    mainMenu[3].setFont(font);
    mainMenu[3].setFillColor(Color :: White);
    mainMenu[3].setString("EXIT");
    mainMenu[3].setCharacterSize(40);
    mainMenu[3].setPosition(300, 400);

    MainMenuSelected = -1;

}
MainMenu::~MainMenu()
{

}
//draw mainMenu
void MainMenu::draw(RenderWindow& window)
{
    for(int i = 0; i < Max_main_menu; i++)
    {
        window.draw(mainMenu[i]);
    }
}
void MainMenu::MoveUp()
{
    if(MainMenuSelected - 1 >= 0)
    {
        mainMenu[MainMenuSelected].setFillColor(Color :: White);
        MainMenuSelected--;
        if(MainMenuSelected == -1)
        {
            MainMenuSelected = 2;
        }
        mainMenu[MainMenuSelected].setFillColor(Color::Red);


    }
}
void MainMenu::MoveDown()
{
    if(MainMenuSelected - 1 <=  Max_main_menu)
    {
        mainMenu[MainMenuSelected].setFillColor(Color :: White);
        MainMenuSelected++;
        if(MainMenuSelected == 4)
        {
            MainMenuSelected = 0;
        }
        mainMenu[MainMenuSelected].setFillColor(Color::Red);


    }
}


