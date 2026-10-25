#pragma once

// =============================================================================
// CHEATS SUPPORT — the menu, the inventory and the world the cheat presets reach
// =============================================================================
//
// The engine's menu, its actor factory and inventory, the item constructors,
// the skeleton the big head scales, the weather, the camera, the events and
// the messages, and the hero and session shims, stood in for and recording what
// they were handed. Items are real structs, kept until the next reset(); the
// party and the class infos are hero_support.h's. reset() puts everything back.

#include "game/hero_weapon.h"
#include "hero_support.h"
#include "nocturne.h"

#include <deque>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <utility>
#include <vector>

namespace cheats_support {

using namespace hero_support;

// What renderMenuAndGetChoice answers on a frame where the player backs out.
const int kCancel = -100;

// One renderMenuAndGetChoice call.
struct Frame {
    std::vector<std::string> lines;
    std::string title;
};

struct Stand {
    // --- the menu -------------------------------------------------------------
    // What each frame answers, in turn: a line, -1 for none, or kCancel. Once
    // these run out every frame cancels, so no menu outlives its script.
    std::deque<int> choices;
    int left = 0; // g_MenuLeftRightPressed each frame
    std::vector<Frame> frames;

    // --- the actor factory ----------------------------------------------------
    std::vector<std::string> created;  // createActorByName, by class
    std::set<std::string> not_items;   // ...made as no class it asks for
    int alloc_fails = 0;               // debugAllocTracked1 answers none
    int named = 0;                     // generateActorName
    std::vector<CDemonActor *> set_up; // setup
    std::vector<std::pair<CDemonActor *, CDemonActor *>> picked_up; // pickup: item, carrier
    std::set<const void *> no_model;                                // getItemModel answers none

    // --- the hero shims -------------------------------------------------------
    std::map<const void *, std::set<int>> refused; // nocturne_hero_can_hold_kind; by hero
    std::vector<int> kinds;                        // what it was asked
    int session = 0;                               // nocturne_net_session_active

    // --- the world ------------------------------------------------------------
    std::map<std::string, int> bones;          // findBone; else -1
    std::vector<std::pair<int, float>> scaled; // scaleBoneRecursive: bone, factor
    std::vector<std::string> precached;        // preCache, by model name
    std::vector<EWeatherType> weather;         // setWeatherType
    std::vector<int> camera_heights;           // reinitCamera
    std::vector<std::string> events;           // addOrRemovePersistentEvent
    std::vector<std::string> messages;         // displayMessage

    void reset();
};

extern Stand stand;

extern CGame *game;
extern CDemonSet *set;
extern CSkeleton *skeleton;

// A character in the set, with a model named `model` ("" for none).
CCharacter *set_character(const char *model);

// An item of class `type` in `hero`'s inventory, its model named `model`.
CDemonActor *carry(CHero *hero, CDemonActorType *type, const char *model);

// The items in `hero`'s inventory whose model is `model`.
int count_model(CHero *hero, const char *model);

// The items in `hero`'s inventory of class `class_name`.
int count_class(CHero *hero, const char *class_name);

// Moves into an empty directory `name` under the temporary one, where the
// cheats' ini is written; one name per test binary, as they may run at once.
void enter_empty_dir(const char *name);

} // namespace cheats_support
