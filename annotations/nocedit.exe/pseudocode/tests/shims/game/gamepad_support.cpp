// =============================================================================
// GAMEPAD SUPPORT — see gamepad_support.h
// =============================================================================

#include "gamepad_support.h"

#include "game/automap.h"
#include "nocturne.h"

#include <cmath>
#include <cstdlib>
#include <cstring>

char g_KeyboardState[4952] = {};
DWORD g_JoyXPos = 0;
DWORD g_JoyYPos = 0;
DWORD g_JoyZPos = 0;
DWORD g_JoyRPos = 0;
DWORD g_JoyButtons = 0;
int g_JoystickPresent = 0;

namespace gamepad_support {

Stand stand;

Pad &pad(int i) {
    return stand.pads[(size_t)i];
}

} // namespace gamepad_support

using gamepad_support::Pad;
using gamepad_support::stand;

namespace {

Pad *of(SDL_GameController *controller) {
    return (Pad *)controller;
}

// The files SDL_RWFromFile was asked to open, so a stream is its name.
std::deque<std::string> s_opened;

} // namespace

// --- SDL, with SDL's own linkage -----------------------------------------------

extern "C" {

SDL_bool gamepad_sdl_SDL_SetHint(const char *, const char *) {
    return SDL_TRUE;
}

int gamepad_sdl_SDL_InitSubSystem(Uint32) {
    return stand.subsystem_result;
}

const char *gamepad_sdl_SDL_GetError(void) {
    return "no controllers here";
}

// SDL_GameControllerAddMappingsFromFile is these two, as SDL's header defines it.
SDL_RWops *gamepad_sdl_SDL_RWFromFile(const char *file, const char *) {
    s_opened.push_back(file);
    return (SDL_RWops *)&s_opened.back();
}

int gamepad_sdl_SDL_GameControllerAddMappingsFromRW(SDL_RWops *rw, int) {
    stand.mapping_files.push_back(*(const std::string *)rw);
    return stand.mappings_added;
}

char *gamepad_sdl_SDL_GetBasePath(void) {
    if (stand.base_path == nullptr)
        return nullptr;
    char *copy = (char *)std::malloc(std::strlen(stand.base_path) + 1);
    std::strcpy(copy, stand.base_path);
    return copy;
}

void gamepad_sdl_SDL_free(void *memory) {
    std::free(memory);
}

int gamepad_sdl_SDL_NumJoysticks(void) {
    return (int)stand.pads.size();
}

SDL_bool gamepad_sdl_SDL_IsGameController(int index) {
    return stand.pads[(size_t)index].controller ? SDL_TRUE : SDL_FALSE;
}

SDL_GameController *gamepad_sdl_SDL_GameControllerOpen(int index) {
    Pad &p = stand.pads[(size_t)index];
    return p.opens ? (SDL_GameController *)&p : nullptr;
}

const char *gamepad_sdl_SDL_GameControllerName(SDL_GameController *controller) {
    return of(controller)->name;
}

SDL_GameControllerType gamepad_sdl_SDL_GameControllerGetType(SDL_GameController *controller) {
    return of(controller)->type;
}

void gamepad_sdl_SDL_GameControllerClose(SDL_GameController *) {
    stand.closed++;
}

SDL_bool gamepad_sdl_SDL_GameControllerGetAttached(SDL_GameController *controller) {
    return of(controller)->attached ? SDL_TRUE : SDL_FALSE;
}

Uint8 gamepad_sdl_SDL_GameControllerGetButton(SDL_GameController *controller,
                                              SDL_GameControllerButton button) {
    return of(controller)->buttons[button];
}

Sint16 gamepad_sdl_SDL_GameControllerGetAxis(SDL_GameController *controller,
                                             SDL_GameControllerAxis axis) {
    return of(controller)->axes[axis];
}

SDL_Window *gamepad_sdl_SDL_GetKeyboardFocus(void) {
    return stand.focused ? (SDL_Window *)&stand : nullptr;
}

Uint32 gamepad_sdl_SDL_GetTicks(void) {
    return stand.ticks;
}

float gamepad_sdl_SDL_sqrtf(float x) {
    return std::sqrt(x);
}

} // extern "C"

// --- the engine and the map ------------------------------------------------------

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005f2f30(int input_value) {
    stand.typed.push_back(input_value);
}

void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame *) {
    stand.defaults_restored++;
}

int *nocturne_automap_key_binding(void) {
    return &stand.map_binding;
}

int nocturne_automap_owns_controls(void) {
    return stand.map_owns_controls;
}
