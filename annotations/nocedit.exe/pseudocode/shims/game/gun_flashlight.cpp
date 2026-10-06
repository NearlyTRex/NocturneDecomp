// =============================================================================
// GUN-MOUNTED FLASHLIGHT FOR HEROES WITHOUT ONE — implementation
// =============================================================================
//
// See gun_flashlight.h.

#include "game/gun_flashlight.h"
#include "game/hero_light.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

namespace {

// The hero classes that take the switch. The Stranger has his own.
const CDemonActorType *const k_classes[] = {
    &g_CGabriellaClassInfo,
    &g_CScatClassInfo,
    &g_CColonelClassInfo,
};

// CGabriella::process toggles a CLightActor carried in a hand from the same
// button, so a hero holding one is left to that.
bool carries_lamp(CHero *hero) {
    for (int hand = 0; hand < 2; hand++) {
        if (core_actor_cpp_castToClassHash_FUN_0040c790(
                (hero->base).carry_hands[hand].carry_actor,
                g_CLightActorClassInfo.name_hash) != nullptr) {
            return true;
        }
    }
    return false;
}

bool takes_gun_flashlight(CHero *hero) {
    if (carries_lamp(hero)) {
        return false;
    }
    for (size_t i = 0; i < sizeof(k_classes) / sizeof(k_classes[0]); i++) {
        if (core_actor_cpp_castToClassHash_FUN_0040c790(&(hero->base).base,
                                                        k_classes[i]->name_hash) != nullptr) {
            return true;
        }
    }
    return false;
}

void click(CHero *hero) {
    (*((hero->base).base.vtable._ub)->playSound)((CDemonActor *)hero, (char *)"flashlit.wav");
}

void apply_input(CHero *hero) {
    int *flashlight = nocturne_hero_flashlight(hero);
    CWeapon *weapon = hero->inventory.selected_weapon;
    const bool takes_light = (weapon != nullptr) && (weapon->can_attach_light != 0);
    const bool drawn =
        (*(((hero->base).base.vtable._uh)->_uh).isWeaponDrawn)(hero) != 0;

    if (*flashlight != 0 && (!drawn || !takes_light)) {
        *flashlight = 0;
        click(hero);
    }
    if (hero->player_input.action_state.light != 0 && takes_light) {
        *flashlight = (*flashlight == 0);
        if (*flashlight != 0 && !drawn) {
            hero->player_input.action_state.draw = 1;
        }
        click(hero);
    }
}

} // namespace

extern "C" void nocturne_gun_flashlight_apply_inputs(void) {
    for (int i = 0; i < g_HeroCount && i < 4; i++) {
        CHero *hero = g_HeroActors[i];
        if (hero != nullptr && takes_gun_flashlight(hero)) {
            apply_input(hero);
        }
    }
}

#else

extern "C" void nocturne_gun_flashlight_apply_inputs(void) {}

#endif
