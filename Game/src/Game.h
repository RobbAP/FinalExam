#pragma once

#include <GameEngine.h>

union SDL_Event;
class Graphics;
class Camera;
class Player;
class Fruit;

class Game : public GameEngine
{
  friend class GameEngine;

public:
  ~Game();

protected:
  Game();

  void InitializeImpl();
  void UpdateImpl(float dt);
  void DrawImpl(Graphics *graphics, float dt);
  bool getRunning();

  void Reset();
  void CalculateCameraViewpoint(Camera *camera);

  Player *_player;
  Fruit *_fruit;
  int currentScore;
  bool isRunning;

  char buffer[100]; // Title buffer

  Camera *_gameCamera;
};