// =============================================================================
// FALL DAMAGE FOR THE CLASSES THAT ARE NOT THE STRANGER — implementation
// =============================================================================
//
// See hero_fall.h for the Stranger's rule this applies.

#include "game/hero_fall.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

namespace {

// CStranger::processFrame's landing handler.
const float k_safe_speed      = 20.0f;
const float k_damage_per_unit = 5.0f;
const float k_fatal_damage    = 100.0f;
const float k_ground_margin   = 0.1f;

} // namespace

extern "C" void nocturne_hero_fall_move(CHero *hero, CVector3f *step)
{
    CCharacter *character = &hero->base;
    SDamageInfo damage;
    float       speed;
    int         airborne;

    // moveAndCollide leaves velocity.y at the distance it moved over the
    // frame, so the frame after a landing still carries the fall speed. Only
    // a step that starts off the ground is a landing.
    airborne = (character->closest_distance_threshold + k_ground_margin <=
                (character->base).location.position.y);
    speed = -(character->velocity).y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(character, step);

    if ((airborne == 0) || (nocturne_hero_is_player(hero) == 0) || (speed < k_safe_speed) ||
        (character->hit_points <= 0.0f) ||
        (character->closest_distance_threshold + k_ground_margin <=
         (character->base).location.position.y)) {
        return;
    }
#if !NOCTURNE_AUTHENTIC_GOD_MODE_FALL
    if ((g_CGamePtr->god_mode_enabled != 0) || (g_CGamePtr->allow_damage_flag == 0)) {
        return;
    }
#endif

    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&damage);
    damage.damage_amount = (speed - k_safe_speed) * k_damage_per_unit;
    if (k_fatal_damage < damage.damage_amount) {
        damage.damage_amount = 9999.0f;
#if !NOCTURNE_AUTHENTIC_FATAL_FALL_HEAL
        damage.damage_type = DAMAGE_TYPE_FALL;
#endif
    }
    hero->invincibility_timer = 0.0f;
    (*(((character->base).vtable._uc)->_uc).processDamage)(character, &damage);

    if (0.0f < character->hit_points) {
        (*((character->base).vtable._ub)->processFootstepAtOffset)
            (&character->base, &g_ZeroVector.f, speed * 0.025f + 1.0f);
    }
}

#endif

#if !NOCTURNE_AUTHENTIC_BOTTOMLESS_FALL

extern "C" void nocturne_fall_out_of_world(CCharacter *character)
{
    SDamageInfo damage;

    if ((g_CDemonRaytraceInstance.cube_data == (CDemonCube *)0x0) ||
        ((g_CDemonRaytraceInstance.bbox_max).y <= (g_CDemonRaytraceInstance.bbox_min).y) ||
        ((g_CDemonRaytraceInstance.bbox_min).y - 32.0f <= (character->base).location.position.y) ||
        (character->hit_points <= 0.0f)) {
        return;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&damage);
    damage.damage_amount = 9999.0f;
    damage.damage_type   = DAMAGE_TYPE_FALL;
    if (core_actor_cpp_isOfClass_FUN_0040c6d0(&character->base, (char *)"CHero") != 0) {
        ((CHero *)character)->invincibility_timer = 0.0f;
    }
    (*(((character->base).vtable._uc)->_uc).processDamage)(character, &damage);

    // The Stranger dies of a fall in his own splat, as his landing handler
    // plays it (state 0x12 in STRANGER.SKL). The other classes take the death
    // their processDamage plays.
    if ((character->hit_points <= 0.0f) &&
        (core_actor_cpp_castToClassHash_FUN_0040c790
             (&character->base, g_CStrangerClassInfo.name_hash) != (CDemonActor *)0x0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(character->model).motion_controller, 0x12, 1);
        (*((character->base).vtable._ub)->playSound)(&character->base, (char *)"fall-?.wav");
    }
}

#endif
