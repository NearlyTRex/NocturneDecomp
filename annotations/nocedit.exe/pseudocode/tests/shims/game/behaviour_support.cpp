// =============================================================================
// BEHAVIOUR SUPPORT — see behaviour_support.h
// =============================================================================

#include "behaviour_support.h"

#include "class_support.h"
#include "net/net_cheats.h"
#include "net/net_friendly.h"
#include "net/net_session.h"
#include "net/net_weapon.h"

#include <cctype>
#include <cmath>
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
int g_ColonelIndices[17] = {};
CQuaternion4f CQuaternion4f_00665998 = {};
int g_GabriellaIndices[20] = {};
CFireEffect *g_CFireEffectPtr = nullptr;
CGore *g_CGorePtr = nullptr;
CDemonRenderer *g_CDemonRendererPtr2 = nullptr;

namespace behaviour_support {

Stand stand;

namespace {

std::unique_ptr<CGame> s_game(new CGame());
std::unique_ptr<CDemonSet> s_set(new CDemonSet());
std::vector<std::unique_ptr<CWeapon>> s_weapons;
std::vector<std::unique_ptr<CDynamite>> s_dynamites;

void set_weapon_state(CWeapon *weapon, int state) {
    stand.weapon_states.emplace_back(weapon, state);
    weapon->weapon_state = (EWeaponState)state;
}

CWeapon_full_vtable s_weapon_vtable;

bool rotated(const CDemonActor *actor) {
    for (const CVector3f &row : actor->orient_matrix.m) {
        if (row.x != 0.0f || row.y != 0.0f || row.z != 0.0f)
            return true;
    }
    return false;
}

int target_points_of(CDemonActor *actor, CVector3f *out) {
    out[0] = stand.target_offset;
    std::map<const void *, int>::const_iterator it = stand.target_points.find(actor);
    return (it != stand.target_points.end()) ? it->second : 0;
}

CBoundingBox3D *bounding_box(CDemonActor *, CBoundingBox3D *out) {
    std::memset(out, 0, sizeof(*out));
    out->max.y = 2.0f;
    return out;
}

void place(CDemonActor *actor, CVector3f *position, CVector3f *orientation) {
    actor->location.position = *position;
    stand.placed.emplace_back(actor, *orientation);
}

void process_actor(CDemonActor *, float) {
    stand.processed++;
}

int render(CDemonActor *) {
    stand.renders++;
    return 1;
}

void aim_beam(CWeapon *) {
    stand.beams++;
}

int ready(CWeapon *) {
    return stand.ready_to_fire;
}

int fire(CWeapon *weapon) {
    stand.shots++;
    weapon->ammo_count--;
    return 1;
}

void on_fired(CWeapon *) {
    stand.ejected++;
}

void drop_carried(CCharacter *, int, CVector3f *direction) {
    stand.drops.push_back(*direction);
}

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

} // namespace

CGame *game = s_game.get();
CDemonSet *set = s_set.get();

void put_in_set(CCharacter *character) {
    set->characters[set->character_count++] = character;
}

CWeapon *weapon(CDemonActorType *type) {
    s_weapons.emplace_back(new CWeapon());
    CWeapon *w = s_weapons.back().get();
    std::memset(w, 0, sizeof(*w));
    w->base.vtable._uw = &s_weapon_vtable;
    class_support::types[&w->base] = type;
    return w;
}

CDynamite *dynamite() {
    s_dynamites.emplace_back(new CDynamite());
    CDynamite *d = s_dynamites.back().get();
    std::memset(d, 0, sizeof(*d));
    d->base.base.vtable._uw = &s_weapon_vtable;
    d->fuse_timer = -1.0f;
    class_support::types[&d->base.base] = &g_CDynamiteClassInfo;
    return d;
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
    vtable._uc.dropCarriedObject = drop_carried;
    s_weapons.clear();
    s_dynamites.clear();
    std::memset(&s_weapon_vtable, 0, sizeof(s_weapon_vtable));
    s_weapon_vtable._uw.onFired = on_fired;
    s_weapon_vtable._ub.getActorType = class_support::actor_type;
    s_weapon_vtable._uw.setWeaponState = set_weapon_state;
    s_weapon_vtable._ub.setPositionAndOrientation = place;
    s_weapon_vtable._ub.process = process_actor;
    s_weapon_vtable._ub.renderOpaque = render;
    s_weapon_vtable._uw.renderAimBeam = aim_beam;
    s_weapon_vtable._uw.isReadyToFire = ready;
    s_weapon_vtable._uw.fire = fire;
    vtable._ub.getTargetPoints = target_points_of;
    vtable._ub.getBoundingBox = bounding_box;
    for (int i = 0; i < 17; i++)
        g_ColonelIndices[i] = i;
    for (int i = 0; i < 20; i++)
        g_GabriellaIndices[i] = i;

    std::memset(game, 0, sizeof(*game));
    std::memset(set, 0, sizeof(*set));
    game->allow_damage_flag = 1;
    g_CGamePtr = game;
    g_CDemonSetPtr = set;
    std::memset(&g_CDemonRaytraceInstance, 0, sizeof(g_CDemonRaytraceInstance));
    std::memset(&g_CDemonLightInstance, 0, sizeof(g_CDemonLightInstance));
    for (CDemonLight *&light : g_DynamicLights)
        light = nullptr;
    g_DynamicLightCount = 0;
    std::memset(g_SfxSlots, 0, sizeof(g_SfxSlots));
}

} // namespace behaviour_support

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
// Turned by its orient_matrix, whose columns are its axes in the world, when it
// has one set; an all-zero matrix leaves it unrotated.
CVector3f *__cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(
    CDemonActor *this_ptr, CVector3f *output_local_point, CVector3f *input_world_point) {
    const CVector3f &at = this_ptr->location.position;
    const CVector3f d = {input_world_point->x - at.x, input_world_point->y - at.y,
                         input_world_point->z - at.z};
    const CVector3f *m = this_ptr->orient_matrix.m;
    if (behaviour_support::rotated(this_ptr)) {
        *output_local_point = CVector3f{m[0].x * d.x + m[1].x * d.y + m[2].x * d.z,
                                        m[0].y * d.x + m[1].y * d.y + m[2].y * d.z,
                                        m[0].z * d.x + m[1].z * d.y + m[2].z * d.z};
    } else {
        *output_local_point = d;
    }
    return output_local_point;
}

