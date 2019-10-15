#include <Player.h>

Player::Player(){};
Player::~Player(){};

void Player::initialize()
{
	m_texture.loadFromFile("Assets//Sprites//017_Png.png");
	m_sprite.setTexture(m_texture);
}
void Player::update()
{
	cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow* const t_window)
{
	t_window->draw(m_sprite);
	m_sprite.setScale({ 0.25f,0.25f });
}