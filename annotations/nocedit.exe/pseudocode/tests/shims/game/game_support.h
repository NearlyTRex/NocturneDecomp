#pragma once

// =============================================================================
// GAME SUPPORT — the heroes, the mission and the engine calls the game shims reach
// =============================================================================
//
// The globals they read, defined here; the engine's motion, sound, grab and
// lookup calls, and the shims outside these that they lean on (the hero motion
// helpers, the items, Moloch's regeneration, the netplay hero names), stood in
// for and recording what they were handed. The party is hero_support.h's.
// reset() puts everything back.

#include "hero_support.h"
#include "nocturne.h"

#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>

namespace game_support {

using namespace hero_support;

struct Stand {
    // --- what the engine was asked to do ---------------------------------------
    std::vector<std::pair<CCharacter *, float>> smoked; // processSmoking
    std::vector<std::pair<CHero *, int>> grabbed;       // getGrabbed: hero, grab type
    int grab_result = 1;
    std::vector<CDeformableModelInstance *> reassembled; // showAllParts
    std::vector<int> jumped;                             // jumpToMotion's motion index
    std::vector<std::pair<int, int>> desired;            // setDesiredState: state, force

    // --- the other shims --------------------------------------------------------
    std::vector<CHero *> items_processed;                  // nocturne_hero_items_process
    std::vector<std::pair<CMoloch *, float>> regenerated;  // nocturne_moloch_regenerate
    std::map<std::string, int> motion_states;              // find_state; else -1
    std::vector<std::pair<CCharacter *, int>> forced;      // force_state
    std::set<const void *> in_set;                         // nocturne_hero_in_set
    std::vector<std::pair<CCharacter *, CVector3f>> moved; // move_world
    int net_active = 0;
    std::map<const void *, int> hero_types; // net_hero_type_of; else -1

    // --- the rest ---------------------------------------------------------------
    std::map<std::string, CDemonActor *> named; // findActorByName
    std::set<unsigned int> playing;             // isSfxPlaying
    std::map<std::string, float> durations;     // getSoundDuration; else -1

    void reset();
};

extern Stand stand;

} // namespace game_support