CVector3f *__cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(
    CDemonActor *this_ptr, CVector3f *output_world_point, CVector3f *input_local_point) {
    const CVector3f &at = this_ptr->location.position;
    const CVector3f &l = *input_local_point;
    const CVector3f *m = this_ptr->orient_matrix.m;
    CVector3f d = l;
    if (behaviour_support::rotated(this_ptr)) {
        d = CVector3f{m[0].x * l.x + m[0].y * l.y + m[0].z * l.z,
                      m[1].x * l.x + m[1].y * l.y + m[1].z * l.z,
                      m[2].x * l.x + m[2].y * l.y + m[2].z * l.z};
    }
    *output_world_point = CVector3f{d.x + at.x, d.y + at.y, d.z + at.z};
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

CVector3f
    *__cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0059fb00(
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

// Empty, as CInventory::clear leaves it.
void __cdecl core_inv_cpp_CInventory_initialize_FUN_004fd190(CInventory *this_ptr) {
    stand.inventory_clears++;
    this_ptr->item_count = 0;
    this_ptr->selected_weapon = nullptr;
    this_ptr->selected_item = nullptr;
}

// Added at the end, and selected when it is a weapon and none is yet.
int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,
                                                         CDemonActor *item_actor, int) {
    this_ptr->items[this_ptr->item_count++] = item_actor;
    if (this_ptr->selected_weapon == nullptr &&
        core_actor_cpp_castToClassHash_FUN_0040c790(item_actor, g_CWeaponClassInfo.name_hash) !=
            nullptr) {
        this_ptr->selected_weapon = (CWeapon *)item_actor;
    }
    return 1;
}

void __cdecl core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(CInventory *, CDemonActor *, int,
                                                               int) {
    stand.weapon_selections++;
}

// The classes the weapon shim asks for, made as weapons.
CDemonActor *__cdecl core_actor_cpp_createActorByName_FUN_0040c430(char *class_name) {
    CDemonActorType *type =
        std::strcmp(class_name, "CShovel") == 0 ? &g_CShovelClassInfo : &g_CGunClassInfo;
    return &behaviour_support::weapon(type)->base;
}

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(
    CKeyFramedModelInstance *this_ptr, char *filename) {
    stand.models[this_ptr] = filename;
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
    while (std::isspace((unsigned char)*str))
        str++;
    return str;
}

// --- sound ---------------------------------------------------------------------

void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void) {
    stand.sound_locks++;
}

void __cdecl sound_sndmain_cpp_unlockSound_FUN_005abdc0(void) {
    stand.sound_unlocks++;
}

// --- aiming --------------------------------------------------------------------

