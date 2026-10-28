// =============================================================================
// CHEATS SUPPORT — see cheats_support.h
// =============================================================================

#include "cheats_support.h"

#include "class_support.h"
#include "core/menu_screen.h"
#include "game/hero_slot.h"
#include "net/net_session.h"

#include <cstdio>
#include <cstring>
#include <filesystem>
#include <system_error>

// --- the globals the cheats read -----------------------------------------------

CGame *g_CGamePtr = nullptr;
CDemonSet *g_CDemonSetPtr = nullptr;
CDemonMission *g_CDemonMissionPtr = nullptr;
CEventList *g_CEventListPtr = nullptr;
CWeather *g_CWeatherPtr = nullptr;
int g_WindowHeight = 0;
int g_SoundDebugEnabled = 0;
int g_MenuLeftRightPressed = 0;

namespace cheats_support {

Stand stand;

namespace {

// Large enough for any item a cheat builds.
union Item {
    CWeapon weapon;
    CMelee melee;
    CHealthItem health;
    CKeyActor key;
    CAmmo ammo;
    CGasMask mask;
};

std::unique_ptr<CGame> s_game(new CGame());
std::unique_ptr<CDemonSet> s_set(new CDemonSet());
std::unique_ptr<CSkeleton> s_skeleton(new CSkeleton());
std::unique_ptr<CCharacter> s_characters[4];
std::vector<std::unique_ptr<Item>> s_items;
std::map<std::string, CDemonActorType> s_classes; // the classes made on request
CDemonActorType s_key_type = {};
CDemonMission s_mission;
CEventList s_events;
CWeather s_weather;
CDemonActor_vtable s_item_vtable;

// The menu cancels once its script runs out, or on kCancel.
int s_cancelled = 0;

void setup(CDemonActor *actor) {
    stand.set_up.push_back(actor);
}

void pickup(CDemonActor *actor, CDemonActor *carrier) {
    stand.picked_up.emplace_back(actor, carrier);
}

CDemonActor *make_item(CDemonActorType *type) {
    s_items.emplace_back(new Item());
    CDemonActor *actor = &s_items.back()->weapon.base;
    actor->vtable._ub = &s_item_vtable;
    class_support::types[actor] = type;
    return actor;
}

// A gun class, under CWeapon; the crossbow under CGun, as the game has it.
CDemonActorType *weapon_class(const std::string &name) {
    std::map<std::string, CDemonActorType>::iterator it = s_classes.find(name);
    if (it == s_classes.end()) {
        CDemonActorType *parent = name == "CCrossbow" ? &g_CGunClassInfo : &g_CWeaponClassInfo;
        it = s_classes
                 .emplace(name, class_support::make(name.c_str(), 0x1000 + (uint)s_classes.size(),
                                                    parent))
                 .first;
    }
    return &it->second;
}

CKeyFramedModelInstance *model_of(CDemonActor *item) {
    return &((CWeapon *)item)->model;
}

} // namespace

CGame *game = s_game.get();
CDemonSet *set = s_set.get();
CSkeleton *skeleton = s_skeleton.get();

CCharacter *set_character(const char *model) {
    const int i = set->character_count;
    if (!s_characters[i])
        s_characters[i].reset(new CCharacter());
    CCharacter *c = s_characters[i].get();
    std::memset(c, 0, sizeof(*c));
    std::snprintf(c->model.model_name, sizeof(c->model.model_name), "%s", model);
    set->characters[set->character_count++] = c;
    return c;
}

CDemonActor *carry(CHero *hero, CDemonActorType *type, const char *model) {
    CDemonActor *item = make_item(type);
    std::snprintf(model_of(item)->model_name, sizeof(model_of(item)->model_name), "%s", model);
    hero->inventory.items[hero->inventory.item_count++] = item;
    return item;
}

int count_model(CHero *hero, const char *model) {
    int n = 0;
    for (int i = 0; i < hero->inventory.item_count; i++) {
        CDemonActor *item = hero->inventory.items[i];
        if (item != nullptr && std::strcmp(model_of(item)->model_name, model) == 0)
            n++;
    }
    return n;
}

int count_class(CHero *hero, const char *class_name) {
    int n = 0;
    for (int i = 0; i < hero->inventory.item_count; i++) {
        n += core_actor_cpp_isOfClass_FUN_0040c6d0(hero->inventory.items[i], (char *)class_name);
    }
    return n;
}

void Stand::reset() {
    *this = Stand();
    hero_support::reset();
    s_items.clear();
    s_classes.clear();
    s_key_type = class_support::make("CKeyActor", 0x600);
    s_cancelled = 0;
    std::memset(&s_item_vtable, 0, sizeof(s_item_vtable));
    s_item_vtable.getActorType = class_support::actor_type;
    s_item_vtable.setup = setup;
    s_item_vtable.pickup = pickup;

    std::memset(game, 0, sizeof(*game));
    std::memset(set, 0, sizeof(*set));
    std::memset(skeleton, 0, sizeof(*skeleton));
    g_CGamePtr = game;
    g_CDemonSetPtr = set;
    g_CDemonMissionPtr = &s_mission;
    g_CEventListPtr = &s_events;
    g_CWeatherPtr = &s_weather;
    g_WindowHeight = 480;
    g_SoundDebugEnabled = 0;
    g_MenuLeftRightPressed = 0;
}

void enter_empty_dir(const char *name) {
    std::error_code ec;
    const std::filesystem::path temp = std::filesystem::temp_directory_path(ec);
    std::filesystem::current_path(temp, ec);
    std::filesystem::remove_all(temp / name, ec);
    std::filesystem::create_directories(temp / name, ec);
    std::filesystem::current_path(temp / name, ec);
}

} // namespace cheats_support

