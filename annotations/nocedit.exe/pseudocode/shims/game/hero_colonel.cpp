// =============================================================================
// THE COLONEL'S PISTOL — implementation
// =============================================================================
//
// See hero_colonel.h.

#include "game/hero_colonel.h"
#include "game/hero_weapon.h"
#include "shim_config.h"

#include "nocturne.h"

#include <cmath>

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

namespace {

// g_ColonelIndices slots CColonel::setup fills.
const int kRightUpperArmBone = 4;
const int kRightForeArmBone = 6;
const int kRightHandBone = 0xe;

// COLONEL.SKL state indices.
const int kStateDraw = 9;
const int kStateShoot = 10;

// CScat::scoreAimTarget's reach: a new target within 30, the current one kept
// out to 35. The cone is the Colonel's own: 30 degrees either side, 35 to keep.
const float kTargetRange = 30.0f;
const float kKeepTargetRange = 35.0f;
const float kAimConeTangent = 0.577350f;
const float kKeepConeTangent = 0.700208f;

// CScat::updateAiming's turn rate, and IcePick's look-pitch rate and limit.
const float kAimTurnRate = 3.1415927f * 1.5f;
const float kLookPitchRate = 3.1415927f * 2.0f;
const float kLookPitchLimit = 0.7853982f;

// How fast the arm comes up to the aim, and goes back down, per second.
const float kAimWeightRate = 4.0f;

// The weight at which the arm is on the aim and the beam is drawn, as
// CScat::renderOpaque and CStranger::renderOpaque test their layer weight.
const float kAimReadyWeight = 0.95f;

// "draw" exits to STAND at frame 17. Holstering plays it backwards from just
// short of there, so the forward advance never reaches the exit.
const float kHolsterStartFrame = 15.0f;

struct SColonelAim {
    CColonel *colonel;
    float aim_yaw;       // relative to his facing
    float aim_pitch;
    float look_pitch;    // from look input, when there is no target
    float weight;        // how far the arm is raised onto the aim
    int   holstering;    // "draw" is playing backwards
    // Compared by address only, against the live character list; never read
    // through, so a deleted target cannot be touched.
    const CCharacter *target;
};

SColonelAim g_aims[8];

#define AIM_COUNT ((int)(sizeof(g_aims) / sizeof(g_aims[0])))

// The render path only reads: it never claims a slot.
const SColonelAim *find_aim(const CColonel *colonel)
{
    for (int i = 0; i < AIM_COUNT; i++) {
        if (g_aims[i].colonel == colonel) {
            return &g_aims[i];
        }
    }
    return (const SColonelAim *)0x0;
}

SColonelAim *aim_state(CColonel *colonel)
{
    SColonelAim *first_free = (SColonelAim *)0x0;
    int i;

    for (i = 0; i < AIM_COUNT; i++) {
        if (g_aims[i].colonel == colonel) {
            return &g_aims[i];
        }
        if ((first_free == (SColonelAim *)0x0) && (g_aims[i].colonel == (CColonel *)0x0)) {
            first_free = &g_aims[i];
        }
    }
    if (first_free == (SColonelAim *)0x0) {
        // A mission rebuilds its heroes; reuse the oldest slot rather than
        // refuse a Colonel his aim.
        first_free = &g_aims[0];
    }
    first_free->colonel = colonel;
    first_free->aim_yaw = 0.0f;
    first_free->aim_pitch = 0.0f;
    first_free->look_pitch = 0.0f;
    first_free->weight = 0.0f;
    first_free->holstering = 0;
    first_free->target = (const CCharacter *)0x0;
    return first_free;
}

CWeapon *sidearm(CColonel *colonel)
{
    CWeapon *weapon;

    weapon = (colonel->base).inventory.selected_weapon;
    if ((weapon == (CWeapon *)0x0) ||
        (_stricmp(weapon->base.actor_name, (char *)NOCTURNE_COLONEL_SIDEARM_NAME) != 0)) {
        return (CWeapon *)0x0;
    }
    return weapon;
}

CMotionController *controller(CColonel *colonel)
{
    return &(colonel->base).base.model.motion_controller;
}

int current_state(CColonel *colonel)
{
    return core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(controller(colonel))
        ->state_index;
}

void jump_to(CColonel *colonel, const char *motion_name, float frame)
{
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
        (controller(colonel), (char *)motion_name, frame);
}

float approach(float value, float target, float step)
{
    if (value < target - step) {
        return value + step;
    }
    if (target + step < value) {
        return value - step;
    }
    return target;
}

// Where on `target` to shoot, in world space: its first target point. Zero
// when it offers none, which is CDemonActor's default and what anything not
// meant to be shot at returns.
int target_point(CCharacter *target, CVector3f *out)
{
    CVector3f points[10];

    if ((*((target->base).vtable._ub->getTargetPoints))(&target->base, points) < 1) {
        return 0;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&target->base, out, &points[0]);
    return 1;
}

// CScat::scoreAimTarget's test, narrowed to enemies: alive by getDeathState
// (hit_points is not zeroed by every death), offering a target point, in
// front and in reach, and in sight - a ray from the middle of the Colonel to
// the target point that hits the target first. Returns the distance, or -1.
float score_target(CColonel *colonel, CCharacter *target, int is_current)
{
    CBoundingBox3D box;
    CBoundingBox3D *bounds;
    CVector3f local;
    CVector3f aim_point;
    CVector3f eye;
    float distance;
    float range;
    float cone;
    float hit;

    if ((target == (CCharacter *)0x0) || ((target->base).lifecycle_state != ACTOR_CREATED) ||
        (core_actor_cpp_castToClassHash_FUN_0040c790(&target->base, g_CEnemyClassInfo.name_hash)
         == (CDemonActor *)0x0)) {
        return -1.0f;
    }
    if (0 < (int)(*(((target->base).vtable._uc)->_uc).getDeathState)(target)) {
        return -1.0f;
    }
    if (target_point(target, &aim_point) == 0) {
        return -1.0f;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
        ((CDemonActor *)colonel, &local, &(target->base).location.position);
    range = (is_current != 0) ? kKeepTargetRange : kTargetRange;
    cone = (is_current != 0) ? kKeepConeTangent : kAimConeTangent;
    if ((local.z <= 0.0f) || (std::fabs(local.x) > local.z * cone)) {
        return -1.0f;
    }
    distance = std::sqrt(local.x * local.x + local.y * local.y + local.z * local.z);
    if (range < distance) {
        return -1.0f;
    }
    bounds = (*((colonel->base).base.base.vtable._ub->getBoundingBox))
                 ((CDemonActor *)colonel, &box);
    eye.x = (colonel->base).base.base.location.position.x + ((bounds->min).x + (bounds->max).x) * 0.5f;
    eye.y = (colonel->base).base.base.location.position.y + ((bounds->min).y + (bounds->max).y) * 0.5f;
    eye.z = (colonel->base).base.base.location.position.z + ((bounds->min).z + (bounds->max).z) * 0.5f;
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr, 1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, (CDemonActor *)colonel);
    hit = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr, &eye, &aim_point);
    if ((1.0f < hit) || (g_CDemonSetPtr->collision_actor != &target->base)) {
        distance = -1.0f;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    return distance;
}

// The nearest target, keeping the current one while it still scores. Recorded
// in `aim` so the next frame can prefer it.
CCharacter *find_target(CColonel *colonel, SColonelAim *aim)
{
    CCharacter *best;
    CCharacter *target;
    float best_distance;
    float distance;
    int i;

    best = (CCharacter *)0x0;
    best_distance = 1e30f;
    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        target = g_CDemonSetPtr->characters[i];
        distance = score_target(colonel, target, (uint)(target == aim->target));
        if ((0.0f <= distance) && (distance < best_distance)) {
            best_distance = distance;
            best = target;
        }
    }
    aim->target = best;
    return best;
}