CMotionList *__cdecl core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(
    CMotionController *this_ptr) {
    return this_ptr->motion_list_ptr;
}

int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList *,
                                                                     char *motion_name, int) {
    std::map<std::string, int>::const_iterator it = stand.motion_indices.find(motion_name);
    return (it != stand.motion_indices.end()) ? it->second : 0;
}

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(
    CDeformableModelInstance *, int target_motion_index, float target_frame_number, float, int,
    CDeformableModel_MotionBlendWeightFunc *) {
    stand.layered.emplace_back(target_motion_index, target_frame_number);
}

float __cdecl core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0(int, int, float blend_weight, int,
                                                                 CDeformableModelInstance *) {
    return blend_weight;
}

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750(
    CDeformableModelInstance *, CQuaternion4f *, float blend_weight, int,
    CDeformableModel_MotionBlendWeightFunc *) {
    stand.arm_blends.push_back(blend_weight);
}

CVector3f *__cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0059fa20(
    CDeformableModelInstance *, CVector3f *out_position, int) {
    *out_position = stand.bone_point;
    return out_position;
}

void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00574180(CDemonSet *) {}

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet *, int) {}

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet *, CDemonActor *) {}

// Hits `ray_actor` when set, else the character whose first target point is at
// the ray's end.
float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(CDemonSet *this_ptr, CVector3f *,
                                                               CVector3f *end) {
    this_ptr->collision_actor = stand.ray_actor;
    for (int i = 0; (stand.ray_actor == nullptr) && (i < this_ptr->character_count); i++) {
        CCharacter *c = this_ptr->characters[i];
        if (c == nullptr)
            continue;
        const CVector3f &at = c->base.location.position;
        if ((at.x + stand.target_offset.x == end->x) && (at.y + stand.target_offset.y == end->y) &&
            (at.z + stand.target_offset.z == end->z)) {
            this_ptr->collision_actor = &c->base;
        }
    }
    return stand.ray_hit;
}

float __cdecl core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float) {
    return (stand.random != 0.0f) ? stand.random : min_value;
}

// Yaw about y from +z toward +x, pitch about x, down positive.
CVector3f *__cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(
    CVector3f *out_euler_angles, CVector3f *in_direction_vector) {
    const CVector3f &d = *in_direction_vector;
    out_euler_angles->x = -std::atan2(d.y, std::sqrt(d.x * d.x + d.z * d.z));
    out_euler_angles->y = std::atan2(d.x, d.z);
    out_euler_angles->z = 0.0f;
    return out_euler_angles;
}

// The rotations are not looked at; each stands for what it was asked.
CQuaternion4f *core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(float angle, CQuaternion4f *out) {
    *out = CQuaternion4f{angle, 0.0f, 0.0f, 1.0f};
    return out;
}

CQuaternion4f *core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(float angle, CQuaternion4f *out) {
    *out = CQuaternion4f{0.0f, angle, 0.0f, 1.0f};
    return out;
}

CQuaternion4f *core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(float angle, CQuaternion4f *out) {
    *out = CQuaternion4f{0.0f, 0.0f, angle, 1.0f};
    return out;
}

CQuaternion4f *core_xform_cpp_multiplyQuaternion_FUN_005f7640(CQuaternion4f *, CQuaternion4f *b,
                                                              CQuaternion4f *out) {
    *out = *b;
    return out;
}

CQuaternion4f *core_xform_cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f *, CQuaternion4f *b, float,
                                                           CQuaternion4f *out) {
    *out = *b;
    return out;
}

// Rotation in w, x, y of each row and position in z, as the engine lays a
// CMatrix3x4f out; only the position is kept.
void __cdecl core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(
    CMatrix3x4f *output_matrix, CVector3f *position, CVector3f *) {
    std::memset(output_matrix, 0, sizeof(*output_matrix));
    output_matrix->m[0].z = position->x;
    output_matrix->m[1].z = position->y;
    output_matrix->m[2].z = position->z;
}

CMatrix3x4f *core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f *a, CMatrix3x4f *b,
                                                           CMatrix3x4f *out) {
    CMatrix3x4f sum = {};
    for (int row = 0; row < 3; row++)
        sum.m[row].z = a->m[row].z + b->m[row].z;
    *out = sum;
    return out;
}

CVector3f *__cdecl core_xform_cpp_getTranslation_FUN_005f6110(CMatrix3x4f *matrix_in,
                                                              CVector3f *vector_out) {
    *vector_out = CVector3f{matrix_in->m[0].z, matrix_in->m[1].z, matrix_in->m[2].z};
    return vector_out;
}

