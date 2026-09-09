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

#else

extern "C" void nocturne_actor_delete_unbind_sounds(CDemonActor *actor) { (void)actor; }

#endif // !NOCTURNE_AUTHENTIC_ACTOR_DELETE
