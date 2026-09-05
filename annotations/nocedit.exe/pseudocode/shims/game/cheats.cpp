// =============================================================================
// CHEAT PRESETS — implementation
// =============================================================================
//
// See cheats.h for what this is, why the apply point is startMission, which
// fifteen of the forty-five codes cannot be presets, and why the grants are
// guarded when the shipped cheats are not.

#include "game/cheats.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cstdio>
#include <cstring>
#include <string>

#if !NOCTURNE_AUTHENTIC_CHEAT_MENU

// Defined in shims/crt.cpp — the '\\'->'/' + case-insensitive resolution the
// CRT _fopen shim applies, so the probe below looks at the file the engine
// will actually open.
std::string watcom_resolve_fs_path(const char *path);

namespace {

// The game's own ini, the one inivar.cpp and window_mode.cpp write. Non-const
// because the engine's INI accessors take char *.
char kIniPath[]    = ".\\system\\nocturne.ini";
char kIniSection[] = "Cheats";

// Pages, in picker order. Each is a contiguous run of the cheat indexes.
#define CHEAT_PAGE_GAMEPLAY 0
#define CHEAT_PAGE_WEAPONS  1
#define CHEAT_PAGE_DEBUG    2
#define CHEAT_PAGE_COUNT    3

// Longest page is Weapons & ammo at twelve, plus the Back line.
#define CHEAT_MENU_MAX_LINES 16

// The Options screen's own start-y, so a page's lines land where the ones it
// replaced on screen were.
#define CHEAT_MENU_START_Y 0xfa

struct CheatDef {
    char *label;
    char *ini_key;
    int   page;
    int   state_count;   // 2 for an On/Off line, 3 for the weather cycle
};

// Ordered by the NOCTURNE_CHEAT_* indexes, so this table is the menu order, the
// ini order and the apply order at once. The comment on each line is the code
// the shipped binary wanted typed — see research/08-developer_mode_and_cheats.
const CheatDef kCheats[NOCTURNE_CHEAT_COUNT] = {
    { (char *)"God mode",                 (char *)"godMode",          CHEAT_PAGE_GAMEPLAY, 2 }, // GODGAMES
    { (char *)"Freeze enemies",           (char *)"freezeEnemies",    CHEAT_PAGE_GAMEPLAY, 2 }, // FREEZER
    { (char *)"Gratuitous dismemberment", (char *)"dismemberment",    CHEAT_PAGE_GAMEPLAY, 2 }, // GOREMODE
    { (char *)"Flaming ammo",             (char *)"flamingAmmo",      CHEAT_PAGE_GAMEPLAY, 2 }, // BURNINGSTAKE
    { (char *)"Weather",                  (char *)"weather",          CHEAT_PAGE_GAMEPLAY, 3 }, // THUNDERSTORM / SNOWSTORM
    { (char *)"Big head",                 (char *)"bigHead",          CHEAT_PAGE_GAMEPLAY, 2 }, // BIGHEAD
    { (char *)"Old hat",                  (char *)"oldHat",           CHEAT_PAGE_GAMEPLAY, 2 }, // OLDHAT
    { (char *)"Skeleton key",             (char *)"skeletonKey",      CHEAT_PAGE_GAMEPLAY, 2 }, // SKELETONKEY
    { (char *)"Gas mask",                 (char *)"gasMask",          CHEAT_PAGE_GAMEPLAY, 2 }, // IFARTED

    { (char *)"All weapons",              (char *)"allWeapons",       CHEAT_PAGE_WEAPONS,  2 }, // WINBLOWS
    { (char *)"Shotgun",                  (char *)"shotgun",          CHEAT_PAGE_WEAPONS,  2 }, // GUNRACK
    { (char *)"Crossbow",                 (char *)"crossbow",         CHEAT_PAGE_WEAPONS,  2 }, // STAKEGUN
    { (char *)"Dynamite",                 (char *)"dynamite",         CHEAT_PAGE_WEAPONS,  2 }, // BLOWME
    { (char *)"Flame thrower",            (char *)"flameThrower",     CHEAT_PAGE_WEAPONS,  2 }, // FTHROWER
    { (char *)"Tommy gun",                (char *)"tommyGun",         CHEAT_PAGE_WEAPONS,  2 }, // MACHINEGUN
    { (char *)"Elephant gun",             (char *)"elephantGun",      CHEAT_PAGE_WEAPONS,  2 }, // ELEGUN
    { (char *)"Radiance emitter",         (char *)"lightGun",         CHEAT_PAGE_WEAPONS,  2 }, // LITEGUN
    { (char *)"Summon the baron",         (char *)"baronWeapon",      CHEAT_PAGE_WEAPONS,  2 }, // SATURDAY
    { (char *)"Silver ammo",              (char *)"silverAmmo",       CHEAT_PAGE_WEAPONS,  2 }, // SILVER
    { (char *)"Lithium ammo",             (char *)"lithiumAmmo",      CHEAT_PAGE_WEAPONS,  2 }, // AQUA
    { (char *)"Mercury ammo",             (char *)"mercuryAmmo",      CHEAT_PAGE_WEAPONS,  2 }, // MERCURY

    { (char *)"Developer mode",           (char *)"developerMode",    CHEAT_PAGE_DEBUG,    2 }, // GOLDMODE
    { (char *)"Geometry debug",           (char *)"geometryDebug",    CHEAT_PAGE_DEBUG,    2 }, // PORTER
    { (char *)"Collision render",         (char *)"collisionDebug",   CHEAT_PAGE_DEBUG,    2 }, // COLLISION
    { (char *)"Event debug",              (char *)"eventDebug",       CHEAT_PAGE_DEBUG,    2 }, // EVENT
    { (char *)"Script debug",             (char *)"scriptDebug",      CHEAT_PAGE_DEBUG,    2 }, // SCRIPT
    { (char *)"Memory debug",             (char *)"memoryDebug",      CHEAT_PAGE_DEBUG,    2 }, // MEMORY
    { (char *)"Sound debug",              (char *)"soundDebug",       CHEAT_PAGE_DEBUG,    2 }, // SFXDEBUG
    { (char *)"Environment mapping",      (char *)"renderMode",       CHEAT_PAGE_DEBUG,    2 }, // T2000
    { (char *)"Scripted sequence",        (char *)"scriptedSequence", CHEAT_PAGE_DEBUG,    2 }, // NOD3D

    // No shipped cheat code of its own: the flashlight/goggles battery drain
    // has no engine flag to arm, so this is polled in place by
    // CInventory::updateInventory rather than applied at mission start.
    { (char *)"Infinite battery",         (char *)"infiniteBattery",  CHEAT_PAGE_GAMEPLAY, 2 },
};

char *kPageTitles[CHEAT_PAGE_COUNT] = {
    (char *)"Gameplay",
    (char *)"Weapons & Ammo",
    (char *)"Debug",
};

// Off / Rain / Snow, in the order NOCTURNE_CHEAT_WEATHER_* gives them.
char *kWeatherLabels[3] = { (char *)"Off", (char *)"Rain", (char *)"Snow" };

// 0 or 1 for every line but Weather, which holds a NOCTURNE_CHEAT_WEATHER_*.
int  s_state[NOCTURNE_CHEAT_COUNT];
bool s_loaded = false;

// A host's set, standing in for s_state for the length of a network session.
// Never written to the ini — see the override note in cheats.h.
int  s_override[NOCTURNE_CHEAT_COUNT];
bool s_override_active = false;

// Set when an override is adopted, cleared once the "set by host" message has
// been shown, so the player is told once rather than every mission.
bool s_override_unannounced = false;

// What actually applies: the host's answer while a session is running, this
// machine's otherwise.
int effectiveState(int index)
{
    return s_override_active ? s_override[index] : s_state[index];
}

// An override belongs to a network session. Rather than hook every way one can
// end — disconnect, a dropped host, the lobby being backed out of — notice that
// there is no session any more and drop it here. Checked wherever the states
// are about to be read, so a host's list can never follow the player into
// single player.
void expireOverrideOutsideSession(void)
{
    if (s_override_active &&
        ((g_CNetGamePtr == (CNetGame *)0) ||
         (g_CNetGamePtr->connection_type == CONNECTION_NONE))) {
        s_override_active      = false;
        s_override_unannounced = false;
    }
}

void loadSettings(void)
{
    std::string resolved;
    FILE       *probe;
    int         i;

    if (s_loaded) {
        return;
    }
    s_loaded = true;

    // CIni::getProfileString has NO initialised-guard: if it cannot open the
    // file it calls displayErrorAndQuit("Unable to open input") and takes the
    // process with it. Check the file is really there first, the same way
    // window_mode.cpp does before its own read.
    resolved = watcom_resolve_fs_path(kIniPath);
    probe    = fopen(resolved.c_str(), "rb");
    if (probe == (FILE *)0) {
        return;                                   // every cheat stays off
    }
    fclose(probe);

    for (i = 0; i < NOCTURNE_CHEAT_COUNT; i++) {
        int value = engine_ini_cpp_getProfileInteger_FUN_004fb9a0(
                        kIniSection, kCheats[i].ini_key, 0, kIniPath);
        if ((value < 0) || (kCheats[i].state_count <= value)) {
            value = 0;                            // a hand-edited key
        }
        s_state[i] = value;
    }
}

void saveSetting(int index)
{
    char value[8];

    snprintf(value, sizeof(value), "%d", s_state[index]);
    engine_ini_cpp_writeProfileString_FUN_004fba40(
        kIniSection, kCheats[index].ini_key, value, kIniPath);
}

// The hero the grants go to, or null when no mission is running.
// CDemonMission::removeAllActors zeroes g_HeroCount on teardown, so this is
// the same guard startMission itself makes before it touches the array.
CHero *localHero(void)
{
    if (g_HeroCount < 1) {
        return (CHero *)0;
    }
    return g_HeroActors[g_LocalHeroIndex];
}

// -----------------------------------------------------------------------------
// Grants
// -----------------------------------------------------------------------------

// giveHeroWeapon and giveHeroWeaponAmmo both hardcode g_HeroActors
// [g_LocalHeroIndex], which is a different hero on every machine. In a lockstep
// session that is a desync by construction — the host arms player 0, the guest
// arms player 1, and the two simulations disagree about who is holding what
// from the first shot. These are those two functions with the hero passed in,
// so applyOne can arm every hero in index order and both machines build the
// same world. Faithful otherwise, down to the 500-round load.
void giveWeaponTo(CHero *hero, char *class_name)
{
    CDemonActor *actor;
    CWeapon     *weapon;

    if (core_inv_cpp_CInventory_hasItemOfClass_FUN_004fea20(&hero->inventory, class_name) != 0) {
        return;
    }
    actor = core_actor_cpp_createActorByName_FUN_0040c430(class_name);
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr, actor);
    (*((actor->vtable)._ub)->setup)(actor);
    weapon = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c790(
                            actor, g_CWeaponClassInfo.name_hash);
    if (weapon == (CWeapon *)0) {
        return;                                   // not a weapon class; leave it
    }
    weapon->ammo_count = 500;
    (*((actor->vtable)._ub)->pickup)(actor, (CDemonActor *)hero);
    core_inv_cpp_CInventory_addItem_FUN_004fd600(&hero->inventory, actor, 0);
}

