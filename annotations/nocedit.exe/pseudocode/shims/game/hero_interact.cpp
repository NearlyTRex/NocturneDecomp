// =============================================================================
// HERO WORLD INTERACTION — implementation
// =============================================================================
//
// See hero_interact.h for what this is and which classes were missing it.

#include "game/hero_interact.h"
#include "nocturne.h"

extern "C" int nocturne_hero_interact(CHero *hero)
{
    int door_result;

    if (hero == (CHero *)0x0) {
        return 0;
    }

    if (core_hero_cpp_CHero_tryInteract_FUN_004f2af0(hero) != 0) {
        return 1;
    }

    // The shape the four melee classes use, kept exactly: tryOpenNearbyDoor
    // reports 0 for "nothing there" and 1 for a door it already handled, and
    // anything else means it found one that needs tryOpenDoor to test the key.
    door_result = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(hero);
    if ((door_result != 0) && (door_result != 1)) {
        core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(hero);
    }
    if (door_result != 0) {
        return 1;
    }

    if (core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(hero) != 0) {
        return 1;
    }

    if (core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(hero) != 0) {
        core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(hero);
        return 1;
    }

    return 0;
}
