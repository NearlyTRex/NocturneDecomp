// =============================================================================
// NET SUPPORT — see net_support.h
// =============================================================================

#include "net_support.h"

#include "core/menu_screen.h"
#include "game/cheats.h"
#include "game/hero_death.h"
#include "game/hero_light.h"
#include "game/hero_slot.h"

#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <memory>

namespace net_support {

Stand stand;

CNetGame net;
CGame game;
CScript script;
CEventList events;
CDemonMission mission;
CKeys keys;
CBoundingBox3D box;
std::vector<CDemonActor *> grab_releases;

namespace {

std::unique_ptr<CDemonSet> s_set(new CDemonSet());
std::unique_ptr<CHero> s_heroes[4] = {
    std::unique_ptr<CHero>(new CHero()), std::unique_ptr<CHero>(new CHero()),
    std::unique_ptr<CHero>(new CHero()), std::unique_ptr<CHero>(new CHero())};

int key_state(CKeys *, EInputCodeType code) {
    return (stand.held.count((int)code) != 0 || stand.pressed.count((int)code) != 0) ? 1 : 0;
}

int key_take(CKeys *, EInputCodeType code) {
    const int was = key_state(nullptr, code);
    stand.pressed.erase((int)code);
    return was;
}

CKeys_vtable s_keys_vtable = {key_state, key_take, nullptr};

void move_actor(CDemonActor *actor, CVector3f *position, CVector3f *orientation) {
    actor->location.position = *position;
    actor->orient.vec = *orientation;
}

CBoundingBox3D *bounding_box(CDemonActor *, CBoundingBox3D *out) {
    *out = box;
    return out;
}

void release_grab(CCharacter *character) {
    grab_releases.push_back(&character->base);
    character->grabbed_by = nullptr;
}

CCharacter_full_vtable s_character_vtable;

} // namespace

CDemonSet *set = s_set.get();
CHero *heroes[4] = {s_heroes[0].get(), s_heroes[1].get(), s_heroes[2].get(), s_heroes[3].get()};

void Stand::reset() {
    *this = Stand();
    std::memset(&net, 0, sizeof(net));
    std::memset(&game, 0, sizeof(game));
    std::memset(&script, 0, sizeof(script));
    std::memset(&events, 0, sizeof(events));
    std::memset(&mission, 0, sizeof(mission));
    std::memset(set, 0, sizeof(*set));
    for (CHero *hero : heroes)
        std::memset(hero, 0, sizeof(*hero));
    std::memset(&box, 0, sizeof(box));
    grab_releases.clear();

    std::memset(&s_character_vtable, 0, sizeof(s_character_vtable));
    s_character_vtable._ub.setPositionAndOrientation = move_actor;
    s_character_vtable._ub.getBoundingBox = bounding_box;
    s_character_vtable._uc.releaseFromGrab = release_grab;
    keys.vtable = &s_keys_vtable;

    g_CNetGamePtr = nullptr;
    g_CGamePtr = &game;
    g_CScriptPtr = &script;
    g_CEventListPtr = &events;
    g_CDemonSetPtr = set;
    g_CDemonMissionPtr = &mission;
    g_CKeysPtr = &keys;
    g_CSoundPtr = nullptr;
    for (int i = 0; i < 4; i++)
        g_HeroActors[i] = nullptr;
    g_HeroCount = 0;
    g_LocalHeroIndex = 0;
    g_SimFrameCount = 0;
    g_RemoteSyncStage = 0;
    g_PathMapCacheInitFlag = 0;
    std::memset(&g_CDemonCameraInstance, 0, sizeof(g_CDemonCameraInstance));
    g_CHeroClassInfo.name_hash = 0x1001;
    g_CStrangerClassInfo.name_hash = 0x1002;
    g_CFliesClassInfo.name_hash = 0x1003;
    g_CTriggerClassInfo.name_hash = 0x1004;
}

void start_session(EConnectionType connection, int players, int local) {
    net.connection_type = connection;
    net.network_mode = NET_MODE_PLAYING;
    net.player_count = players;
    net.local_player_index = local;
    net.server_player_index = 0;
    g_CNetGamePtr = &net;
}

void give_vtable(CDemonActor *actor) {
    actor->vtable._uc = &s_character_vtable;
}

void place_heroes(int count) {
    for (int i = 0; i < count; i++) {
        CHero *hero = heroes[i];
        give_vtable(&hero->base.base);
        hero->base.hit_points = 100.0f;
        hero->base.base.location.area_id = 0;
        snprintf(hero->base.base.actor_name, sizeof(hero->base.base.actor_name), "hero%d", i);
        stand.classes[hero].insert(g_CHeroClassInfo.name_hash);
        g_HeroActors[i] = hero;
    }
    g_HeroCount = count;
}

int type_of(const Sent &sent) {
    return (int)((const SNetPacketHeader *)sent.bytes.data())->type;
}

} // namespace net_support

