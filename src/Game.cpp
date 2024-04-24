#include "Game.hpp"

void Game::Setup()
{
    window_ = std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), "billiar");
    is_running_ = window_->isOpen();
}

void Game::Run()
{
    while (is_running_)
    {
        Input();
        Update();
        Render();
    }

    Destroy();
}

void Game::Input()
{
    is_running_ = window_->isOpen();
    // check all the window's events that were triggered since the last iteration of the loop
    sf::Event event;
    while (window_->pollEvent(event))
    {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            is_running_ = false;
    }
}

void Game::Update()
{
}

void Game::Render()
{
    window_->display();
}

void Game::Destroy()
{
    window_->close();
}