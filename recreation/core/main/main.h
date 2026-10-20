#pragma once

#include "common/error/error.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"
#include "support/fwd.h"

#include <functional>
#include <span>
#include <string_view>

namespace nocturne::core {

struct SIniDataOwners;

// Everything startup brings up. play_movie plays directory\filename to its end, false when there
// is no such file; it reaches wincore, which this module may not name.
struct SGameSystemOwners {
    engine::CIni &ini;
    platform::IFileSystem &file_system;
    const SIniDataOwners &ini_owners;
    engine::CDosIo &dosio;
    engine::CPod &pod;
    support::CNewMsg &messages;
    engine::CTexture &texture;
    engine::C2d &two_d;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    engine::IRawInput &raw_input;
    std::function<bool(std::string_view, std::string_view)> play_movie;
    CSound &sound;
    CDemonMission &mission;
    std::span<CDemonFilter> global_filters;
    std::span<CDemonFilter> player_filters;
    engine::CMouse &mouse;
    CNetGame &net_game;
    CMenu &menu;
};

using common::displayErrorAndQuit;
// Reads the INI, mounts the pods and brings up graphics at 640x480x32, then fonts, the first
// run's calibration, the opening movie, a loading screen, sound, the light filters, the mouse
// and the network.
void initializeGameSystems(const SGameSystemOwners &owners);
// The main menu, until it quits; showMainGameMenu's result.
int enterMainGameMenu(CMenu &menu);
void showDeveloperToolsMenu();

} // namespace nocturne::core
