#include "include/raylib.h"

int main(void)
{
    InitWindow(800, 450, "This is a Template to Create games on linux with raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}