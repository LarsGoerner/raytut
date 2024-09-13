#include <raylib.h>

int main(void)
{
        int ball_x = 400;
        int ball_y = 400;
        const Color green = { 20, 160, 133, 255 };

        InitWindow(800, 800, "Raytest");
        SetTargetFPS(60);

        // game loop
        while (WindowShouldClose() == false) {
                // 1. Event handling
                if (IsKeyDown(KEY_RIGHT)) {
                        ball_x += 3;
                } else if (IsKeyDown(KEY_LEFT)) {
                        ball_x -= 3;
                } else if (IsKeyDown(KEY_UP)) {
                        ball_y -= 3;
                } else if (IsKeyDown(KEY_DOWN)) {
                        ball_y += 3;
                }

                // 2. Updating Positions

                // 3. Drawing
                BeginDrawing();

                ClearBackground(green);
                DrawCircle(ball_x, ball_y, 20, WHITE);

                EndDrawing();
        }

        CloseWindow();
        return 0;
}