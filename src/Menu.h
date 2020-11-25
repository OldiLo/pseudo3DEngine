//
// Created by ivan- on 22.01.2020.
//

#ifndef PSEUDO3DENGINE_MENU_H
#define PSEUDO3DENGINE_MENU_H

#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Camera.h"
#include "Button.h"

class Menu
{
private:
    std::vector<Button> buttons;

    bool b_pause = true;

    bool b_settings = false;
    bool b_about = false;

    bool b_textures = true;
    bool b_smooth = false;
    bool b_collision = true;
    double lastTime = 0;

    bool b_pressed = false;
public:
    Menu();

    void drawMenu(sf::RenderWindow& window, double elapsedTime);
    void settings(sf::RenderTarget& window);
    void about(sf::RenderTarget& window);

    [[nodiscard]] bool isPaused() const;
    void setPause(bool active = true);

    [[nodiscard]] bool isSmooth() const;
    void setSmooth(bool active);
    [[nodiscard]] bool isCollision() const;
    void setCollision(bool active);
    [[nodiscard]] bool isTextures() const;
    void setTextures(bool active);
};


#endif //PSEUDO3DENGINE_MENU_H
