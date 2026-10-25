// =============================================================================
// GUN FLASHLIGHT — the light switch for the heroes whose guns take a light
// =============================================================================

#include "behaviour_support.h"
#include "game/gun_flashlight.h"
#include "game/hero_light.h"
#include "nocturne_test.h"

#include <cstring>
#include <memory>

using namespace behaviour_support;

namespace {

std::unique_ptr<CWeapon> s_gun(new CWeapon());

// Gabriella, local, with a gun that takes a light in her hand.
CHero *armed() {
    stand.reset();
    place_heroes(1);
    nocturne_hero_light_reset();
    std::memset(s_gun.get(), 0, sizeof(*s_gun));
    s_gun->can_attach_light = 1;
    give_class(&heroes[0]->base.base, &g_CGabriellaClassInfo);
    heroes[0]->inventory.selected_weapon = s_gun.get();
    return heroes[0];
}

void press_light(CHero *hero) {
    hero->player_input.action_state.light = 1;
    nocturne_gun_flashlight_apply_inputs();
    hero->player_input.action_state.light = 0;
}

} // namespace

// The switch lights the gun, drawing it if it is away, and puts it out again;
// each time it clicks.
NOCTURNE_TEST(the_switch_lights_the_gun_and_draws_it) {
    CHero *hero = armed();
    press_light(hero);
    CHECK_EQ(*nocturne_hero_flashlight(hero), 1);
    CHECK_EQ(hero->player_input.action_state.draw, 1);
    stand.drawn[hero] = 1;
    hero->player_input.action_state.draw = 0;
    press_light(hero);
    CHECK_EQ(*nocturne_hero_flashlight(hero), 0);
    CHECK_EQ(hero->player_input.action_state.draw, 0);
    CHECK_EQ(stand.sounds.size(), (size_t)2);
}

// Put away, or swapped for a gun with no light, it goes out.
NOCTURNE_TEST(a_light_goes_out_with_its_gun) {
    CHero *hero = armed();
    stand.drawn[hero] = 1;
    press_light(hero);
    stand.drawn[hero] = 0;
    nocturne_gun_flashlight_apply_inputs();
    CHECK_EQ(*nocturne_hero_flashlight(hero), 0);

    stand.drawn[hero] = 1;
    press_light(hero);
    s_gun->can_attach_light = 0;
    nocturne_gun_flashlight_apply_inputs();
    CHECK_EQ(*nocturne_hero_flashlight(hero), 0);
    press_light(hero);
    CHECK_EQ(*nocturne_hero_flashlight(hero), 0);
    hero->inventory.selected_weapon = nullptr;
    press_light(hero);
    CHECK_EQ(*nocturne_hero_flashlight(hero), 0);
}

// Scat and the Colonel take it too; the Stranger has his own, and a hero with
// a lamp in either hand lights the lamp instead.
NOCTURNE_TEST(only_the_gun_classes_without_a_lamp_take_it) {
    for (CDemonActorType *type : {&g_CScatClassInfo, &g_CColonelClassInfo}) {
        CHero *hero = armed();
        give_class(&hero->base.base, type);
        press_light(hero);
        CHECK_EQ(*nocturne_hero_flashlight(hero), 1);
    }
    CHero *hero = armed();
    give_class(&hero->base.base, &g_CStrangerClassInfo);
    press_light(hero);
    CHECK_EQ(*nocturne_hero_flashlight(hero), 0);

    for (int hand = 0; hand < 2; hand++) {
        hero = armed();
        CDemonActor *lamp = &character(hand)->base;
        give_class(lamp, &g_CLightActorClassInfo);
        hero->base.carry_hands[hand].carry_actor = lamp;
        press_light(hero);
        CHECK_EQ(*nocturne_hero_flashlight(hero), 0);
    }
}

// Every player's switch is read, an empty slot passed over, and a count past
// the four slots held to them.
NOCTURNE_TEST(every_players_switch_is_read) {
    CHero *hero = armed();
    place_heroes(4);
    give_class(&hero->base.base, &g_CGabriellaClassInfo);
    g_HeroActors[1] = nullptr;
    g_HeroCount = 5;
    press_light(hero);
    CHECK_EQ(*nocturne_hero_flashlight(hero), 1);
}

NOCTURNE_TEST_MAIN()
