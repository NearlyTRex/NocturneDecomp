// =============================================================================
// NETPLAY — DETERMINISTIC HERO SELECTION — implementation
// =============================================================================
//
// See net_sim.h for why simulation code must not read g_LocalHeroIndex.

#include "net/net_sim.h"
#include "shim_config.h"

#include "nocturne.h"

// See net_sim.h, "WHICH HERO DOES THIS SCRIPT MEAN?". -1 is no record.
static int s_trigger_hero_index = -1;

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
    return nocturne_hero_local();
}


extern "C" CHero *nocturne_net_sim_leader_hero(void)
{
    int i;

    if (nocturne_net_session_active() == 0) {
        return sim_local_hero();
    }
    for (i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
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
    if (nocturne_net_session_active() == 0) {
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

    if (nocturne_net_session_active() == 0) {
        return sim_local_hero();
    }
    if (from == (const CVector3f *)0x0) {
        return nocturne_net_sim_leader_hero();
    }

    for (i = 0; i < NOCTURNE_HERO_SLOTS; i++) {
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
    int slot;

    if (nocturne_net_session_active() == 0) {
        return saved;
    }
    slot = nocturne_hero_slot(actor);
    if (0 <= slot) {
        g_LocalHeroIndex = slot;
    }
    return saved;
}

extern "C" void nocturne_net_sim_end_hero_setup(int saved_local_hero_index)
{
    g_LocalHeroIndex = saved_local_hero_index;
}

extern "C" void nocturne_net_sim_note_trigger_hero(CDemonActor *actor)
{
    int slot;

    if (nocturne_net_session_active() == 0) {
        return;
    }
    slot = nocturne_hero_slot(actor);
    if (0 <= slot) {
        s_trigger_hero_index = slot;
    }
}

extern "C" CHero *nocturne_net_sim_trigger_hero(void)
{
    if ((s_trigger_hero_index < 0) || (g_HeroCount <= s_trigger_hero_index)) {
        return (CHero *)0x0;
    }
    return g_HeroActors[s_trigger_hero_index];
}

// See net_sim.h. The hero the gas room's choke is about, by slot; -1 for none.
static int s_gas_hero_index = -1;

// The script's flagOn/flagOff keep their flags as persistent events.
static int sim_gas_choking(void)
{
    return core_event_cpp_CEventList_findPersistentEvent_FUN_004b0860
               (g_CEventListPtr, (char *)"choking") >= 0;
}

// TriggerGasRoomEscape raises Escape on the frame the room empties; the script
// turns choking off and speaks its escape line on that frame.
static int sim_gas_escaping(void)
{
    const SEventNameBlock *blocks[2];
    int b;
    int i;

    blocks[0] = &g_CEventListPtr->events;
    blocks[1] = &g_CEventListPtr->current_events;
    for (b = 0; b < 2; b++) {
        for (i = 0; i < blocks[b]->count; i++) {
            if (_stricmp((char *)blocks[b]->names[i], (char *)"escape") == 0) {
                return 1;
            }
        }
    }
    return 0;
}

// Nonzero when `hero` stands inside TriggerGasRoom.
static int sim_hero_in_gas_room(CHero *hero)
{
    CTrigger *gas;

    gas = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c790
        (core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
             (g_CDemonMissionPtr, (char *)"TriggerGasRoom"),
         g_CTriggerClassInfo.name_hash);
    return (gas != (CTrigger *)0x0) &&
           (core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(gas, (CDemonActor *)hero) != 0);
}

// Nonzero when `hero` is alive, unmasked and inside TriggerGasRoom.
static int sim_hero_breathes_gas(CHero *hero)
{
    if ((hero == (CHero *)0x0) || ((hero->base).hit_points <= 0.0f) ||
        (hero->is_wearing_gas_mask == 2)) {
        return 0;
    }
    return sim_hero_in_gas_room(hero);
}

// The first player hero, by slot, standing in TriggerGasRoom unmasked, or -1.
static int sim_unmasked_hero_in_gas(void)
{
    int i;

    for (i = 0; (i < NOCTURNE_HERO_SLOTS) && (i < g_HeroCount); i++) {
        if (sim_hero_breathes_gas(g_HeroActors[i]) != 0) {
            return i;
        }
    }
    return -1;
}

extern "C" CHero *nocturne_net_sim_script_hero(void)
{
    int choking;
    int i;

    if (nocturne_net_session_active() == 0) {
        return g_HeroActors[g_LocalHeroIndex];
    }
    choking = sim_gas_choking();
    if (((choking != 0) || (sim_gas_escaping() != 0)) &&
        (0 <= s_gas_hero_index) && (s_gas_hero_index < g_HeroCount)) {
        return g_HeroActors[s_gas_hero_index];
    }
    i = sim_unmasked_hero_in_gas();
    if (0 <= i) {
        s_gas_hero_index = i;
        return g_HeroActors[i];
    }
    if (choking == 0) {
        s_gas_hero_index = -1;
    }
    return g_HeroActors[0];
}

extern "C" int nocturne_net_sim_gas_spares(CHero *hero)
{
    if ((nocturne_net_session_active() == 0) || (hero == (CHero *)0x0)) {
        return 0;
    }
    if ((hero->base).hit_points <= 0.0f) {
        return 1;
    }
    return (sim_gas_choking() == 0) && (sim_hero_breathes_gas(hero) == 0);
}

extern "C" int nocturne_net_sim_spot_in_gas(const CVector3f *feet)
{
    CTrigger *gas;
    CBoundingBox3D box;
    CVector3f world;
    CVector3f local;
    CVector3f *p;

    if (feet == (const CVector3f *)0x0) {
        return 0;
    }
    gas = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c790
        (core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
             (g_CDemonMissionPtr, (char *)"TriggerGasRoom"),
         g_CTriggerClassInfo.name_hash);
    if (gas == (CTrigger *)0x0) {
        return 0;
    }
    // CTrigger::containsActor tests a character's bounding-box centre, which
    // stands about waist height above its feet.
    world = *feet;
    world.y = world.y + 1.5f;
    p = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&(gas->base), &local, &world);
    if (p != &local) {
        local = *p;
    }
    (*((gas->base).vtable._ub)->getBoundingBox)(&(gas->base), &box);
    if ((local.y < box.min.y) || (box.max.y < local.y)) {
        return 0;
    }
    if (gas->shape == 1) {
        return local.x * local.x + local.z * local.z <=
               (gas->trigger_size).x * (gas->trigger_size).z * 0.25f;
    }
    return (box.min.x <= local.x) && (local.x <= box.max.x) &&
           (box.min.z <= local.z) && (local.z <= box.max.z);
}

extern "C" void nocturne_net_sim_gas_tick(void)
{
    char escape[] = "Escape";
    CHero *hero;

    if ((nocturne_net_session_active() == 0) || (g_CEventListPtr == (CEventList *)0x0) ||
        (sim_gas_choking() == 0) || (s_gas_hero_index < 0) ||
        (g_HeroCount <= s_gas_hero_index)) {
        return;
    }
    hero = g_HeroActors[s_gas_hero_index];
    if ((hero == (CHero *)0x0) || ((hero->base).hit_points <= 0.0f) ||
        (sim_hero_in_gas_room(hero) != 0)) {
        return;
    }
    core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr, escape);
}

extern "C" void nocturne_net_sim_forget_trigger_hero(void)
{
    s_trigger_hero_index = -1;
    s_gas_hero_index = -1;
}