// The aim the arm turns toward: at the target from the shoulder, in the
// Colonel's own frame, or level and at the look pitch when there is none.
void desired_aim(CColonel *colonel, CWeapon *weapon, SColonelAim *aim,
                 float *out_yaw, float *out_pitch)
{
    CCharacter *target;
    CVector3f world;
    CVector3f local;
    CVector3f shoulder;
    CVector3f direction;
    CVector3f euler;

    (void)weapon;
    target = find_target(colonel, aim);
    if ((target == (CCharacter *)0x0) || (target_point(target, &world) == 0)) {
        *out_yaw = 0.0f;
        *out_pitch = aim->look_pitch;
        return;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
        ((CDemonActor *)colonel, &local, &world);
    // Despite its name this returns the bone in the actor's own frame;
    // CScat::updateAiming subtracts it from a worldToLocalPoint result.
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
        (&(colonel->base).base.model, &shoulder, g_ColonelIndices[kRightUpperArmBone]);
    direction.x = local.x - shoulder.x;
    direction.y = local.y - shoulder.y;
    direction.z = local.z - shoulder.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&euler, &direction);
    *out_yaw = euler.y;
    *out_pitch = euler.x;
}

// CScat::blendAimBones for the right arm: the upper arm turned out to point
// along the aim, the forearm straightened behind it, both by `weight`.
void blend_arm_onto_aim(CColonel *colonel, SColonelAim *aim)
{
    CDeformableModelInstance *model;
    CQuaternion4f turn_y;
    CQuaternion4f turn_z;
    CQuaternion4f yaw;
    CQuaternion4f pitch;
    CQuaternion4f aim_rotation;
    CQuaternion4f arm_out;
    CQuaternion4f upper;
    CQuaternion4f blended;
    CQuaternion4f fore_rest;
    CQuaternion4f fore;
    int upper_bone;

    model = &(colonel->base).base.model;
    upper_bone = g_ColonelIndices[kRightUpperArmBone];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964f, &turn_y);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964f, &turn_z);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(aim->aim_yaw, &yaw);
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(aim->aim_pitch, &pitch);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&pitch, &yaw, &aim_rotation);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(&CQuaternion4f_00665998, &turn_y, 0.95f, &arm_out);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&arm_out, &aim_rotation, &upper);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
        (model->bone_transform.pose_data.bone_rotations + upper_bone, &upper, aim->weight,
         &blended);
    model->bone_transform.pose_data.bone_rotations[upper_bone] = blended;
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&turn_y, &turn_z, &fore_rest);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&fore_rest, &aim_rotation, &fore);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
        (model, &fore, aim->weight, g_ColonelIndices[kRightForeArmBone],
         core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
}

