// =============================================================================
// HERO BEHAVIOUR, AUTHENTIC — the additions off
// =============================================================================
//
// Built with NOCTURNE_AUTHENTIC_HERO_ACTIONS, _LIGHT_FILTER_LOAD, _ACTOR_DELETE
// and _BOTTOMLESS_FALL, each of which puts the shipped behaviour back.

#include "behaviour_support.h"
#include "game/actor_delete.h"
#include "game/gun_flashlight.h"
#include "game/hero_colonel.h"
#include "game/hero_grab.h"
#include "game/light_filter_load.h"
#include "nocturne_test.h"

using namespace behaviour_support;

// No gun flashlight, no replayed light filters, nothing unbound from a deleted
// actor, no grab escape and no collided carry. The death below the world is
// not built at all; its caller is gated the same way.
NOCTURNE_TEST(each_addition_is_off) {
    stand.reset();
    place_heroes(1);
    heroes[0]->player_input.action_state.light = 1;
    nocturne_gun_flashlight_apply_inputs();
    CHECK(stand.sounds.empty());

    nocturne_light_filter_load_replay(nullptr);

    CDemonActor *gone = &character(0)->base;
    g_SfxSlots[0].options.userdata[0] = gone;
    heroes[0]->inventory.selected_item = gone;
    nocturne_actor_delete_unbind_sounds(gone);
    nocturne_actor_delete_unbind_heroes(gone);
    CHECK(g_SfxSlots[0].options.userdata[0] == gone);
    CHECK(heroes[0]->inventory.selected_item == gone);

    heroes[0]->base.grabbed_by = gone;
    CHECK_EQ(nocturne_hero_grab_escape(heroes[0], 10.0f), 0);
    CVector3f target = {1.0f, 2.0f, 3.0f};
    CHECK_EQ(nocturne_grab_carry_move(&heroes[0]->base.base, &target), 0);
}

// The Colonel draws nothing, shoots nothing, dies through the state shipped and
// pushes nobody off. None of it reads him.
NOCTURNE_TEST(the_colonel_is_as_shipped) {
    stand.reset();
    CColonel *colonel = nullptr;
    CHECK_EQ(nocturne_colonel_draw(colonel), 0);
    CHECK_EQ(nocturne_colonel_fire(colonel), 0);
    nocturne_colonel_update_gun(colonel, 0.1f);
    nocturne_colonel_render_gun(colonel);
    CHECK_EQ(nocturne_colonel_death_state(colonel, 5), 5);
    nocturne_colonel_push_off(colonel);
    CHECK(stand.damage.empty());
}

NOCTURNE_TEST_MAIN()
