// =============================================================================
// HERO BEHAVIOUR, AUTHENTIC DAMAGE — the shipped rules inside the additions
// =============================================================================
//
// Built with NOCTURNE_AUTHENTIC_GOD_MODE_FALL, _FATAL_FALL_HEAL,
// _FRIENDLY_FIRE and _NETPLAY: the landing handler and Moloch's damage stay,
// with the shipped game's rules inside them.

#include "behaviour_support.h"
#include "game/hero_fall.h"
#include "game/hero_items.h"
#include "game/hero_moloch.h"
#include "nocturne_test.h"

#include <cstring>
#include <memory>

using namespace behaviour_support;

// A landing hurts through god mode, and a fatal one is no fall to the damage
// code, which then lets a health item heal it.
NOCTURNE_TEST(a_landing_hurts_as_shipped) {
    stand.reset();
    place_heroes(1);
    CHero *hero = heroes[0];
    hero->base.base.location.position.y = 5.0f;
    hero->base.velocity.y = -60.0f;
    game->god_mode_enabled = 1;
    stand.on_move = [](CCharacter *c, CVector3f *) { c->base.location.position.y = 0.0f; };
    CVector3f step = {0.0f, -5.0f, 0.0f};
    nocturne_hero_fall_move(hero, &step);
    CHECK_EQ(stand.damage.size(), (size_t)1);
    if (!stand.damage.empty()) {
        CHECK_EQ((int)stand.damage[0].second.damage_type, (int)DAMAGE_TYPE_GENERIC);
    }
}

// Auto-use is the game's own setting.
NOCTURNE_TEST(auto_use_is_the_games_setting) {
    stand.reset();
    place_heroes(1);
    game->auto_use_health = 1;
    heroes[0]->base.hit_points = -1.0f;
    SDamageInfo damage = {};
    damage.damage_type = DAMAGE_TYPE_MELEE;
    nocturne_hero_items_damage_taken(heroes[0], &damage);
    CHECK_EQ(stand.health_auto_used, 1);
}

// Moloch takes a friend's shot like anyone's.
NOCTURNE_TEST(moloch_takes_a_friends_shot) {
    stand.reset();
    std::unique_ptr<CMoloch> m(new CMoloch());
    std::memset(m.get(), 0, sizeof(*m));
    give_class(&m->base.base.base, &g_CMolochClassInfo);
    m->base.base.hit_points = 100.0f;
    g_HeroActors[0] = &m->base;
    g_HeroCount = 1;
    nocturne_moloch_install_vtable(m.get());
    stand.friendly_block = 1;
    SDamageInfo damage = {};
    damage.damage_amount = 10.0f;
    m->base.base.base.vtable._uc->_uc.processDamage(&m->base.base, &damage);
    CHECK_EQ(m->base.base.hit_points, 90.0f);
}

NOCTURNE_TEST_MAIN()