// The world-space facing of the current aim.
void aim_euler(CColonel *colonel, SColonelAim *aim, CVector3f *out)
{
    out->x = aim->aim_pitch;
    out->y = (colonel->base).base.base.orient.vec.y + aim->aim_yaw;
    out->z = 0.0f;
}

// The pistol's grip on the right hand, in world space: CScat::updateWeaponAttachment's
// grip on the same Biped bone. bone_world_matrices are in the actor's own frame,
// so the body's transform goes on last.
void grip_world(CColonel *colonel, CMatrix3x4f *world)
{
    CMatrix3x4f grip;
    CMatrix3x4f hand;
    CMatrix3x4f body;
    CVector3f grip_position;
    CVector3f grip_euler;

    grip_euler.x = 0.0f;
    grip_euler.y = 1.5707964f;
    grip_euler.z = 1.5707964f;
    grip_position.x = 0.390807f;
    grip_position.y = -0.103151f;
    grip_position.z = 0.109206f;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
        (&grip, &grip_position, &grip_euler);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
        (&grip,
         (colonel->base).base.model.bone_transform.bone_world_matrices +
             g_ColonelIndices[kRightHandBone],
         &hand);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
        (&body, &(colonel->base).base.base.location.position,
         &(colonel->base).base.base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&hand, &body, world);
}

