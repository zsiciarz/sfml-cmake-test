#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

int main(int argc, char** argv)
{
    sf::SoundBuffer buffer;
    if (argc < 2)
    {
        std::cerr << "No wave file given!" << std::endl;
        return 1;
    }
    if (!buffer.LoadFromFile(argv[1]))
    {
        std::cerr << "Error loading file: " << argv[1] << std::endl;
        return 2;
    }
    sf::Sound sound;
    sound.SetBuffer(buffer);
    sound.Play();
    while (sound.GetStatus() == sf::Sound::Playing)
    {
        sf::Sleep(0.1f);
    }

    return 0;
}
