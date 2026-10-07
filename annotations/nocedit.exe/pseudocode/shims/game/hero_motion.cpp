// =============================================================================
// MOTION, MOVEMENT AND AIM HELPERS FOR THE HERO ADDITIONS — implementation
// =============================================================================

#include "game/hero_motion.h"
#include "nocturne.h"

extern "C" int nocturne_hero_motion_state(CCharacter *character)
{
    return core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
               (&(character->model).motion_controller)->state_index;
}

extern "C" int nocturne_hero_motion_find_state(CCharacter *character, const char *name)
{
    return core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
        ((character->model).motion_controller.motion_list_ptr, (char *)name, 0);
}

extern "C" int nocturne_hero_motion_force_state(CCharacter *character, int state)
{
    CMotionController *controller = &(character->model).motion_controller;
    CMotionList       *list = controller->motion_list_ptr;
    int                i;

    for (i = 0; i < list->motion_count; i++) {
        if (list->motions[i].state_index == state) {
            core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0(controller, i, 0.0f);
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(controller, state, 0);
            return 1;
        }
    }
    return 0;
}

extern "C" int nocturne_hero_motion_crossed(CCharacter *character, int state, int prev_state,
                                            float prev_frame, float hit_frame)
{
    float frame;

    if (nocturne_hero_motion_state(character) != state) {
        return 0;
    }
    frame = (character->model).motion_controller.current_frame_number;
    if ((prev_state != state) || (frame < prev_frame)) {
        return hit_frame <= frame;          // the motion started this frame
    }
    return (prev_frame < hit_frame) && (hit_frame <= frame);
}

extern "C" void nocturne_hero_move_world(CCharacter *character, const CVector3f *world_delta)
{
    CVector3f local_delta;

    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
        (&character->base, &local_delta, (CVector3f *)world_delta);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(character, &local_delta);
}

extern "C" float nocturne_hero_approach(float value, float target, float step)
{
    if (value < target - step) {
        return value + step;
    }
    if (target + step < value) {
        return value - step;
    }
    return target;
}

extern "C" float nocturne_hero_look_pitch(float pitch, float look_speed, float delta_time,
                                          float up, float down)
{
    pitch = pitch + look_speed * 3.1415927f * 2.0f * delta_time;
    if (pitch < up) {
        return up;
    }
    if (down < pitch) {
        return down;
    }
    return pitch;
}