// hasItemOfClass is too coarse for ammo — every round in the inventory is a
// CAmmo — so match on the pair that identifies one: which weapon it feeds and
// which type it is.
int hasAmmo(CInventory *inventory, char *weapon_class, EAmmoType ammo_type)
{
    int i;

    for (i = 0; i < inventory->item_count; i++) {
        CDemonActor *item = inventory->items[i];
        CAmmo       *ammo;

        if (item == (CDemonActor *)0) {
            continue;
        }
        ammo = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790(
                            item, g_CAmmoClassInfo.name_hash);
        if (ammo == (CAmmo *)0) {
            continue;
        }
        if ((ammo->ammo_type == ammo_type) &&
            (_stricmp(ammo->weapon_class_name, weapon_class) == 0)) {
            return 1;
        }
    }
    return 0;
}

void giveAmmoTo(CHero *hero, char *weapon_class, EAmmoType ammo_type)
{
    CAmmo *ammo;

    if (hasAmmo(&hero->inventory, weapon_class, ammo_type) != 0) {
        return;
    }
    ammo = (CAmmo *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(
                        sizeof(CAmmo), (char *)"..\\shims\\cheats.cpp", __LINE__);
    if (ammo == (CAmmo *)0) {
        return;
    }
    ammo = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(ammo);
    if (ammo == (CAmmo *)0) {
        return;
    }
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr, &ammo->base);
    (*((ammo->base).vtable._ub)->setup)(&ammo->base);
    ammo->ammo_type = ammo_type;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(ammo, weapon_class);
    ammo->ammo_count = 500;
    core_inv_cpp_CInventory_addItem_FUN_004fd600(&hero->inventory, &ammo->base, 0);
}

