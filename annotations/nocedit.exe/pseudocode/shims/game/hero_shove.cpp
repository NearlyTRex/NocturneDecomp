// =============================================================================
// SHOVING AN ENEMY AWAY FROM A HERO — implementation
// =============================================================================

#include "game/hero_shove.h"
#include "nocturne.h"

#include <cmath>

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

namespace {

const float kShoveSeconds = 0.25f;

struct SShove {
    CHero      *owner;
    CCharacter *target;
    float       dir_x;
    float       dir_z;
    float       distance;
    float       elapsed;    // seconds; kShoveSeconds or more is a free slot
};

SShove s_shoves[16];
#define SHOVE_COUNT ((int)(sizeof(s_shoves) / sizeof(s_shoves[0])))


// Eased out: fast at the hit, slowing to a stop.
float shove_progress(float elapsed)
{
    float t = elapsed / kShoveSeconds;

    if (t >= 1.0f) {
        return 1.0f;
    }
    return 1.0f - (1.0f - t) * (1.0f - t);
}

} // namespace

extern "C" void nocturne_hero_shove_start(CHero *owner, CCharacter *target, float distance)
{
    CVector3f *from = &(owner->base).base.location.position;
    CVector3f *to   = &(target->base).location.position;
    float dx = to->x - from->x;
    float dz = to->z - from->z;
    float length = std::sqrt(dx * dx + dz * dz);
    int i;

    if (length <= 0.0f) {
        return;
    }
    for (i = 0; i < SHOVE_COUNT; i++) {
        SShove *shove = &s_shoves[i];

        // A slot is free once finished, or once its owner is no longer a
        // player hero (a mission ended under it).
        if ((shove->target == (CCharacter *)0x0) || (kShoveSeconds <= shove->elapsed) ||
            (nocturne_hero_is_player(shove->owner) == 0)) {
            shove->owner    = owner;
            shove->target   = target;
            shove->dir_x    = dx / length;
            shove->dir_z    = dz / length;
            shove->distance = distance;
            shove->elapsed  = 0.0f;
            return;
        }
    }
}

extern "C" void nocturne_hero_shove_step(CHero *owner, float delta_time)
{
    int i;

    for (i = 0; i < SHOVE_COUNT; i++) {
        SShove *shove = &s_shoves[i];
        CVector3f world_delta;
        float step;

        if ((shove->owner != owner) || (shove->target == (CCharacter *)0x0) ||
            (kShoveSeconds <= shove->elapsed)) {
            continue;
        }
        // The target may have been deleted since the hit.
        if ((nocturne_hero_in_set(shove->target) == 0) ||
            ((shove->target->base).lifecycle_state != ACTOR_CREATED)) {
            shove->target = (CCharacter *)0x0;
            continue;
        }
        step = shove_progress(shove->elapsed + delta_time) - shove_progress(shove->elapsed);
        shove->elapsed = shove->elapsed + delta_time;

        world_delta.x = shove->dir_x * shove->distance * step;
        world_delta.y = 0.0f;
        world_delta.z = shove->dir_z * shove->distance * step;
        nocturne_hero_move_world(shove->target, &world_delta);
    }
}

#endif
