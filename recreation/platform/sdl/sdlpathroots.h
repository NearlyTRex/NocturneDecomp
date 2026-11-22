#pragma once

#include "platform/pathroots.h"

#include <string_view>

namespace nocturne::platform::sdl {

// What the platform file compiles in, NOCTURNE_DEFAULT_DATA_DIR and NOCTURNE_DEFAULT_USER_DIR, or
// for NOCTURNE_USER_DIR_FROM_SDL and NOCTURNE_DATA_DIR_FROM_SDL, SDL_GetPrefPath's folder, which
// it makes: NocturneDecomp/Nocturne for the user's, a NocturneDecomp folder of its own for the
// data, which people copy the game into (the macOS app's ~/Library/Application Support).
[[nodiscard]] SPathRootDefaults getPathRootDefaults();

// The game isn't in the data directory: says so on stderr and in a message box, and opens the
// folder when it is the platform's that people fill by hand.
void reportMissingGameData(const SPathRoots &roots, std::string_view message);

} // namespace nocturne::platform::sdl
