#pragma once

// =============================================================================
// NET SUPPORT — the game state and engine calls the netplay shims reach
// =============================================================================
//
// The globals they read, defined here and zeroed; the engine's socket, menus,
// collision, camera and script calls, and the other shims they lean on (the
// hero slots, the cheat table, the menu screen), stood in for and recording
// what they were handed. A test sets the answers it needs and reads back the
// rest; reset() puts both back, and clears the game's globals too.

#include "nocturne.h"

#include <functional>
#include <map>
#include <set>
#include <string>
#include <vector>

namespace net_support {

// A packet CNetGame::send was handed, and to whom.
struct Sent {
    int player;
    int type;
    std::vector<unsigned char> bytes;
};

struct Stand {
    // --- the socket ----------------------------------------------------------
    std::vector<Sent> sent;
    std::vector<SNetworkAddr *> disconnect_notices;
    std::vector<int> pings;           // player indices updatePing was asked about
    int receives = 0;                 // receivePackets calls
    std::function<void()> on_receive; // run inside each receivePackets
    std::vector<int> sync_stages;     // syncPlayers' stages, in order
    int sync_result = 1;
    int disconnects = 0;

    // --- the game's own generators --------------------------------------------
    unsigned int next_random = 0;    // generateRandomValue answers, then counts up
    std::vector<unsigned int> seeds; // setRandomSeed

    // --- the hero slots (game/hero_slot.h) and the hero shims ---------------
    int revive_result = 1;
    std::vector<CHero *> revived;
    std::vector<std::pair<CHero *, int>> goggles;
    int goggles_resets = 0;

    // --- class membership: castToClassHash answers the actor when its set
    // holds the hash ----------------------------------------------------------
    std::map<const void *, std::set<uint>> classes;

    // --- inventories ----------------------------------------------------------
    // "weapon", "item" or "ammo", the inventory, and the category and direction.
    struct Selection {
        std::string kind;
        CInventory *inventory;
        int category;
        int direction;
    };
    std::vector<Selection> selections;

    // --- the cheat table (game/cheats.h) --------------------------------------
    std::vector<unsigned char> cheats_packed;  // what nocturne_cheats_pack writes
    std::vector<unsigned char> cheat_override; // what set_override was given
    int cheat_override_active = 0;
    int cheat_overrides_cleared = 0;

    // --- screens --------------------------------------------------------------
    std::vector<int> menu_choices;       // renderMenuAndGetChoice, front first; -1 after
    std::vector<int> menu_cancels;       // nocturne_menu_cancelled, front first; 0 after
    std::vector<int> pick_choices;       // displayChoicesAndWaitForInput, front first
    std::vector<std::string> pick_lines; // CStrList::add
    std::string pick_title;
    int pick_lists_alive = 0;
    int input_waits = 0;               // clearInputAndWait
    int swaps = 0;                     // swapBuffers
    int clears = 0;                    // clearScreen
    int backdrops = 0;                 // nocturne_menu_backdrop_frame
    std::vector<std::string> drawn;    // drawText
    std::vector<std::string> messages; // CGame::displayMessage
    int sound_resets = 0;
    int sound_configures = 0;
    int hosted = 0; // hostNetworkGame
    int joined = 0; // joinNetworkGame

    // --- the keyboard: held keys read as down, pressed ones once ------------
    std::set<int> held;
    std::set<int> pressed;

    // --- the clock getTime reads, and how far each read moves it -------------
    int time = 0;
    int time_step = 0;

    // --- the script and the mission -------------------------------------------
    int choking = 0;                    // findPersistentEvent("choking")
    CDemonActor *gas_room = nullptr;    // findActorByName("TriggerGasRoom")
    std::set<const void *> in_gas_room; // CTrigger::containsActor
    std::vector<std::string> commands;  // CEventList::executeCommands
    int skip_jumped = 1;                // CScript::skipCinematic
    std::vector<int> skip_processing;   // is_processing at each skipCinematic
    int world_to_local_elsewhere = 0;   // worldToLocalPoint answers its own copy

    // --- collision and the camera ---------------------------------------------
    std::function<float(const CVector3f &, float)> ground;            // processCollisionTypes
    std::function<int(const CVector3f &, const CVector3f &)> blocked; // testVoxelRaycast
    std::function<CVector3i(const CVector3i &)> screen; // worldToScreenWithFrustumCull

    // --- clothing -------------------------------------------------------------
    std::vector<std::string> cloth; // "add strcoat.cth", "load", "setup", "process"

    // --- the error box --------------------------------------------------------
    std::vector<std::string> errors; // displayErrorAndQuit, formatted

    void reset();
};

extern Stand stand;

// The game's objects, zeroed by reset() and pointed at by its globals where a
// test asks.
extern CNetGame net;
extern CGame game;
extern CScript script;
extern CEventList events;
extern CDemonSet *set; // large, so allocated once
extern CDemonMission mission;
extern CHero *heroes[4]; // large, so allocated once; not in g_HeroActors until asked
extern CKeys keys;

// A session: g_CNetGamePtr pointed at `net`, with `players` players, this
// machine the host or a guest, the local player at `local`.
void start_session(EConnectionType connection, int players, int local);

// Puts heroes[0..count) in g_HeroActors, alive, in area 0, each with the
// character vtable below.
void place_heroes(int count);

// What a hero's vtable answers: setPositionAndOrientation moves it,
// releaseFromGrab lets go, getBoundingBox is the box below.
extern CBoundingBox3D box;
extern std::vector<CDemonActor *> grab_releases;

// Gives `actor` that vtable.
void give_vtable(CDemonActor *actor);

// The type of the packet `sent` holds.
int type_of(const Sent &sent);

// The path-map cache's first-use set-up, counted across the run: __arrinit and
// _atexit calls, and CPathMap::reset.
int array_inits();
int atexits();
int path_resets();

} // namespace net_support
