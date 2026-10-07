// =============================================================================
// A KILLED HERO THAT KEEPS STANDING — implementation
// =============================================================================
//
// See hero_death.h for how the DIE request is lost.

#include "game/hero_death.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

extern "C" int nocturne_hero_regenerates(CHero *hero)
{
    if ((hero == (CHero *)0x0) || (0.0f < (hero->base).hit_points)) {
        return 1;
    }
    return (nocturne_hero_is_player(hero) == 0) ? 1 : 0;
}

extern "C" void nocturne_hero_check_death(CHero *hero)
{
    CCharacter *character;
    int         desired;
    int         die_state;
    int         dead_state;

    if ((hero == (CHero *)0x0) || (0.0f < (hero->base).hit_points) ||
        (nocturne_hero_is_player(hero) == 0)) {
        return;
    }
    character = &hero->base;
    if ((*(((character->base).vtable._uc)->_uc).getDeathState)(character) != DEATH_STATE_ALIVE) {
        return;
    }
    desired    = (character->model).motion_controller.state_index;
    die_state  = nocturne_hero_motion_find_state(character, "DIE");
    dead_state = nocturne_hero_motion_find_state(character, "DEAD");
    if ((die_state < 0) || (desired == die_state) ||
        ((0 <= dead_state) && (desired == dead_state))) {
        return;
    }
    nocturne_hero_motion_force_state(character, die_state);
}

#endif

extern "C" int nocturne_hero_revive(CHero *hero)
{
    CCharacter *character;
    int         destroyed;
    int         stand_state;

    if (hero == (CHero *)0x0) {
        return 0;
    }
    character = &hero->base;

    // Ordinary death does not destroy a hero — CCharacter::getDeathState reads
    // the motion controller's current state name, so "dead" is just the DEAD
    // animation playing over a zeroed hit_points. Putting both back is the
    // whole revive.
    //
    // One death is not ordinary. CTentacle::process swallows its victim by
    // setting that actor's lifecycle_state to ACTOR_DESTROYED, and
    // CDemonMission::buildActiveSetActorList only ever admits ACTOR_CREATED
    // — so the hero leaves the world for good while still sitting on the
    // mission's actor list, invisible and unprocessed, and no amount of
    // health or animation brings it back. It also bypasses processDamage
    // entirely, so such a hero can be destroyed with its health intact and
    // the test below would not even look at it.
    destroyed = ((character->base).lifecycle_state == ACTOR_DESTROYED) ? 1 : 0;
    if (destroyed != 0) {
        (character->base).lifecycle_state = ACTOR_CREATED;

        // Two of the three destroying deaths also take the model apart.
        // CCharacter::dismember detaches every part in turn and
        // CDeformableModelInstance::dismemberPart clears each one's
        // visibility flag, so a hero brought back from that would stand up
        // invisible. CCharacter::shatter only reads those flags — it uses
        // them to choose which parts become debris — so its model is intact
        // and this is a no-op there, as it is for the tentacle.
        //
        // This is how the engine reassembles a character: CBoneGuy::process
        // calls the same function when it puts itself back together after
        // being blown apart. The detached CBodyPart actors need no cleanup
        // here — unlike the bone guy's, they are not tracked, and
        // CBodyPart::process destroys each one on its own.
        core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(&character->model);
    }
    if ((character->hit_points > 0.0f) && (destroyed == 0)) {
        return 0;
    }

    character->hit_points = character->max_hit_points;
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
        (&(character->model).motion_controller, 0, 0.0f);

    // Dying is a DESIRED state, not just an animation: every death path
    // ends in setDesiredState with a death state, and the controller
    // keeps that in state_index. jumpToMotion above only moves
    // current_motion_index, so on its own it leaves the controller
    // still wanting to be dead — CMotionController::advance finds a
    // transition back and the hero plays the death again and drops.
    // Worse, that second death costs no health, so nothing here would
    // fire on a later respawn and it would only move the body.
    //
    // Forcing STAND is how the engine gets a hero out of a stuck state
    // elsewhere; CHero::releaseFromGrab does exactly this.
    stand_state = nocturne_hero_motion_find_state(character, "STAND");
    if (0 <= stand_state) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(character->model).motion_controller, stand_state, 1);
    }
    return 1;
}