using cheats_support::stand;

// --- the menu ------------------------------------------------------------------

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,
                                                              int menu_count, int *, int,
                                                              char *title) {
    cheats_support::Frame frame;
    for (int i = 0; i < menu_count; i++)
        frame.lines.push_back(menu_text_array[i]);
    frame.title = title;
    stand.frames.push_back(frame);

    g_MenuLeftRightPressed = stand.left;
    int choice = cheats_support::kCancel;
    if (!stand.choices.empty()) {
        choice = stand.choices.front();
        stand.choices.pop_front();
    }
    cheats_support::s_cancelled = choice == cheats_support::kCancel;
    return cheats_support::s_cancelled ? -1 : choice;
}

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void) {}

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void) {}

char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    return key;
}

void nocturne_menu_backdrop_frame(void) {}

int nocturne_menu_titled_y(int lines) {
    return lines * 10;
}

int nocturne_menu_cancelled(void) {
    return cheats_support::s_cancelled;
}

// --- the actor factory -----------------------------------------------------------

CDemonActor *__cdecl core_actor_cpp_createActorByName_FUN_0040c430(char *class_name) {
    using namespace cheats_support;
    stand.created.push_back(class_name);
    const std::string name = class_name;
    CDemonActorType *type = stand.not_items.count(name) != 0 ? &item_type
                            : name == "CMelee"               ? &g_CMeleeClassInfo
                            : name == "CHealthItem"          ? &g_CHealthItemClassInfo
                            : name == "CKeyActor"            ? &s_key_type
                                                             : weapon_class(name);
    return make_item(type);
}

void *__cdecl shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(int, char *, int) {
    if (stand.alloc_fails != 0)
        return nullptr;
    cheats_support::s_items.emplace_back(new cheats_support::Item());
    return cheats_support::s_items.back().get();
}

CAmmo *__cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr) {
    this_ptr->base.vtable._ub = &cheats_support::s_item_vtable;
    class_support::types[&this_ptr->base] = &g_CAmmoClassInfo;
    return this_ptr;
}

void __cdecl core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(CAmmo *this_ptr,
                                                             char *weapon_class_name) {
    std::snprintf(this_ptr->weapon_class_name, sizeof(this_ptr->weapon_class_name), "%s",
                  weapon_class_name);
}

CGasMask *__cdecl core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(CGasMask *this_ptr) {
    this_ptr->base.vtable._ub = &cheats_support::s_item_vtable;
    class_support::types[&this_ptr->base] = &g_CGasMaskClassInfo;
    return this_ptr;
}

void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission *,
                                                                           CDemonActor *) {
    stand.named++;
}

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(
    CKeyFramedModelInstance *this_ptr, char *filename) {
    std::snprintf(this_ptr->model_name, sizeof(this_ptr->model_name), "%s", filename);
}

CKeyFramedModel *__cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(
    CKeyFramedModelInstance *this_ptr) {
    stand.precached.push_back(this_ptr->model_name);
    return nullptr;
}

// --- the inventory -------------------------------------------------------------

int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004fea20(CInventory *this_ptr,
                                                                char *class_name) {
    for (int i = 0; i < this_ptr->item_count; i++) {
        if (core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr->items[i], class_name) != 0)
            return 1;
    }
    return 0;
}

CDemonActor *__cdecl core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,
                                                                         char *item_name) {
    for (int i = 0; i < this_ptr->item_count; i++) {
        CDemonActor *item = this_ptr->items[i];
        if (item != nullptr && std::strcmp(item->actor_name, item_name) == 0)
            return item;
    }
    return nullptr;
}

int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,
                                                         CDemonActor *item_actor, int) {
    this_ptr->items[this_ptr->item_count++] = item_actor;
    return 1;
}

CKeyFramedModelInstance *__cdecl core_inv_cpp_getItemModel_FUN_004fcda0(CDemonActor *actor_ptr) {
    return stand.no_model.count(actor_ptr) != 0 ? nullptr : cheats_support::model_of(actor_ptr);
}

// --- the world -------------------------------------------------------------------

CSkeleton *__cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(
    CDeformableModelInstance *) {
    return cheats_support::skeleton;
}

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton *, char *bone_name, int) {
    std::map<std::string, int>::const_iterator it = stand.bones.find(bone_name);
    return (it != stand.bones.end()) ? it->second : -1;
}

void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004dda80(CDeformableModelInstance *, CSkeleton *,
                                                           float scale_factor, int bone_index) {
    stand.scaled.emplace_back(bone_index, scale_factor);
}

void __cdecl core_weather_cpp_CWeather_setWeatherType_FUN_005ef8c0(CWeather *, EWeatherType type) {
    stand.weather.push_back(type);
}

void __cdecl core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet *, int, int,
                                                              int screen_height) {
    stand.camera_heights.push_back(screen_height);
}

void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList *,
                                                                               char *name, int) {
    stand.events.push_back(name);
}

void __cdecl core_game_cpp_CGame_displayMessage_FUN_004d7f20(CGame *, char *message, float) {
    stand.messages.push_back(message);
}

// --- the other shims -------------------------------------------------------------

CHero *nocturne_hero_local(void) {
    return g_HeroActors[g_LocalHeroIndex];
}

int nocturne_hero_can_hold_kind(CHero *hero, EHeroItemKind kind) {
    stand.kinds.push_back(kind);
    std::map<const void *, std::set<int>>::const_iterator it = stand.refused.find(hero);
    return (it != stand.refused.end() && it->second.count(kind) != 0) ? 0 : 1;
}

int nocturne_net_session_active(void) {
    return stand.session;
}
