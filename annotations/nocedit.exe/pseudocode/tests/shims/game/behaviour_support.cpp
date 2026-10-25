// =============================================================================
// BEHAVIOUR SUPPORT — see behaviour_support.h
// =============================================================================

#include "behaviour_support.h"

#include "net/net_cheats.h"
#include "net/net_friendly.h"
#include "net/net_session.h"
#include "net/net_weapon.h"

#include <cctype>
#include <cstring>
#include <memory>

// --- the globals the shims read ------------------------------------------------

CGame *g_CGamePtr = nullptr;
CDemonSet *g_CDemonSetPtr = nullptr;
CDemonRaytrace g_CDemonRaytraceInstance = {};
CDemonLight g_CDemonLightInstance = {};
CDemonGlobe g_WeaponCoronaGlobe = {};
CDemonLight *g_DynamicLights[4] = {};
int g_DynamicLightCount = 0;
CSfxSlot g_SfxSlots[64] = {};
CHero_full_vtable g_CMolochVTable = {};
UVector3 g_ZeroVector = {};

namespace behaviour_support {

Stand stand;

namespace {

std::unique_ptr<CGame> s_game(new CGame());
std::unique_ptr<CDemonSet> s_set(new CDemonSet());

uint play_sound(CDemonActor *actor, char *name) {
    stand.sounds.emplace_back(actor, name);
    return 1;
}

uint footstep(CDemonActor *, CVector3f *, float volume) {
    stand.footsteps.push_back(volume);
    return 1;
}

int melee_types_of(CDemonActor *actor) {
    std::map<const void *, int>::const_iterator it = stand.melee_types.find(actor);
    return (it != stand.melee_types.end()) ? it->second : 0;
}

// Takes what it is dealt off the target's health.
void process_damage(CCharacter *character, SDamageInfo *damage) {
    stand.damage.emplace_back(character, *damage);
    character->hit_points -= damage->damage_amount;
}

void release(CCharacter *character) {
    stand.released.push_back(character);
    character->grabbed_by = nullptr;
}

int weapon_drawn(CHero *hero) {
    std::map<const void *, int>::const_iterator it = stand.drawn.find(hero);
    return (it != stand.drawn.end()) ? it->second : 0;
}

int cylinder(CCharacter *target, CVector3f *point, float, SDamageInfo *) {
    stand.cylinder_points.emplace_back(target, *point);
    std::map<const void *, int>::const_iterator it = stand.cylinder_hits.find(target);
    return (it != stand.cylinder_hits.end()) ? it->second : 0;
}

}  // namespace

CGame *game = s_game.get();
CDemonSet *set = s_set.get();

void put_in_set(CCharacter *character) {
    set->characters[set->character_count++] = character;
}

void Stand::reset() {
    *this = Stand();
    hero_support::reset();
    on_move = [](CCharacter *c, CVector3f *step) {
        c->base.location.position.x += step->x;
        c->base.location.position.y += step->y;
        c->base.location.position.z += step->z;
    };
    vtable._ub.playSound = play_sound;
    vtable._ub.processFootstepAtOffset = footstep;
    vtable._ub.getAllowedMeleeAttackTypes = melee_types_of;
    vtable._uc.processDamage = process_damage;
    vtable._uc.releaseFromGrab = release;
    vtable._uc.checkCylinderCollisionWorld = cylinder;
    vtable._uh.isWeaponDrawn = weapon_drawn;

    std::memset(game, 0, sizeof(*game));
    std::memset(set, 0, sizeof(*set));
    game->allow_damage_flag = 1;
    g_CGamePtr = game;
    g_CDemonSetPtr = set;
    std::memset(&g_CDemonRaytraceInstance, 0, sizeof(g_CDemonRaytraceInstance));
    std::memset(&g_CDemonLightInstance, 0, sizeof(g_CDemonLightInstance));
    for (CDemonLight *&light : g_DynamicLights) light = nullptr;
    g_DynamicLightCount = 0;
    std::memset(g_SfxSlots, 0, sizeof(g_SfxSlots));
}

}  // namespace behaviour_support

using behaviour_support::stand;

// --- motion --------------------------------------------------------------------

SMotion *__cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(
    CMotionController *this_ptr) {
    std::map<const CMotionController *, SMotion *>::const_iterator it = stand.motion.find(this_ptr);
    return (it != stand.motion.end()) ? it->second : &stand.idle;
}

int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList *, char *state_name,
                                                                   int) {
    std::map<std::string, int>::const_iterator it = stand.states.find(state_name);
    return (it != stand.states.end()) ? it->second : -1;
}

float __cdecl core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(
    CMotionController *, int desired_state_index) {
    std::map<int, float>::const_iterator it = stand.weights.find(desired_state_index);
    return (it != stand.weights.end()) ? it->second : 0.0f;
}

void __cdecl core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0(
    CMotionController *this_ptr, int target_motion_index, float) {
    stand.jumped.push_back({this_ptr, target_motion_index, 0});
}

