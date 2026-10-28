#pragma once

// =============================================================================
// FRONT SUPPORT — the engine and the shims the menu pages reach
// =============================================================================
//
// The menu routine answers from a script, a press a frame, and records each
// frame it was handed; every other engine call the pages make, and every shim
// they lean on, is stood in for and logged by name, in order. The game's
// globals they read are defined here. reset() puts it all back.

#include "nocturne.h"

#include <deque>
#include <set>
#include <string>
#include <vector>

namespace front_support {

// One frame's input to renderMenuAndGetChoice.
struct Press {
    int line = -1;       // the line the cursor is moved to; -1 leaves it
    bool choose = true;  // and, with a line, picked on this frame
    bool left = false;   // picked with a left press
    bool escape = false; // Escape down on this frame
    bool close = false;  // the window closing on this frame
};

// One frame as the menu routine was handed it.
struct Frame {
    std::string title; // empty for none
    std::vector<std::string> lines;
    int y = 0;
    int selected = 0; // the cursor, as handed in
};

struct Stand {
    std::deque<Press> presses; // a frame each; when they run out, Escape and a close
    std::vector<Frame> frames;
    std::vector<std::string> calls; // the engine calls and shims, by name

    std::set<int> held;    // getKeyState
    std::set<int> pressed; // getAndClearKeyState, once each

    // What the stood-in shims answer.
    std::deque<int> sp_choices;  // nocturne_single_player_menu; cancel after
    std::deque<int> net_choices; // nocturne_net_menu_multiplayer; cancel after
    std::deque<int> attract;     // nocturne_attract_tick; 0 after
    bool continue_found = true;  // nocturne_save_continue_target
    int muted = 0;               // isSoundMuted
    int upscaler = NOCTURNE_UPSCALER_STANDARD;
    const char *gl_version = "";

    // What the renderer does when it is loaded: g_UseDirect3D after.
    int renderer_loads = 1;
    // What buildCardList lists.
    std::vector<std::string> cards;
    std::vector<int> vendors;
    std::vector<int> devices;

    // --- the mixer the Sound page reads and sets --------------------------------
    int channel_on[3] = {1, 1, 1};
    float channel_level[3] = {0.25f, 0.25f, 1.0f}; // effects, music, dialog
    float movie_level = 1.0f;
    int rate = 22050;
    int bits = 16;
    int channels = 2;
    int hardware_3d = 0;
    int device = 0; // getCurrentSoundDevice
    std::vector<std::string> sound_devices = {"Speakers"};
    int device_mixes = 0; // the device's has_hardware_mixing
    int mixing = 0;       // isHardwareMixingEnabled
    int busy = 0;         // isSoundBusy
    int bars = 0;         // renderAudioSpectrumBar calls

    // --- the pick list ---------------------------------------------------------
    std::vector<std::string> rows; // CStrList_add, for the last list built
    std::string list_title;
    int list_initial = -2;
    int list_selected = -2;       // setSelectedResult
    std::deque<int> list_choices; // what it answers, in turn; -1 when empty

    // --- the keys the bindings capture reads -------------------------------------
    // getKeyState answers `held`; each swap moves the next set into it.
    std::deque<std::set<int>> held_after_swap;
    int invalid_code = -1; // isKeyCodeValidForMode reports this code
    int calibrates = 1;    // calibrateGamepad's answer
    int pad_invert = 1;    // the stick-look invert; each other setting is 10 its index
    int automap_key = 0;   // nocturne_automap_key_binding's int

    void reset();

    int count(const std::string &call) const;

    // Whether `calls` holds `sequence` in that order, not necessarily together.
    bool in_order(const std::vector<std::string> &sequence) const;
};

extern Stand stand;
extern CGame *game;
extern CDemonMission *mission; // not running until g_CDemonMissionPtr is set to it

// The lines of the last frame drawn under `title` ("" for untitled), or none.
std::vector<std::string> lines_of(const std::string &title);

// The last frame drawn.
const Frame &last();

} // namespace front_support