using net_support::stand;

// --- the game's globals ------------------------------------------------------

CNetGame *g_CNetGamePtr = nullptr;
CGame *g_CGamePtr = nullptr;
CScript *g_CScriptPtr = nullptr;
CEventList *g_CEventListPtr = nullptr;
CDemonSet *g_CDemonSetPtr = nullptr;
CDemonMission *g_CDemonMissionPtr = nullptr;
CKeys *g_CKeysPtr = nullptr;
CSound *g_CSoundPtr = nullptr;
CHero *g_HeroActors[4] = {};
int g_HeroCount = 0;
int g_LocalHeroIndex = 0;
SSimFrame g_SimFrameHistory[512] = {};
int g_SimFrameCount = 0;
int g_RemoteSyncStage = 0;
CPathMap g_PathMapCache[12] = {};
WatcomTypeInfo g_CPathMapTypeInfo = {};
WatcomStaticDestructorNode g_PathMapCacheDestructorNode = {};
uchar g_PathMapCacheInitFlag = 0;
int g_PathMapLRUCounters[12] = {};
CDemonActorType g_CHeroClassInfo = {};
CDemonActorType g_CStrangerClassInfo = {};
CDemonActorType g_CFliesClassInfo = {};
CDemonActorType g_CTriggerClassInfo = {};
CDemonCamera g_CDemonCameraInstance = {};
char *g_CurrentFilename = nullptr;
int g_CurrentLineNumber = 0;

#if NOCTURNE_NETPLAY_SIM_TRACE
// What the simulation trace reads, where it is compiled in.
CDemonActorType g_CColonelClassInfo = {};
CDemonActorType g_CEnemyClassInfo = {};
CDemonActorType g_CGabriellaClassInfo = {};
CDemonActorType g_CHaystackClassInfo = {};
CDemonActorType g_CIcePickClassInfo = {};
CDemonActorType g_CScatClassInfo = {};
uint g_RandomSeedValue = 0;
CDemonActor *g_ScriptSentinelActor = nullptr;
#endif

// --- the Watcom runtime's array construction ----------------------------------

namespace {
int s_array_inits = 0;
int s_atexits = 0;
int s_path_resets = 0;
} // namespace

void *__arrinit(void *array_start, int, WatcomTypeInfo *) {
    s_array_inits++;
    return array_start;
}

void _atexit(WatcomStaticDestructorNode *) {
    s_atexits++;
}

void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *) {
    s_path_resets++;
}

namespace net_support {
int array_inits() {
    return s_array_inits;
}
int atexits() {
    return s_atexits;
}
int path_resets() {
    return s_path_resets;
}
} // namespace net_support

// --- the socket --------------------------------------------------------------

void __cdecl core_netgame_cpp_CNetGame_send_FUN_005411c0(CNetGame *, int player_index,
                                                         SNetPacketHeader *packet) {
    const unsigned char *bytes = (const unsigned char *)packet;
    stand.sent.push_back(
        {player_index, (int)packet->type, std::vector<unsigned char>(bytes, bytes + packet->size)});
}

void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame *,
                                                                         SNetworkAddr *dest_addr,
                                                                         int) {
    stand.disconnect_notices.push_back(dest_addr);
}

