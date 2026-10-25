#pragma once

// =============================================================================
// MENUS SUPPORT — the pick lists, the save directory and the mission the menu
// shims reach
// =============================================================================
//
// The engine's pick list and menu, its file finder over save\, its LZW decoder,
// its world\ lookup, its events and messages, and the menu-screen and cheat
// shims, stood in for and recording what they were handed. The saves the
// finder lists are named here; read_save_text opens them for real, from the
// working directory. reset() puts everything back.

#include "nocturne.h"

#include <deque>
#include <map>
#include <set>
#include <string>
#include <vector>

namespace menus_support {

// A save the finder lists.
struct Listed {
    std::string name;
    uint size;
    uint timestamp;
};

struct Stand {
    // --- pick lists -------------------------------------------------------------
    std::vector<std::string> rows; // CStrList_add, for the last list built
    std::set<int> disabled;        // enableItem(..., 0)
    std::string title;             // displayChoicesAndWaitForInput's
    int initial = -2;
    std::deque<int> choices; // what it answers, in turn; -1 when empty
    int lists_shown = 0;

    // --- the main-menu screen -----------------------------------------------------
    std::deque<int> menu_choices; // renderMenuAndGetChoice; -1 when empty
    std::vector<int> menu_counts; // how many lines each frame offered
    int cancelled = 0;            // nocturne_menu_cancelled

    // --- dialogs --------------------------------------------------------------
    int confirm = 1;                 // showDestructiveActionConfirmDialog
    std::vector<std::string> errors; // showError

    // --- the world and the saves ----------------------------------------------
    std::set<std::string> missions;               // world\ files getFile finds, lower case
    std::vector<Listed> saves;                    // CFileFinder over save\*.noc
    std::map<std::string, std::string> localized; // getLocalizedString; else the key
    std::vector<std::string> saved;               // saveGame
    std::vector<std::string> commands;            // executeCommands
    std::vector<std::string> messages;            // displayMessage

    // --- the other shims --------------------------------------------------------
    int warps_cheat = 1; // nocturne_cheat_active(NOCTURNE_CHEAT_WARPS)
    int net_active = 0;

    void reset();
};

extern Stand stand;

extern CDemonMission *mission;
extern CGame *game;

// The mission now running, by root name.
void run_mission(const char *name);

} // namespace menus_support