// The pistol on the right hand, pointed along the aim once the arm is on it, so
// the beam goes where the arm points.
void place_gun(CColonel *colonel, CWeapon *weapon, SColonelAim *aim)
{
    CMatrix3x4f world;
    CVector3f position;
    CVector3f euler;

    grip_world(colonel, &world);
    core_xform_cpp_getTranslation_FUN_005f6110(&world, &position);
    if (kAimReadyWeight < aim->weight) {
        aim_euler(colonel, aim, &euler);
    }
    else {
        core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&world, &euler);
    }
    (*((weapon->base).vtable._ub)->setPositionAndOrientation)(&weapon->base, &position, &euler);
}

// Points the pistol from the right hand at the shot, so CGun::fire, which fires
// from the weapon's own muzzle along its own facing, sends it there.
void point_gun_at_shot(CColonel *colonel, CWeapon *weapon, SColonelAim *aim)
{
    CCharacter *target;
    CMatrix3x4f grip;
    CVector3f hand;
    CVector3f world;
    CVector3f direction;
    CVector3f euler;

    // From where the drawn pistol is, not getBoneCachedWorldPosition: that reads
    // bone_world_matrices too, and so is in the actor's frame, not the world's.
    grip_world(colonel, &grip);
    core_xform_cpp_getTranslation_FUN_005f6110(&grip, &hand);
    target = find_target(colonel, aim);
    if ((target != (CCharacter *)0x0) && (target_point(target, &world) != 0)) {
        direction.x = world.x - hand.x;
        direction.y = world.y - hand.y;
        direction.z = world.z - hand.z;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&euler, &direction);
    }
    else {
        aim_euler(colonel, aim, &euler);
    }
    (*((weapon->base).vtable._ub)->setPositionAndOrientation)(&weapon->base, &hand, &euler);
}

} // namespace

extern "C" void nocturne_colonel_draw(CColonel *colonel)
{
    CWeapon *weapon;
    SColonelAim *aim;

    if (colonel == (CColonel *)0x0) {
        return;
    }
    weapon = sidearm(colonel);
    if (weapon == (CWeapon *)0x0) {
        return;
    }
    aim = aim_state(colonel);
    if (colonel->guns_drawn != 0) {
        (*(((weapon->base).vtable._uw)->_uw).setWeaponState)(weapon, WEAPON_STATE_IN_HAND);
        aim->holstering = 0;
        jump_to(colonel, "draw", 0.0f);
    }
    else {
        // The pistol stays in hand until "draw" has played back to its start.
        aim->holstering = 1;
        aim->weight = 0.0f;
        jump_to(colonel, "draw", kHolsterStartFrame);
    }
}

extern "C" int nocturne_colonel_fire(CColonel *colonel)
{
    CWeapon *weapon;

    if ((colonel == (CColonel *)0x0) || (colonel->guns_drawn == 0)) {
        return 0;
    }
    weapon = sidearm(colonel);
    if ((weapon == (CWeapon *)0x0) ||
        ((*(((weapon->base).vtable._uw)->_uw).isReadyToFire)(weapon) == 0)) {
        return 0;
    }
    point_gun_at_shot(colonel, weapon, aim_state(colonel));
    (*(((weapon->base).vtable._uw)->_uw).fire)(weapon);
    nocturne_hero_reload_extra_gun(&colonel->base, weapon);
    jump_to(colonel, "shoot", 0.0f);
    return 1;
}

