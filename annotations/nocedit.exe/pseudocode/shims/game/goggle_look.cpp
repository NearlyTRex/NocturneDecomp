// =============================================================================
// GOGGLE LOOK FOR EVERY HERO — see goggle_look.h
// =============================================================================

#include "game/goggle_look.h"
#include "nocturne.h"

#include <cmath>

namespace {

float s_pitch = 0.0f;
CHero *s_hero = nullptr;

// Whether CStranger::autoAimAtThreat left this Stranger's pitch at zero because
// its hands are empty — which, in a network game, it does whatever the goggles.
bool stranger_pitch_suppressed(CStranger *stranger) {
    if (nocturne_net_session_active() == 0 || stranger->weapon != nullptr) {
        return false;
    }
    CDemonActor *carried = stranger->base.base.carry_hands[1].carry_actor;
    return carried == nullptr || nocturne_hero_is_throwable(carried) == 0;
}

// Whether the goggle camera needs our pitch for `hero`.
bool wants_pitch(CHero *hero) {
    if (hero == nullptr) {
        return false;
    }
    CStranger *stranger = (CStranger *)core_actor_cpp_castToClassHash_FUN_0040c790(
        &(hero->base).base, g_CStrangerClassInfo.name_hash);
    return stranger == nullptr || stranger_pitch_suppressed(stranger);
}

} // namespace

extern "C" void nocturne_goggle_look_tick(float delta_time) {
    CHero *hero = g_HeroActors[g_LocalHeroIndex];
    if ((g_CGamePtr->goggles_active == 0) || !wants_pitch(hero)) {
        return;
    }
    if (hero != s_hero) {
        s_hero = hero;
        s_pitch = 0.0f;
    }
    if ((*(((hero->base).base.vtable._uc)->_uc).getDeathState)(&hero->base) == DEATH_STATE_ALIVE) {
        s_pitch = nocturne_hero_look_pitch(s_pitch, hero->player_input.look_up_down_speed,
                                           delta_time, NOCTURNE_STRANGER_PITCH_UP,
                                           NOCTURNE_STRANGER_PITCH_DOWN);
    }
}

extern "C" float nocturne_goggle_look_pitch(CHero *hero) {
    return (wants_pitch(hero) && hero == s_hero) ? s_pitch : 0.0f;
}

extern "C" void nocturne_goggle_look_reset(void) {
    s_pitch = 0.0f;
}

extern "C" CMatrix3x4f *nocturne_goggle_head_matrix(CHero *hero, CMatrix3x4f *head,
                                                    CMatrix3x4f *level) {
    if (hero == nullptr || core_actor_cpp_castToClassHash_FUN_0040c790(
                               &(hero->base).base, g_CStrangerClassInfo.name_hash) != nullptr) {
        return head;
    }
    // Rotation in w, x, y of each row and position in z, as
    // CDeformableModelInstance::computeBoneTransforms lays them out; the bone's
    // scale multiplies the rotation, so it is each rotation column's length.
    const float scale = std::sqrt(head->m[0].w * head->m[0].w + head->m[1].w * head->m[1].w +
                                  head->m[2].w * head->m[2].w);
    for (int row = 0; row < 3; row++) {
        level->m[row].w = (row == 0) ? scale : 0.0f;
        level->m[row].x = (row == 1) ? scale : 0.0f;
        level->m[row].y = (row == 2) ? scale : 0.0f;
        level->m[row].z = head->m[row].z;
    }
    return level;
}