void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(CNetGame *, int player_index,
                                                               float) {
    stand.pings.push_back(player_index);
}

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *) {
    stand.receives++;
    if (stand.on_receive)
        stand.on_receive();
}

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *, int sync_stage) {
    stand.sync_stages.push_back(sync_stage);
    return stand.sync_result;
}

void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame *, int) {
    stand.disconnects++;
}

// --- the game's generators -----------------------------------------------------

uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cba0(void) {
    return stand.next_random++;
}

void __cdecl core_actor_cpp_setRandomSeed_FUN_0040cb90(uint seed_value) {
    stand.seeds.push_back(seed_value);
}

// --- actors --------------------------------------------------------------------

CDemonActor *__cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,
                                                                 uint class_name_hash) {
    auto it = stand.classes.find(actor_ptr);
    if (actor_ptr == nullptr || it == stand.classes.end() ||
        it->second.count(class_name_hash) == 0) {
        return nullptr;
    }
    return actor_ptr;
}

CVector3f *__cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(
    CDemonActor *this_ptr, CVector3f *output_local_point, CVector3f *input_world_point) {
    static CVector3f elsewhere;
    CVector3f local = *input_world_point;
    local.x -= this_ptr->location.position.x;
    local.y -= this_ptr->location.position.y;
    local.z -= this_ptr->location.position.z;
    if (stand.world_to_local_elsewhere != 0) {
        elsewhere = local;
        return &elsewhere;
    }
    *output_local_point = local;
    return output_local_point;
}

// --- inventories -----------------------------------------------------------------

void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(CInventory *this_ptr, CDemonActor *,
                                                               int weapon_category, int direction) {
    stand.selections.push_back({"weapon", this_ptr, weapon_category, direction});
}

void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004fec10(CInventory *this_ptr, int direction) {
    stand.selections.push_back({"item", this_ptr, 0, direction});
}

void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,
                                                                         int direction) {
    stand.selections.push_back({"ammo", this_ptr, 0, direction});
}

// --- screens ---------------------------------------------------------------------

char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    return key;
}

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void) {
    stand.input_waits++;
}

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void) {
    stand.swaps++;
}

void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void) {
    stand.clears++;
}

void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text, int, int) {
    stand.drawn.push_back(text);
}

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **, int, int *, int, char *) {
    if (stand.menu_choices.empty())
        return -1;
    const int choice = stand.menu_choices.front();
    stand.menu_choices.erase(stand.menu_choices.begin());
    return choice;
}

void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *, char *message, float) {
    stand.messages.push_back(message);
}

void __cdecl core_sound_cpp_CSound_reset_FUN_005b39a0(CSound *) {
    stand.sound_resets++;
}
void __cdecl core_sound_cpp_CSound_configure_FUN_005b3830(CSound *) {
    stand.sound_configures++;
}
void __cdecl core_game_cpp_hostNetworkGame_FUN_004e2f10(void) {
    stand.hosted++;
}
void __cdecl core_game_cpp_joinNetworkGame_FUN_004e2fc0(void) {
    stand.joined++;
}

int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void) {
    const int now = stand.time;
    stand.time += stand.time_step;
    return now;
}

CPickList *__cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr) {
    stand.pick_lists_alive++;
    stand.pick_lines.clear();
    return this_ptr;
}

CPickList *__cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(CPickList *this_ptr, uint) {
    stand.pick_lists_alive--;
    return this_ptr;
}

void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *, char *string_data) {
    stand.pick_lines.push_back(string_data);
}

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
    CPickList *, char *dialog_title, int, uint) {
    stand.pick_title = dialog_title;
    if (stand.pick_choices.empty())
        return 0;
    const int choice = stand.pick_choices.front();
    stand.pick_choices.erase(stand.pick_choices.begin());
    return choice;
}

void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format, ...) {
    char message[2048];
    va_list args;
    va_start(args, format);
    vsnprintf(message, sizeof(message), format, args);
    va_end(args);
    stand.errors.push_back(message);
}

// --- the script and the mission --------------------------------------------------

int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_004b0860(CEventList *, char *name) {
    return (std::strcmp(name, "choking") == 0 && stand.choking != 0) ? 0 : -1;
}

int __cdecl core_event_cpp_CEventList_executeCommands_FUN_004aabe0(CEventList *, char *commands) {
    stand.commands.push_back(commands);
    return 0;
}