extern "C" void nocturne_colonel_pre_animate(CColonel *colonel, float delta_time)
{
    CMotionController *motion;
    SColonelAim *aim;
    float frame;

    if ((colonel == (CColonel *)0x0) || (sidearm(colonel) == (CWeapon *)0x0)) {
        return;
    }
    aim = aim_state(colonel);
    if (aim->holstering == 0) {
        return;
    }
    // Anything that took him out of "draw" - a grab, a death - ends it.
    if (current_state(colonel) != kStateDraw) {
        aim->holstering = 0;
        return;
    }
    motion = controller(colonel);
    // The controller has already stepped the frame forward this tick; take
    // that step back and one more.
    frame = motion->current_frame_number -
            2.0f * delta_time *
                core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(motion)->fps;
    if (0.0f < frame) {
        motion->current_frame_number = frame;
        return;
    }
    aim->holstering = 0;
    jump_to(colonel, "stand", 0.0f);
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(motion, 0, 0);
}

extern "C" void nocturne_colonel_update_gun(CColonel *colonel, float delta_time)
{
    CWeapon *weapon;
    SColonelAim *aim;
    float wanted_weight;
    float wanted_yaw;
    float wanted_pitch;
    float step;
    int state;

    if (colonel == (CColonel *)0x0) {
        return;
    }
    weapon = sidearm(colonel);
    if (weapon == (CWeapon *)0x0) {
        return;
    }
    aim = aim_state(colonel);
    state = current_state(colonel);

    if (colonel->guns_drawn != 0) {
        aim->look_pitch += (colonel->base).player_input.look_up_down_speed * kLookPitchRate *
                           delta_time;
        if (kLookPitchLimit < aim->look_pitch) {
            aim->look_pitch = kLookPitchLimit;
        }
        if (aim->look_pitch < -kLookPitchLimit) {
            aim->look_pitch = -kLookPitchLimit;
        }
    }
    else {
        aim->look_pitch = 0.0f;
    }

    // Raised while the pistol is out and he is standing, moving or shooting;
    // lowered for "draw", a hit, a grab.
    wanted_weight = 0.0f;
    if ((colonel->guns_drawn != 0) && ((state <= 3) || (state == kStateShoot))) {
        wanted_weight = 1.0f;
    }
    aim->weight = approach(aim->weight, wanted_weight, kAimWeightRate * delta_time);

    desired_aim(colonel, weapon, aim, &wanted_yaw, &wanted_pitch);
    step = kAimTurnRate * delta_time;
    aim->aim_yaw = approach(aim->aim_yaw, wanted_yaw, step);
    aim->aim_pitch = approach(aim->aim_pitch, wanted_pitch, step);

    if (0.0f < aim->weight) {
        blend_arm_onto_aim(colonel, aim);
    }
    place_gun(colonel, weapon, aim);
    (*((weapon->base).vtable._ub)->process)(&weapon->base, delta_time);
}

extern "C" void nocturne_colonel_render_gun(CColonel *colonel)
{
    CWeapon *weapon;
    const SColonelAim *aim;

    if (colonel == (CColonel *)0x0) {
        return;
    }
    weapon = sidearm(colonel);
    aim = find_aim(colonel);
    if ((weapon == (CWeapon *)0x0) || (aim == (const SColonelAim *)0x0)) {
        return;
    }
    if ((colonel->guns_drawn == 0) && (aim->holstering == 0)) {
        return;
    }
    (*((weapon->base).vtable._ub)->renderOpaque)(&weapon->base);
    if ((colonel->guns_drawn != 0) && (kAimReadyWeight < aim->weight)) {
        (*(((weapon->base).vtable._uw)->_uw).renderAimBeam)(weapon);
    }
}

#else

extern "C" void nocturne_colonel_draw(CColonel *) {}
extern "C" int nocturne_colonel_fire(CColonel *) { return 0; }
extern "C" void nocturne_colonel_pre_animate(CColonel *, float) {}
extern "C" void nocturne_colonel_update_gun(CColonel *, float) {}
extern "C" void nocturne_colonel_render_gun(CColonel *) {}

#endif // !NOCTURNE_AUTHENTIC_HERO_ACTIONS