// The shipped ALLWEAPONS cheat, minus its god-mode and health side effects —
// see cheats.h. The baron is deliberately not in it: WINBLOWS did not grant it.
void giveAllWeapons(CHero *hero)
{
    giveAmmoTo(hero, (char *)"CGun", AMMO_TYPE_SILVER);
    giveAmmoTo(hero, (char *)"CGun", AMMO_TYPE_LITHIUM);
    giveAmmoTo(hero, (char *)"CGun", AMMO_TYPE_MERCURY);
    giveWeaponTo(hero, (char *)"CShotgun");
    giveWeaponTo(hero, (char *)"CCrossbow");
    giveAmmoTo(hero, (char *)"CCrossbow", AMMO_TYPE_HOLY);
    giveWeaponTo(hero, (char *)"CDynamite");
    giveWeaponTo(hero, (char *)"CFlameThrower");
    giveWeaponTo(hero, (char *)"CTommyGun");
    giveWeaponTo(hero, (char *)"CElephantGun");
    giveWeaponTo(hero, (char *)"CLightGun");
}

// The shipped SKELETONKEY cheat, guard and all — it is the one grant the
// original already made idempotent. It names the actor itself rather than
// asking generateActorName, because the guard above looks the name up.
void giveSkeletonKey(CHero *hero)
{
    CKeyActor *key;

    if (core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(
            &hero->inventory, (char *)"Skeleton_key") != (CDemonActor *)0) {
        return;
    }
    key = (CKeyActor *)core_actor_cpp_createActorByName_FUN_0040c430((char *)"CKeyActor");
    (*((key->base).vtable._ub)->setup)((CDemonActor *)key);
    key->key_mask = -1;
    strcpy((key->base).actor_name, "Skeleton_key");
    core_inv_cpp_CInventory_addItem_FUN_004fd600(&hero->inventory, (CDemonActor *)key, 0);
}

