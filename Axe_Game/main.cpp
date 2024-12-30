#include "raylib.h"
#include <cstdio>
#include <iostream>
int main()
{
    int width = 600;
    int height = 450;
    InitWindow(width, height, "Axe_Game");

    int circle_x = 675;
    int circle_y = 600;
    int circle_radius = 25;

    while (!WindowShouldClose())
    {
        
        if (IsKeyDown(KEY_W))
        {
            circle_y -= 1;
        }
        if (IsKeyDown(KEY_S))
        {
            circle_y += 1;
        }
        if (IsKeyDown(KEY_D))
        {
            circle_x += 1;
        }
        if (IsKeyDown(KEY_A))
        {
            circle_x -= 1;
        }
        
        if (circle_x < circle_radius)
        {
            circle_x = circle_radius;
        }
        if (circle_y < circle_radius) 
        {
            circle_y = circle_radius;
        }
        if (circle_y > height - circle_radius) 
        {
            circle_y = height - circle_radius;
        }
        if (circle_x > width - circle_radius) 
        {
            circle_x = width - circle_radius;
        }

        BeginDrawing();
        ClearBackground(RED);
        DrawCircle(circle_x, circle_y, circle_radius, BLUE);
        EndDrawing();
    }

}