#ifndef GAME_HPP
#define GAME_HPP

#include <memory>
#include <SFML/Graphics.hpp>

class Game
{
public:
    void Setup();
    void Run();

private:
    bool is_running_{false};
    std::unique_ptr<sf::RenderWindow> window_;

    void Input();
    void Update();
    void Render();
    void Destroy();
};

#endif // GAME_HPP