void giveGasMask(CHero *hero)
{
    CGasMask *mask;

    if (core_inv_cpp_CInventory_hasItemOfClass_FUN_004fea20(
            &hero->inventory, (char *)"CGasMask") != 0) {
        return;
    }
    mask = (CGasMask *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(
                           sizeof(CGasMask), (char *)"..\\shims\\cheats.cpp", __LINE__);
    if (mask == (CGasMask *)0) {
        return;
    }
    mask = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(mask);
    if (mask == (CGasMask *)0) {
        return;
    }
    core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr, &mask->base);
    (*((mask->base).vtable._ub)->setup)(&mask->base);
    core_inv_cpp_CInventory_addItem_FUN_004fd600(&hero->inventory, &mask->base, 0);
}

// -----------------------------------------------------------------------------
// Flaming ammo
// -----------------------------------------------------------------------------

// BURNINGSTAKE reaches for inventory.selected_weapon and refuses anything but
// the crossbow, which is no use as a preset — see cheats.h. Find the crossbow
// wherever it is instead.
void setFlamingAmmo(CHero *hero, int on)
{
    int i;

    for (i = 0; i < hero->inventory.item_count; i++) {
        CDemonActor *item = hero->inventory.items[i];
        CWeapon     *weapon;

        if (item == (CDemonActor *)0) {
            continue;
        }
        if (core_actor_cpp_isOfClass_FUN_0040c6d0(item, (char *)"CCrossbow") == 0) {
            continue;
        }
        weapon = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c790(
                                item, g_CWeaponClassInfo.name_hash);
        if (weapon != (CWeapon *)0) {
            weapon->ammo_type = on != 0 ? AMMO_TYPE_FLAMING : AMMO_TYPE_GENERIC;
        }
    }
}

// -----------------------------------------------------------------------------
// Head models — Big head and Old hat share one slot
// -----------------------------------------------------------------------------

// The three bones the shipped BIGHEAD cheat scales, in its order.
char *kBigHeadBones[3] = { (char *)"Bip01 head",
                           (char *)"bipltit02",
                           (char *)"biprtit02" };

// Multiplies the rest pose of those bones, and everything hanging off them, on
// every character in the set that currently has a model. 4.0 enlarges, 0.25
// undoes it — the factors the shipped cheat uses.
void bigHeadScaleWorld(float factor)
{
    int i;

    if (g_CDemonSetPtr == (CDemonSet *)0) {
        return;
    }
    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        CCharacter               *character = g_CDemonSetPtr->characters[i];
        CDeformableModelInstance *model     = &character->model;
        CSkeleton                *skeleton;
        int                       b;

        if (character->model.model_name[0] == '\0') {
            continue;
        }
        skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(model);
        for (b = 0; b < (int)(sizeof(kBigHeadBones) / sizeof(kBigHeadBones[0])); b++) {
            int bone = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(
                           skeleton, kBigHeadBones[b], 0);
            int child;

            if (bone == -1) {
                continue;
            }
            model->rest_pose_data[bone] = model->rest_pose_data[bone] * factor;
            for (child = 0; child < skeleton->bone_count; child++) {
                if (bone == skeleton->bone_list[child].parent_index) {
                    core_game_cpp_scaleBoneRecursive_FUN_004dda80(model, skeleton, factor, child);
                }
            }
        }
    }
}