CDemonActor *__cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_00524030(CDemonMission *,
                                                                                 char *name) {
    return std::strcmp(name, "TriggerGasRoom") == 0 ? stand.gas_room : nullptr;
}

int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger *, CDemonActor *actor) {
    return stand.in_gas_room.count(actor) != 0 ? 1 : 0;
}

int __cdecl core_script_cpp_CScript_skipCinematic_FUN_005602e0(CScript *) {
    stand.skip_processing.push_back(g_CGamePtr->is_processing);
    return stand.skip_jumped;
}

// --- collision and the camera ------------------------------------------------------

float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet *,
                                                                             CVector3f *position,
                                                                             float radius) {
    return stand.ground ? stand.ground(*position, radius) : position->y;
}

int __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510(CDemonSet *,
                                                                      CVector3f *start_pos,
                                                                      CVector3f *end_pos) {
    return stand.blocked ? stand.blocked(*start_pos, *end_pos) : 0;
}

CVector3i *core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(
    CDemonCamera *, CVector3i *input_ptr, CVector3i *output_ptr) {
    if (stand.screen) {
        *output_ptr = stand.screen(*input_ptr);
    } else {
        *output_ptr = {0, 0, 0};
    }
    return output_ptr;
}

// --- clothing ------------------------------------------------------------------------

void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *, char *filename) {
    stand.cloth.push_back(std::string("add ") + filename);
}

void __cdecl core_cloth_cpp_CClothList_load_FUN_0043bfa0(CClothList *) {
    stand.cloth.push_back("load");
}

void __cdecl core_cloth_cpp_CClothList_setup_FUN_0043c290(CClothList *, CVector3f *, CVector3f *,
                                                          CDeformableModelInstance *) {
    stand.cloth.push_back("setup");
}

void __cdecl core_cloth_cpp_CClothList_process_FUN_0043c2d0(CClothList *, CVector3f *, CVector3f *,
                                                            float, float,
                                                            CDeformableModelInstance *) {
    stand.cloth.push_back("process");
}

// --- the shims they call -----------------------------------------------------------

CHero *nocturne_hero_local(void) {
    if (g_LocalHeroIndex < 0 || 4 <= g_LocalHeroIndex)
        return nullptr;
    return g_HeroActors[g_LocalHeroIndex];
}

int nocturne_hero_slot(const void *actor) {
    for (int i = 0; i < 4; i++) {
        if (actor != nullptr && (const void *)g_HeroActors[i] == actor)
            return i;
    }
    return -1;
}

int nocturne_hero_is_player(const void *actor) {
    return nocturne_hero_slot(actor) >= 0;
}

int nocturne_hero_revive(CHero *hero) {
    stand.revived.push_back(hero);
    return stand.revive_result;
}

void nocturne_hero_goggles_set(CHero *hero, int on) {
    stand.goggles.push_back({hero, on});
}

void nocturne_hero_goggles_reset(void) {
    stand.goggles_resets++;
}

int nocturne_cheats_pack(unsigned char *out, int out_size) {
    const int count = (int)stand.cheats_packed.size();
    for (int i = 0; i < count && i < out_size; i++)
        out[i] = stand.cheats_packed[(size_t)i];
    return count;
}

void nocturne_cheats_set_override(const unsigned char *state, int size) {
    stand.cheat_override.assign(state, state + size);
    stand.cheat_override_active = 1;
}

void nocturne_cheats_clear_override(void) {
    stand.cheat_override.clear();
    stand.cheat_override_active = 0;
    stand.cheat_overrides_cleared++;
}

int nocturne_cheats_override_active(void) {
    return stand.cheat_override_active;
}

void nocturne_menu_backdrop_frame(void) {
    stand.backdrops++;
}

int nocturne_menu_start_y(int rows) {
    return rows * 10;
}

int nocturne_menu_cancelled(void) {
    if (stand.menu_cancels.empty())
        return 0;
    const int cancelled = stand.menu_cancels.front();
    stand.menu_cancels.erase(stand.menu_cancels.begin());
    return cancelled;
}
