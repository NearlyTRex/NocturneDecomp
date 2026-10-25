#pragma once

// =============================================================================
// WINDOW STAND — a working directory and a window, for the window-mode tests
// =============================================================================
//
// The window mode lives in system/nocturne.ini beside the game, read on first
// use; each test binary is one first use, so the binaries are split by what
// the ini holds then. This is the game's directory, empty, and its window on
// SDL's dummy video driver.

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <filesystem>
#include <string>

namespace window_stand {

// Makes `name` under the temporary directory the working directory, empty.
inline std::filesystem::path enter_game_directory(const std::string &name) {
    std::error_code ec;
    const std::filesystem::path root = std::filesystem::temp_directory_path(ec) / name;
    std::filesystem::remove_all(root, ec);
    std::filesystem::create_directories(root, ec);
    std::filesystem::current_path(root, ec);
    return root;
}

// The game's window, as user32 makes it.
inline SDL_Window *open_window(int width, int height) {
#if defined(_WIN32)
    _putenv_s("SDL_VIDEODRIVER", "dummy");
#else
    setenv("SDL_VIDEODRIVER", "dummy", 1);
#endif
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    return SDL_CreateWindow("Nocturne", 0, 0, width, height, SDL_WINDOW_HIDDEN);
}

} // namespace window_stand