// Both hat cheats write the same model slot, so the model is resolved from both
// lines at once rather than by whichever ran last.
void applyHatModel(void)
{
    CHero     *hero = localHero();
    CStranger *stranger;
    char      *model_name;

    if (hero == (CHero *)0) {
        return;
    }
    stranger = (CStranger *)core_actor_cpp_castToClassHash_FUN_0040c790(
                                (CDemonActor *)hero, g_CStrangerClassInfo.name_hash);
    if (stranger == (CStranger *)0) {
        return;                                   // not playing the Stranger
    }
    if (s_state[NOCTURNE_CHEAT_BIG_HEAD] != 0) {
        model_name = (char *)"big-hat.kfm";
    }
    else if (s_state[NOCTURNE_CHEAT_OLD_HAT] != 0) {
        model_name = (char *)"oldhat.kfm";
    }
    else {
        model_name = (char *)"stranger-hat.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(&stranger->model, model_name);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&stranger->model);
}

// big_hat_cheat means "the set standing in front of you is scaled up", which is
// what makes it safe to read here: the scaling is a multiply in one direction
// or the other, so applying it twice would compound. nocturne_cheats_apply
// clears the flag before calling this, because a freshly created set is not
// scaled whatever the last mission left behind.
void bigHeadSetScale(int on)
{
    if ((g_CGamePtr->big_hat_cheat != 0) != (on != 0)) {
        bigHeadScaleWorld(on != 0 ? 4.0f : 0.25f);
        g_CGamePtr->big_hat_cheat = (on != 0);
    }
}

// -----------------------------------------------------------------------------

// The hero-scoped cheats: health, inventory, and the ammo type on a weapon the
// hero is already carrying.
//
// Every machine in a lockstep session simulates every hero, so these have to
// reach ALL of them, in index order. g_HeroActors[g_LocalHeroIndex] is a
// different hero on each machine, so arming only the local one has the host
// give player 0 a shotgun while the guest gives it to player 1, and the two
// worlds part on the first shot. g_HeroCount is 1 in single player, so this is
// the same one hero it always was.
void applyToEveryHero(int index, int value)
{
    int h;

    for (h = 0; h < g_HeroCount; h++) {
        CHero *hero = g_HeroActors[h];

        if (hero == (CHero *)0) {
            continue;
        }
        switch (index) {
        // Not a grant but a state on a weapon already in the inventory, so it
        // follows the line in both directions — switching it off puts the
        // crossbow back on AMMO_TYPE_GENERIC.
        case NOCTURNE_CHEAT_FLAMING_AMMO:
            setFlamingAmmo(hero, value);
            break;

        // Grants: there is no un-give, so an off line just stops handing them
        // out. Each is guarded inside against handing out a second one.
        case NOCTURNE_CHEAT_GOD_MODE:
            if (value != 0) { (hero->base).hit_points = 100.0f; }
            break;
        case NOCTURNE_CHEAT_SKELETON_KEY:
            if (value != 0) { giveSkeletonKey(hero); }
            break;
        case NOCTURNE_CHEAT_GAS_MASK:
            if (value != 0) { giveGasMask(hero); }
            break;
        case NOCTURNE_CHEAT_ALL_WEAPONS:
            if (value != 0) { giveAllWeapons(hero); }
            break;
        case NOCTURNE_CHEAT_SHOTGUN:
            if (value != 0) { giveWeaponTo(hero, (char *)"CShotgun"); }
            break;
        case NOCTURNE_CHEAT_CROSSBOW:
            if (value != 0) { giveWeaponTo(hero, (char *)"CCrossbow"); }
            break;
        case NOCTURNE_CHEAT_DYNAMITE:
            if (value != 0) { giveWeaponTo(hero, (char *)"CDynamite"); }
            break;
        case NOCTURNE_CHEAT_FLAME_THROWER:
            if (value != 0) { giveWeaponTo(hero, (char *)"CFlameThrower"); }
            break;
        case NOCTURNE_CHEAT_TOMMY_GUN:
            if (value != 0) { giveWeaponTo(hero, (char *)"CTommyGun"); }
            break;
        case NOCTURNE_CHEAT_ELEPHANT_GUN:
            if (value != 0) { giveWeaponTo(hero, (char *)"CElephantGun"); }
            break;
        case NOCTURNE_CHEAT_LIGHT_GUN:
            if (value != 0) { giveWeaponTo(hero, (char *)"CLightGun"); }
            break;
        case NOCTURNE_CHEAT_BARON:
            if (value != 0) { giveWeaponTo(hero, (char *)"CBaronWeapon"); }
            break;
        case NOCTURNE_CHEAT_SILVER_AMMO:
            if (value != 0) { giveAmmoTo(hero, (char *)"CGun", AMMO_TYPE_SILVER); }
            break;
        case NOCTURNE_CHEAT_LITHIUM_AMMO:
            if (value != 0) { giveAmmoTo(hero, (char *)"CGun", AMMO_TYPE_LITHIUM); }
            break;
        case NOCTURNE_CHEAT_MERCURY_AMMO:
            if (value != 0) { giveAmmoTo(hero, (char *)"CGun", AMMO_TYPE_MERCURY); }
            break;
        }
    }
}

// Applies one line's current state. The flags follow it in both directions; the
// grants only hand something over, since there is no un-give — see cheats.h.
void applyOne(int index, int value)
{
    switch (index) {
    case NOCTURNE_CHEAT_GOD_MODE:
        g_CGamePtr->god_mode_enabled = value;
        applyToEveryHero(index, value);
        break;
    case NOCTURNE_CHEAT_FREEZE:
        g_CGamePtr->freeze_enemies_enabled = value;
        break;
    case NOCTURNE_CHEAT_DISMEMBER:
        g_CGamePtr->gratuitous_dismemberment = value;
        break;
    case NOCTURNE_CHEAT_WEATHER:
        // Off leaves the mission's own weather alone rather than forcing clear
        // skies over a script that asked for a storm.
        if ((value != NOCTURNE_CHEAT_WEATHER_OFF) && (g_CWeatherPtr != (CWeather *)0)) {
            core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(
                g_CWeatherPtr,
                value == NOCTURNE_CHEAT_WEATHER_RAIN ? WEATHER_TYPE_RAIN : WEATHER_TYPE_SNOW);
        }
        break;
    case NOCTURNE_CHEAT_BIG_HEAD:
        if (localHero() != (CHero *)0) {
            bigHeadSetScale(value);
            applyHatModel();
        }
        break;
    case NOCTURNE_CHEAT_OLD_HAT:
        if (localHero() != (CHero *)0) {
            applyHatModel();
        }
        break;

    case NOCTURNE_CHEAT_DEV_MODE:
        g_CGamePtr->developer_mode_enabled = value;
        break;
    case NOCTURNE_CHEAT_GEOMETRY_DEBUG:
        g_CGamePtr->geometry_debug_enabled = value;
        break;
    case NOCTURNE_CHEAT_COLLISION_DEBUG:
        g_CGamePtr->collision_render_enabled = value;
        break;
    case NOCTURNE_CHEAT_EVENT_DEBUG:
        g_CGamePtr->event_processing_enabled = value;
        break;
    case NOCTURNE_CHEAT_SCRIPT_DEBUG:
        // SCRIPT does three things at once: the flag, the framebuffer clear it
        // needs, and a camera reinit that shrinks the 3D view to 240 lines so
        // the debug text has somewhere to go.
        g_CGamePtr->subtitle_system_enabled = value;
        g_CGamePtr->screen_clear_enabled    = value;
        if (g_CDemonSetPtr != (CDemonSet *)0) {
            core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(
                g_CDemonSetPtr, 0, 0, value != 0 ? 0xf0 : g_WindowHeight);
        }
        break;
    case NOCTURNE_CHEAT_MEMORY_DEBUG:
        g_CGamePtr->editor_tools_enabled = value;
        break;
    case NOCTURNE_CHEAT_SOUND_DEBUG:
        g_SoundDebugEnabled = value;
        break;
    case NOCTURNE_CHEAT_RENDER_MODE:
        g_CGamePtr->render_mode = value;
        break;
    case NOCTURNE_CHEAT_SCRIPT_SEQUENCE:
        g_CGamePtr->scripted_sequence_active = value;
        break;

    case NOCTURNE_CHEAT_INF_BATTERY:
        // Nothing to apply — updateInventory reads it through
        // nocturne_cheat_active every frame. Listed so the switch stays a
        // complete account of all thirty-one lines.
        break;

    // The hero-scoped lines, named rather than swept up by a default: an index
    // with no case here does nothing, visibly, instead of being handed to a
    // hero loop that has no case for it either.
    case NOCTURNE_CHEAT_FLAMING_AMMO:
    case NOCTURNE_CHEAT_SKELETON_KEY:
    case NOCTURNE_CHEAT_GAS_MASK:
    case NOCTURNE_CHEAT_ALL_WEAPONS:
    case NOCTURNE_CHEAT_SHOTGUN:
    case NOCTURNE_CHEAT_CROSSBOW:
    case NOCTURNE_CHEAT_DYNAMITE:
    case NOCTURNE_CHEAT_FLAME_THROWER:
    case NOCTURNE_CHEAT_TOMMY_GUN:
    case NOCTURNE_CHEAT_ELEPHANT_GUN:
    case NOCTURNE_CHEAT_LIGHT_GUN:
    case NOCTURNE_CHEAT_BARON:
    case NOCTURNE_CHEAT_SILVER_AMMO:
    case NOCTURNE_CHEAT_LITHIUM_AMMO:
    case NOCTURNE_CHEAT_MERCURY_AMMO:
        applyToEveryHero(index, value);
        break;
    }
}

// Advances a line one step, backwards when the player pressed left. The two
// hat cheats write the same model slot, so switching one on switches the other
// off rather than letting whichever applied last win.
void cycleOne(int index)
{
    int states = kCheats[index].state_count;

    if (g_MenuLeftRightPressed == 1) {
        s_state[index] = (s_state[index] + states - 1) % states;
    }
    else {
        s_state[index] = (s_state[index] + 1) % states;
    }
    saveSetting(index);

    if ((index == NOCTURNE_CHEAT_BIG_HEAD) && (s_state[index] != 0) &&
        (s_state[NOCTURNE_CHEAT_OLD_HAT] != 0)) {
        s_state[NOCTURNE_CHEAT_OLD_HAT] = 0;
        saveSetting(NOCTURNE_CHEAT_OLD_HAT);
    }
    if ((index == NOCTURNE_CHEAT_OLD_HAT) && (s_state[index] != 0) &&
        (s_state[NOCTURNE_CHEAT_BIG_HEAD] != 0)) {
        s_state[NOCTURNE_CHEAT_BIG_HEAD] = 0;
        saveSetting(NOCTURNE_CHEAT_BIG_HEAD);
        applyOne(NOCTURNE_CHEAT_BIG_HEAD, 0);     // unscale before the hat swap
    }
}

char *stateLabel(int index, int value)
{
    if (index == NOCTURNE_CHEAT_WEATHER) {
        return kWeatherLabels[value];
    }
    return g_OnOffLabels[value];
}

// One frame of moon backdrop, shared by the picker and the pages.
void menuFrame(void)
{
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance, g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
}

// A titled menu single-spaces its lines and spends two character heights on the
// title. Lift the start where a short window would otherwise push the last line
// under the copyright.
int menuStartY(int line_count)
{
    int menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont, 0x58);
    int menu_y  = CHEAT_MENU_START_Y;

    if (g_WindowHeight < menu_y + (line_count + 4) * menu_ch) {
        menu_y = g_WindowHeight - (line_count + 4) * menu_ch;
    }
    if (menu_y < 0) {
        menu_y = 0;
    }
    return menu_y;
}

