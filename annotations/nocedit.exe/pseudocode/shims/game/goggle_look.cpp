// =============================================================================
// GOGGLE LOOK FOR EVERY HERO — see goggle_look.h
// =============================================================================

#include "game/goggle_look.h"
#include "nocturne.h"

namespace {

// CStranger::autoAimAtThreat's aim_pitch limits.
const float kPitchMin = -1.047198f;
const float kPitchMax = 1.22173f;

float s_pitch = 0.0f;
CHero *s_hero = nullptr;

// Whether CStranger::autoAimAtThreat left this Stranger's pitch at zero because
// its hands are empty — which, in a network game, it does whatever the goggles.
bool stranger_pitch_suppressed(CStranger *stranger) {
    if (g_CNetGamePtr == nullptr || g_CNetGamePtr->connection_type == CONNECTION_NONE ||
        stranger->weapon != nullptr) {
        return false;
    }
    CDemonActor *carried = stranger->base.base.carry_hands[1].carry_actor;
    return carried == nullptr ||
           ((*((carried->vtable)._ub)->getAllowedMeleeAttackTypes)(carried) & 4) == 0;
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
        s_pitch += hero->player_input.look_up_down_speed * 3.1415926535f * 2.0f * delta_time;
        if (s_pitch < kPitchMin) {
            s_pitch = kPitchMin;
        }
        if (kPitchMax < s_pitch) {
            s_pitch = kPitchMax;
        }
    }
}

extern "C" float nocturne_goggle_look_pitch(CHero *hero) {
    return (wants_pitch(hero) && hero == s_hero) ? s_pitch : 0.0f;
}

extern "C" void nocturne_goggle_look_reset(void) {
    s_pitch = 0.0f;
}
