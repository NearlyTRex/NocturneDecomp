// =============================================================================
// REFERENCES TO A DELETED ACTOR — implementation
// =============================================================================
//
// See actor_delete.h for why the binding is cleared rather than the sound
// killed, and why this has to hold the sound lock.

#include "game/actor_delete.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_ACTOR_DELETE

namespace {

// SFX_SLOT_COUNT is the engine's own: killSfxByName, pollAndMixSfx and the rest
// all walk g_SfxSlots with a literal 64. Derived from the array so a resize
// cannot leave this behind.
#define SFX_SLOT_COUNT ((int)(sizeof(g_SfxSlots) / sizeof(g_SfxSlots[0])))

// The two tracking formats CSfxSlot::updateBoundPositionAndVelocity reads
// through a pointer; 0 is a static position it copies from the options.
#define SFX_TRACK_NONE    0
#define SFX_TRACK_FLOAT3  1
#define SFX_TRACK_DOUBLE3 2

} // namespace

extern "C" void nocturne_actor_delete_unbind_sounds(CDemonActor *actor)
{
    CSfxOptions *options;
    void        *actor_position;
    int          i;

    if (actor == (CDemonActor *)0) {
        return;
    }
    // What CDemonActor::playSound hands CSound::playActorSound, and what
    // CLightGun and its neighbours pass to setNextSfxTrackedFloatPosition.
    actor_position = (void *)&(actor->location).position;

    sound_sndmain_cpp_lockSound_FUN_005abd30();
    for (i = 0; i < SFX_SLOT_COUNT; i++) {
        options = &g_SfxSlots[i].options;

        // userdata[0] is the emitter playSfxInternal was given, so a slot the
        // actor started is unbound whichever of its fields the tracker aimed at.
        if ((options->position_source_ptr == actor_position) ||
            (options->userdata[0] == (void *)actor)) {
            options->position_source_ptr = (void *)0;
            options->position_format     = SFX_TRACK_NONE;
        }
        if ((options->velocity_source_ptr == actor_position) ||
            (options->userdata[0] == (void *)actor)) {
            options->velocity_source_ptr = (void *)0;
            options->velocity_format     = SFX_TRACK_NONE;
        }

        // Not a tracker, but the same dangling read: anything still asking the
        // mixer which actor a slot belongs to would be asking about freed memory.
        if (options->userdata[0] == (void *)actor) {
            options->userdata[0] = (void *)0;
        }
        if (options->userdata[1] == (void *)actor) {
            options->userdata[1] = (void *)0;
        }
    }
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
}

extern "C" void nocturne_actor_delete_unbind_heroes(CDemonActor *actor)
{
    CStranger *stranger;
    CHero *hero;
    CInventory *inventory;
    int hero_index;
    int hand_index;

    for (hero_index = 0; hero_index < g_HeroCount; hero_index = hero_index + 1) {
        hero = g_HeroActors[hero_index];
        if (hero == (CHero *)0x0) {
            continue;
        }
        stranger = (CStranger *)core_actor_cpp_castToClassHash_FUN_0040c790
                                    (&(hero->base).base, g_CStrangerClassInfo.name_hash);
        if ((stranger != (CStranger *)0x0) && (stranger->weapon == (CWeapon *)actor)) {
            stranger->weapon = (CWeapon *)0x0;
        }
        for (hand_index = 0; hand_index < 2; hand_index = hand_index + 1) {
            if ((hero->base).carry_hands[hand_index].carry_actor == actor) {
                (hero->base).carry_hands[hand_index].carry_actor = (CDemonActor *)0x0;
            }
        }
        inventory = &hero->inventory;
        if (inventory->selected_weapon == (CWeapon *)actor) {
            inventory->selected_weapon = (CWeapon *)0x0;
        }
        if (inventory->selected_item == actor) {
            inventory->selected_item = (CDemonActor *)0x0;
        }
    }
}

#else

extern "C" void nocturne_actor_delete_unbind_sounds(CDemonActor *actor) { (void)actor; }
extern "C" void nocturne_actor_delete_unbind_heroes(CDemonActor *actor) { (void)actor; }

#endif // !NOCTURNE_AUTHENTIC_ACTOR_DELETE