// Titles say who is deciding, so a guest whose lines refuse to move can see
// why rather than think the menu is broken.
char *menuTitle(char *buffer, int size, char *base)
{
    if (s_override_active == false) {
        return support_newmsg_cpp_getLocalizedString_FUN_005441f0(base);
    }
    snprintf(buffer, (size_t)size, "%s %s",
             support_newmsg_cpp_getLocalizedString_FUN_005441f0(base),
             support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"(set by host)"));
    return buffer;
}

// True when the player has asked to leave the screen they are on.
int menuCancelled(void)
{
    if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0) {
        return 1;
    }
    // Set when the window is closed. The Options screen treats it as a quit, so
    // this must not sit here spinning through a shutdown.
    return g_InputDisabled != 0;
}

// One page's On/Off list, over the contiguous run of cheats belonging to it.
void cheatsPage(int page)
{
    char  lines[CHEAT_MENU_MAX_LINES][256];
    char *menu_ptrs[CHEAT_MENU_MAX_LINES];
    char  title[256];
    int   items[CHEAT_MENU_MAX_LINES];
    int   item_count = 0;
    int   selected   = 0;
    int   back_line;
    int   choice;
    int   i;

    for (i = 0; i < NOCTURNE_CHEAT_COUNT; i++) {
        if (kCheats[i].page == page) {
            items[item_count] = i;
            item_count        = item_count + 1;
        }
    }
    back_line = item_count;
    for (i = 0; i <= back_line; i++) {
        menu_ptrs[i] = lines[i];
    }

    engine_2d_c_clearInputAndWait_FUN_00403260();

    for (;;) {
        menuFrame();

        // Rebuilt every frame, as the Options screen rebuilds its own: the
        // strings are localized and the language can change under this screen.
        // The " : " matters beyond looks — renderMenuAndGetChoice only accepts
        // left/right on a line containing a colon.
        for (i = 0; i < item_count; i++) {
            sprintf(lines[i], "%s : %s",
                    support_newmsg_cpp_getLocalizedString_FUN_005441f0(kCheats[items[i]].label),
                    support_newmsg_cpp_getLocalizedString_FUN_005441f0(
                        stateLabel(items[i], effectiveState(items[i]))));
        }
        strcpy(lines[back_line],
               support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Back"));

        choice = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(
                     menu_ptrs, back_line + 1, &selected, menuStartY(back_line + 1),
                     menuTitle(title, sizeof(title), kPageTitles[page]));
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        if (choice == back_line) {
            return;
        }
        // While a host is deciding, the lines are a read-out of the host's set
        // rather than a control. Changing one here would only desync the
        // session, so the toggle is inert until the override is dropped.
        if ((choice >= 0) && (s_override_active == false)) {
            cycleOne(items[choice]);
            applyOne(items[choice], s_state[items[choice]]);
        }
        if (menuCancelled() != 0) {
            return;
        }
    }
}

} // namespace