CVector3f *__cdecl core_xform_cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f *,
                                                                   CVector3f *euler_out) {
    *euler_out = CVector3f{0.0f, 0.0f, 0.0f};
    return euler_out;
}

// --- the netplay shims ---------------------------------------------------------

int nocturne_net_session_active(void) {
    return stand.net_active;
}

int nocturne_net_session_playing(void) {
    return stand.net_playing;
}

int nocturne_net_cheats_auto_use_health(void) {
    return stand.auto_use_health;
}

int nocturne_net_friendly_fire_block(CCharacter *, SDamageInfo *) {
    return stand.friendly_block;
}

void nocturne_net_weapon_request(int action, int, int direction) {
    stand.weapon_requests.emplace_back(action, direction);
}

// --- Gabriella's ---------------------------------------------------------------

void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890(CGabriella *this_ptr,
                                                                           float delta_time) {
    stand.motion_deltas.push_back(delta_time);
    if (stand.on_motion_events)
        stand.on_motion_events(this_ptr, delta_time);
}

int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870(CGabriella *) {
    stand.pickups++;
    return stand.pickup_found;
}

int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004d6050(CGabriella *) {
    stand.put_downs++;
    return 1;
}

int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004d5c60(CGabriella *) {
    stand.shipped_climbs++;
    return stand.shipped_climb;
}

float __cdecl core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0(
    int, int, float blend_weight, int, CDeformableModelInstance *) {
    return blend_weight;
}

void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0(
    CMotionController *, SMotionTransition *transition) {
    stand.transitions.push_back(*transition);
}

// Lit while the timer runs; burned out when the test says so.
int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0049cf70(CDynamite *this_ptr) {
    return this_ptr->fuse_timer >= 0.0f;
}

int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0049cf90(CDynamite *this_ptr) {
    return stand.burned_out.count(this_ptr) != 0;
}

void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0049cf20(CDynamite *this_ptr) {
    stand.fuses_lit++;
    this_ptr->fuse_timer = 3.5f;
}

float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet *, CVector3f *,
                                                                        CVector3f *) {
    return stand.arc_hit;
}

void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004c7f80(CFireEffect *, CVector3f *,
                                                                    CVector3f *, float, float,
                                                                    CVector3f *, float hit_time,
                                                                    int, int, int) {
    stand.arcs.push_back(hit_time);
}

float __cdecl core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470(CDemonSet *, float,
                                                                             float, float, float,
                                                                             float, float, float) {
    return stand.clear_ahead;
}

float __cdecl core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet *,
                                                                             CVector3f *, float) {
    return stand.ground;
}

// An actor's frame is unrotated.
CVector3f *__cdecl core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(
    CDemonActor *, CVector3f *output_vector, CVector3f *input_vector) {
    *output_vector = *input_vector;
    return output_vector;
}

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle) {
    return std::remainder(angle, 2.0f * 3.1415927f);
}

// A pitch about x alone, down positive, which is all a throw asks for.
void __cdecl core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f *this_ptr,
                                                                          CVector3f *euler) {
    const float c = std::cos(euler->x), s = std::sin(euler->x);
    this_ptr->m[0] = CVector3f{1.0f, 0.0f, 0.0f};
    this_ptr->m[1] = CVector3f{0.0f, c, s};
    this_ptr->m[2] = CVector3f{0.0f, -s, c};
}

CVector3f *__cdecl core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f *this_ptr,
                                                                            CVector3f *output,
                                                                            CVector3f *input) {
    const CVector3f *m = this_ptr->m;
    *output = CVector3f{m[0].x * input->x + m[0].y * input->y + m[0].z * input->z,
                        m[1].x * input->x + m[1].y * input->y + m[1].z * input->z,
                        m[2].x * input->x + m[2].y * input->y + m[2].z * input->z};
    return output;
}

CQuaternion4f *__cdecl core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CVector3f *euler,
                                                                     CQuaternion4f *out) {
    stand.arm_eulers.push_back(*euler);
    *out = CQuaternion4f{euler->x, euler->y, euler->z, 1.0f};
    return out;
}

void __cdecl core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore *, CVector3f *, CVector3f *,
                                                              int, int) {
    stand.blood++;
}

void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor *) {
    stand.render_states++;
}

void __cdecl core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor *) {
    stand.render_states--;
}

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(
    CDemonRenderer *, CVector3f *, CVector3f *position) {
    stand.mask_placed.push_back(*position);
}

void __cdecl engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer *) {}

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(
    CKeyFramedModelInstance *, float, int) {
    stand.models_drawn++;
}
