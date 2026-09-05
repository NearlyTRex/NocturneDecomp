// =============================================================================
// NETPLAY — DETERMINISTIC HERO SELECTION — implementation
// =============================================================================
//
// See net_sim.h for why simulation code must not read g_LocalHeroIndex.

#include "net/net_sim.h"
#include "shim_config.h"

#include "nocturne.h"

#define SIM_MAX_HEROES 4

// A hero held out of the world carries a negative area (createOneHero), and a
// dead one should not be what an enemy paths toward while a live one is
// available. Both tests read lockstep state, so every machine agrees.
static int sim_hero_is_targetable(CHero *hero)
{
    if (hero == (CHero *)0x0) {
        return 0;
    }
    if ((hero->base).base.location.area_id < 0) {
        return 0;
    }
    return 1;
}

static CHero *sim_local_hero(void)
{
    if ((g_LocalHeroIndex < 0) || (SIM_MAX_HEROES <= g_LocalHeroIndex)) {
        return (CHero *)0x0;
    }
    return g_HeroActors[g_LocalHeroIndex];
}

static int sim_is_network_game(void)
{
    return ((g_CNetGamePtr != (CNetGame *)0x0) &&
            (g_CNetGamePtr->connection_type != CONNECTION_NONE));
}

extern "C" CHero *nocturne_net_sim_leader_hero(void)
{
    int i;

    if (sim_is_network_game() == 0) {
        return sim_local_hero();
    }
    for (i = 0; i < SIM_MAX_HEROES; i++) {
        if (sim_hero_is_targetable(g_HeroActors[i]) != 0) {
            return g_HeroActors[i];
        }
    }
    return sim_local_hero();
}

// See net_sim.h. The leader, because CMimic::setup builds the mimic out of
// whatever this returns — model, skeleton and cloth — so the copies in
// updatePose match by construction whichever hero it is.
extern "C" CHero *nocturne_net_sim_mimic_hero(void)
{
    if (sim_is_network_game() == 0) {
        // Single player mirrors the player, exactly as shipped.
        return sim_local_hero();
    }
    return nocturne_net_sim_leader_hero();
}

extern "C" CHero *nocturne_net_sim_target_for(CDemonActor *self)
{
    if (self == (CDemonActor *)0x0) {
        return nocturne_net_sim_leader_hero();
    }
    return nocturne_net_sim_target_hero(&self->location.position);
}

extern "C" CHero *nocturne_net_sim_target_hero(const CVector3f *from)
{
    CHero *best = (CHero *)0x0;
    float  best_distance = 0.0f;
    int    i;

    if (sim_is_network_game() == 0) {
        return sim_local_hero();
    }
    if (from == (const CVector3f *)0x0) {
        return nocturne_net_sim_leader_hero();
    }

    for (i = 0; i < SIM_MAX_HEROES; i++) {
        CHero *hero = g_HeroActors[i];
        float  dx;
        float  dy;
        float  dz;
        float  distance;

        if (sim_hero_is_targetable(hero) == 0) {
            continue;
        }
        dx = (hero->base).base.location.position.x - from->x;
        dy = (hero->base).base.location.position.y - from->y;
        dz = (hero->base).base.location.position.z - from->z;
        distance = dx * dx + dy * dy + dz * dz;

        // Strictly-less keeps the lowest index on an exact tie, so two heroes
        // standing on the same spot still resolve the same way everywhere.
        if ((best == (CHero *)0x0) || (distance < best_distance)) {
            best_distance = distance;
            best = hero;
        }
    }

    if (best == (CHero *)0x0) {
        return sim_local_hero();
    }
    return best;
}

// See net_sim.h, "AM I THE PLAYER?", for why the index is substituted rather
// than each subclass patched.
extern "C" int nocturne_net_sim_begin_hero_setup(CDemonActor *actor)
{
    int saved = g_LocalHeroIndex;
    int i;

    if ((actor == (CDemonActor *)0x0) || (sim_is_network_game() == 0)) {
        return saved;
    }
    for (i = 0; (i < SIM_MAX_HEROES) && (i < g_HeroCount); i++) {
        if ((CDemonActor *)g_HeroActors[i] == actor) {
            g_LocalHeroIndex = i;
            break;
        }
    }
    return saved;
}

extern "C" void nocturne_net_sim_end_hero_setup(int saved_local_hero_index)
{
    g_LocalHeroIndex = saved_local_hero_index;
}