void __cdecl core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(
    CMotionController *this_ptr, int desired_state_index, int force_immediate) {
    stand.desired.push_back({this_ptr, desired_state_index, force_immediate});
    this_ptr->state_index = desired_state_index;
}

void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter *this_ptr,
                                                                     CVector3f *velocity) {
    stand.moves.emplace_back(this_ptr, *velocity);
    stand.on_move(this_ptr, velocity);
}

// --- space ---------------------------------------------------------------------

CVector3f *__cdecl core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(
    CDemonActor *, CVector3f *output_vector, CVector3f *input_vector) {
    *output_vector = *input_vector;
    return output_vector;
}

// An actor's frame is its position, unrotated.
CVector3f *__cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(
    CDemonActor *this_ptr, CVector3f *output_local_point, CVector3f *input_world_point) {
    const CVector3f &at = this_ptr->location.position;
    *output_local_point = CVector3f{input_world_point->x - at.x, input_world_point->y - at.y,
                                    input_world_point->z - at.z};
    return output_local_point;
}

CVector3f *__cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(
    CDemonActor *this_ptr, CVector3f *output_world_point, CVector3f *input_local_point) {
    const CVector3f &at = this_ptr->location.position;
    *output_world_point = CVector3f{input_local_point->x + at.x, input_local_point->y + at.y,
                                    input_local_point->z + at.z};
    return output_world_point;
}

CSkeleton *__cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(
    CDeformableModelInstance *) {
    return nullptr;
}

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton *, char *bone_name, int) {
    std::map<std::string, int>::const_iterator it = stand.bones.find(bone_name);
    return (it != stand.bones.end()) ? it->second : -1;
}

CVector3f *__cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0059fb00(
    CDeformableModelInstance *, CVector3f *out_position, int) {
    *out_position = stand.bone_point;
    return out_position;
}

// --- damage --------------------------------------------------------------------

SDamageInfo *__cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr) {
    std::memset(this_ptr, 0, sizeof(*this_ptr));
    return this_ptr;
}

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter *this_ptr,
                                                                    SDamageInfo *) {
    stand.base_damage.push_back(this_ptr);
}

// --- the hero's interactions ---------------------------------------------------

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004f2af0(CHero *) {
    stand.interactions.push_back("interact");
    return stand.interact;
}

int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(CHero *) {
    stand.interactions.push_back("nearby door");
    return stand.nearby_door;
}

int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(CHero *) {
    stand.interactions.push_back("open door");
    return 1;
}

int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(CHero *) {
    stand.interactions.push_back("talk");
    return stand.talk;
}

int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(CHero *) {
    stand.interactions.push_back("lever");
    return stand.lever;
}

int __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(CHero *) {
    stand.interactions.push_back("pull");
    return 1;
}

// --- the inventory -------------------------------------------------------------

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *) {
    stand.inventory_updates++;
}

int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004f3760(CHero *) {
    stand.items_used++;
    return 1;
}

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory *) {
    stand.health_auto_used++;
}

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory *) {
    stand.display_resets++;
}

// --- lights --------------------------------------------------------------------

CDemonLight *__cdecl core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight *this_ptr, int,
                                                                  int) {
    stand.lights_built.push_back(this_ptr);
    return this_ptr;
}

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_004727c0(CDemonLight *) {}

void __cdecl core_set_cpp_CDemonSet_addLightFilter_FUN_00570f10(CDemonSet *, char *light_name,
                                                              C3DSLight **out_light,
                                                              CDemonLight **) {
    std::map<std::string, C3DSLight *>::const_iterator it = stand.scene_lights.find(light_name);
    *out_light = (it != stand.scene_lights.end()) ? it->second : nullptr;
}

int __cdecl engine_dosio_cpp_getFileSize_FUN_00481880(char *, char *filename) {
    std::map<std::string, int>::const_iterator it = stand.art_sizes.find(filename);
    return (it != stand.art_sizes.end()) ? it->second : -1;
}

void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0(C3DSLight *, char *filter_name,
                                                             float duration, int) {
    stand.filters.emplace_back(filter_name, duration);
}

char *__cdecl core_script_cpp_skipWhitespace_FUN_005593d0(char *str) {
    while (std::isspace((unsigned char)*str)) str++;
    return str;
}

// --- sound ---------------------------------------------------------------------

void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void) { stand.sound_locks++; }

void __cdecl sound_sndmain_cpp_unlockSound_FUN_005abdc0(void) { stand.sound_unlocks++; }

// --- the netplay shims ---------------------------------------------------------

int nocturne_net_session_active(void) { return stand.net_active; }

int nocturne_net_session_playing(void) { return stand.net_playing; }

int nocturne_net_cheats_auto_use_health(void) { return stand.auto_use_health; }

int nocturne_net_friendly_fire_block(CCharacter *, SDamageInfo *) { return stand.friendly_block; }

void nocturne_net_weapon_request(int action, int, int direction) {
    stand.weapon_requests.emplace_back(action, direction);
}
