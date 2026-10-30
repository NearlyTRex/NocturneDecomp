#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "sound/fwd.h"

#include <string_view>

namespace nocturne::core {

inline constexpr std::string_view kIniFilename = ".\\system\\nocturne.ini";

// What nocturne.ini's settings belong to.
struct SIniDataOwners {
    CGame &game;
    sound::CSndMain &sound_main;
    engine::CConsole &console;
    engine::CSpecial &special;
    platform::IDisplay &display;
    CDFont &fonts;
};

// A nocturne.ini that can't be made writable is fatal: the game was run from the CD.
void readIniData(engine::CIni &ini, platform::IFileSystem &file_system,
                 const SIniDataOwners &owners);
void writeIniData(engine::CIni &ini, const SIniDataOwners &owners);

} // namespace nocturne::core
