#pragma once

// =============================================================================
// GAMEPAD SUPPORT — the controllers SDL would report, and what the pad touches
// =============================================================================
//
// This directory's build of gamepad.cpp calls gamepad_sdl_* in place of SDL's
// controller, focus and clock calls (CMakeLists.txt), so the pads are the ones
// a test plugs in here and never one on the machine. The keyboard state, the
// joystick globals the shipped path published, the typed-character queue,
// Restore Defaults and the map's binding are stood in for as well.

// The tests' own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <deque>
#include <string>
#include <vector>

namespace gamepad_support {

// A device SDL lists.
struct Pad {
    bool controller = true; // SDL_IsGameController
    bool opens = true;      // SDL_GameControllerOpen succeeds
    const char *name = "Pad";
    SDL_GameControllerType type = SDL_CONTROLLER_TYPE_XBOXONE;
    bool attached = true;
    Uint8 buttons[SDL_CONTROLLER_BUTTON_MAX] = {};
    Sint16 axes[SDL_CONTROLLER_AXIS_MAX] = {};
};

struct Stand {
    // A deque, so a pad keeps its place as others are plugged in: the shim
    // holds on to the one it opened.
    std::deque<Pad> pads;
    int subsystem_result = 0;        // SDL_InitSubSystem
    const char *base_path = nullptr; // SDL_GetBasePath; null for none
    int mappings_added = 0;          // what each mapping file adds
    std::vector<std::string> mapping_files;
    bool focused = true; // SDL_GetKeyboardFocus has a window
    Uint32 ticks = 0;    // SDL_GetTicks
    int closed = 0;      // SDL_GameControllerClose

    std::vector<int> typed;    // enqueueInput
    int defaults_restored = 0; // restoreDefaultControls
    int map_binding = 0;       // nocturne_automap_key_binding
    int map_owns_controls = 0; // nocturne_automap_owns_controls
};

extern Stand stand;

// The pad at `i`, as SDL would hand it back.
Pad &pad(int i = 0);

} // namespace gamepad_support