void nocturne_cheats_menu(void)
{
    char  lines[CHEAT_PAGE_COUNT + 1][256];
    char *menu_ptrs[CHEAT_PAGE_COUNT + 1];
    char  title[256];
    int   selected = 0;
    int   choice;
    int   i;

    loadSettings();
    expireOverrideOutsideSession();

    for (i = 0; i <= CHEAT_PAGE_COUNT; i++) {
        menu_ptrs[i] = lines[i];
    }

    // The caller reached here on a RETURN that renderMenuAndGetChoice has
    // already consumed, but the key can still be down; without this the picker
    // would see it and open its first page on the same press.
    engine_2d_c_clearInputAndWait_FUN_00403260();

    for (;;) {
        menuFrame();

        for (i = 0; i < CHEAT_PAGE_COUNT; i++) {
            strcpy(lines[i],
                   support_newmsg_cpp_getLocalizedString_FUN_005441f0(kPageTitles[i]));
        }
        strcpy(lines[CHEAT_PAGE_COUNT],
               support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Back"));

        choice = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(
                     menu_ptrs, CHEAT_PAGE_COUNT + 1, &selected,
                     menuStartY(CHEAT_PAGE_COUNT + 1),
                     menuTitle(title, sizeof(title), (char *)"Cheats"));
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        if (choice == CHEAT_PAGE_COUNT) {
            return;
        }
        if (choice >= 0) {
            cheatsPage(choice);
            engine_2d_c_clearInputAndWait_FUN_00403260();
        }
        if (menuCancelled() != 0) {
            return;
        }
    }
}

void nocturne_cheats_apply(void)
{
    int i;

    loadSettings();
    expireOverrideOutsideSession();

    if ((g_CGamePtr == (CGame *)0) || (localHero() == (CHero *)0)) {
        return;
    }

    // The set that has just been built is not scaled, whatever the flag
    // survived at from the mission before it. Say so before bigHeadSetScale
    // reads it, or an armed big head would decide it had nothing to do.
    g_CGamePtr->big_hat_cheat = 0;

    // Only the armed lines. Every flag on this list has just been zeroed by
    // the prologue this is called from, so an unarmed line is already off and
    // has nothing to say — and staying quiet is what leaves a mission's own
    // weather and the hero's own head model alone.
    for (i = 0; i < NOCTURNE_CHEAT_COUNT; i++) {
        if (effectiveState(i) != 0) {
            applyOne(i, effectiveState(i));
        }
    }

    // Told once, on the first mission the override covers, rather than at every
    // transition. This is the only place with a hero and a message queue.
    if (s_override_unannounced) {
        s_override_unannounced = false;
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(
            g_CGamePtr,
            support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Cheats set by host"),
            5.0f);
    }
}

int nocturne_cheat_active(int index)
{
    if ((index < 0) || (NOCTURNE_CHEAT_COUNT <= index)) {
        return 0;
    }
    loadSettings();
    expireOverrideOutsideSession();
    return effectiveState(index);
}

int nocturne_cheats_pack(unsigned char *out, int out_size)
{
    int i;

    if ((out == (unsigned char *)0) || (out_size < NOCTURNE_CHEAT_COUNT)) {
        return 0;
    }
    loadSettings();
    for (i = 0; i < NOCTURNE_CHEAT_COUNT; i++) {
        out[i] = (unsigned char)s_state[i];
    }
    return NOCTURNE_CHEAT_COUNT;
}

void nocturne_cheats_set_override(const unsigned char *state, int size)
{
    int i;

    if ((state == (const unsigned char *)0) || (size < NOCTURNE_CHEAT_COUNT)) {
        return;
    }
    loadSettings();
    for (i = 0; i < NOCTURNE_CHEAT_COUNT; i++) {
        int value = (int)state[i];

        // A host on a different build, or a corrupted packet, must not put a
        // state in here that stateLabel would index out of range.
        if ((value < 0) || (kCheats[i].state_count <= value)) {
            value = 0;
        }
        s_override[i] = value;
    }
    if (s_override_active == false) {
        s_override_unannounced = true;
    }
    s_override_active = true;
}

void nocturne_cheats_clear_override(void)
{
    s_override_active      = false;
    s_override_unannounced = false;
}

int nocturne_cheats_override_active(void)
{
    return s_override_active ? 1 : 0;
}

#else

void nocturne_cheats_menu(void)
{
}

void nocturne_cheats_apply(void)
{
}

int nocturne_cheat_active(int index)
{
    (void)index;
    return 0;
}

int nocturne_cheats_pack(unsigned char *out, int out_size)
{
    (void)out;
    (void)out_size;
    return 0;
}

void nocturne_cheats_set_override(const unsigned char *state, int size)
{
    (void)state;
    (void)size;
}

void nocturne_cheats_clear_override(void)
{
}

int nocturne_cheats_override_active(void)
{
    return 0;
}

#endif
