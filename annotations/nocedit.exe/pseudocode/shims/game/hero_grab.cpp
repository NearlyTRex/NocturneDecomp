// =============================================================================
// BREAKING OUT OF A GRAB — implementation
// =============================================================================
//
// See hero_grab.h for why only the Stranger had this.

#include "game/hero_grab.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HERO_GRAB

namespace {

// CStranger's own figure, from the grab_timer test in CStranger::processFrame.
const float k_hold_seconds = 1.5f;

// CStranger keeps his timer in a field of his own (CStranger::grab_timer);
// CHero has nowhere to put one, so the timer lives here. A slot is claimed on
// the first held frame and given back the moment the hero is free again, so a
// fresh grab always starts from zero - including a sentinel that grabs the
// same hero straight back.
//
// Two players and the handful of hero NPCs a mission carries; the table only
// ever holds heroes that are being held right now.
struct SGrabHold {
    CHero *hero;
    float held_for;
};

SGrabHold g_holds[8];

#define GRAB_HOLD_COUNT ((int)(sizeof(g_holds) / sizeof(g_holds[0])))

// The slot for `hero`, claiming a free one if it has none. Null when every
// slot is taken, which the caller reads as "no escape this frame".
SGrabHold *find_hold(CHero *hero)
{
    SGrabHold *first_free;
    int i;

    first_free = (SGrabHold *)0x0;
    for (i = 0; i < GRAB_HOLD_COUNT; i++) {
        if (g_holds[i].hero == hero) {
            return &g_holds[i];
        }
        if ((g_holds[i].hero == (CHero *)0x0) && (first_free == (SGrabHold *)0x0)) {
            first_free = &g_holds[i];
        }
    }
    if (first_free != (SGrabHold *)0x0) {
        first_free->hero = hero;
        first_free->held_for = 0.0f;
    }
    return first_free;
}

void release_hold(CHero *hero)
{
    int i;

    for (i = 0; i < GRAB_HOLD_COUNT; i++) {
        if (g_holds[i].hero == hero) {
            g_holds[i].hero = (CHero *)0x0;
            g_holds[i].held_for = 0.0f;
            return;
        }
    }
}

} // namespace

#endif // !NOCTURNE_AUTHENTIC_HERO_GRAB

extern "C" int nocturne_hero_grab_escape(CHero *hero, float delta_time)
{
#if NOCTURNE_AUTHENTIC_HERO_GRAB
    (void)hero;
    (void)delta_time;
    return 0;
#else
    SGrabHold *hold;

    if (hero == (CHero *)0x0) {
        return 0;
    }
    if ((hero->base).grabbed_by == (CDemonActor *)0x0) {
        release_hold(hero);
        return 0;
    }
    // NOT control_type. This ran on every hero on every machine except the one
    // it mattered on: CDemonMission::createHeros sets every hero to 1 and then
    // g_HeroActors[g_LocalHeroIndex]->control_type = HERO_CONTROL_PLAYER, and
    // g_LocalHeroIndex is *supposed* to differ per machine - it is the same
    // per-machine identity net_sim.h exists to keep out of simulation code.
    // Gating on it meant a guest's hero broke free on the guest and stayed
    // held on the host, and the release drew an RNG number on one machine and
    // not the other. Every hero, every machine: grabbed_by and delta_time are
    // both lockstep state, so this is the same decision everywhere.
    //
    // grabbed_type 1 is the scripted grab, which CStranger does not break out
    // of either.
    if ((hero->base).grabbed_type == 1) {
        return 0;
    }

    hold = find_hold(hero);
    if (hold == (SGrabHold *)0x0) {
        return 0;
    }
    hold->held_for = hold->held_for + delta_time;
    if (hold->held_for < k_hold_seconds) {
        return 0;
    }

    // CHero::releaseFromGrab forces STAND when a GETGRABBED state is still
    // blended in and then clears grabbed_by, which notifies the grabber
    // through onVictimLost so it drops its victim too.
    release_hold(hero);
    (*(((hero->base).base.vtable._uc)->_uc).releaseFromGrab)(&hero->base);
    return 1;
#endif
}

extern "C" int nocturne_grab_carry_move(CDemonActor *victim, CVector3f *world_target)
{
#if NOCTURNE_AUTHENTIC_HERO_GRAB
    (void)victim;
    (void)world_target;
    return 0;
#else
    CCharacter *character;
    CVector3f world_delta;
    CVector3f local_delta;

    if ((victim == (CDemonActor *)0x0) || (world_target == (CVector3f *)0x0)) {
        return 0;
    }
    // moveAndCollide is CCharacter's. Anything else keeps the caller's write.
    character = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (victim, g_CCharacterClassInfo.name_hash);
    if (character == (CCharacter *)0x0) {
        return 0;
    }

    world_delta.x = world_target->x - (victim->location).position.x;
    world_delta.y = world_target->y - (victim->location).position.y;
    world_delta.z = world_target->z - (victim->location).position.z;

    // moveAndCollide takes the step in the actor's own frame - it starts by
    // running it back through CDemonActor::transformVector - so the world
    // delta has to be brought into that frame first.
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
        (victim, &local_delta, &world_delta);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(character, &local_delta);
    return 1;
#endif
}
