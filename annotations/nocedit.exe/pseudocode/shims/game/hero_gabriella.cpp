// =============================================================================
// GABRIELLA AS A PLAYER HERO — see hero_gabriella.h
// =============================================================================

#include "game/hero_gabriella.h"
#include "nocturne.h"

#include <cmath>

// =============================================================================
// Shared
// =============================================================================

namespace {

// GABRIELA.SKL's state list.
const uint kStand    = 0x00;
const uint kWalk     = 0x01;
const uint kKickDoor = 0x13;
const uint kStrafeL  = 0x14;
const uint kStrafeR  = 0x15;

float clamp(float x, float lo, float hi)
{
    if (x < lo) {
        return lo;
    }
    return (hi < x) ? hi : x;
}

float clamp01(float x)
{
    return clamp(x, 0.0f, 1.0f);
}

// `value` moved toward `target` by no more than `step`.
float approach(float value, float target, float step)
{
    return value + clamp(target - value, -step, step);
}

uint current_state(CGabriella *gabriella)
{
    return core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
               (&(gabriella->base).base.model.motion_controller)->state_index;
}

// Hero slots are shared by every machine, so per-slot state stays in lockstep.
int hero_slot(CDemonActor *actor)
{
    int i;

    for (i = 0; (i < 4) && (i < g_HeroCount); i++) {
        if ((CDemonActor *)g_HeroActors[i] == actor) {
            return i;
        }
    }
    return -1;
}

int is_player_hero(CDemonActor *actor)
{
    return hero_slot(actor) >= 0;
}

} // namespace

// =============================================================================
// Dynamite
// =============================================================================

namespace {

// CGabriella::fire_state: fire held on dynamite charges the throw, and its
// release waits there until canFireWeapon lets the throw go.
const int kFireReleased = 2;
const int kFireCharging = 3;

// Points on draw_blend that updateWeaponPosition and
// updateWeaponAndAimAnimation work to: below kWeaponAtHip the weapon is placed
// at her hip rather than in her hand, and from kArmOut her arm leaves the draw
// motion for the aim.
const float kWeaponAtHip = 0.64f;
const float kArmOut      = 0.82f;

enum ERefetch {
    REFETCH_NONE,
    REFETCH_LOWERING,   // hand going to her hip
    REFETCH_RAISING     // coming back with the next stick
};

struct SThrow {
    float    windup;        // weight of the wind-up pose
    int      swinging;
    float    swing_t;
    float    swing_from;    // the wind-up weight the swing started from
    int      released;      // the stick left her hand on this swing
    int      thrown;        // released, and the follow-through has not ended
    ERefetch refetch;       // the fetch of the next stick
};

SThrow s_throw[4];

// Arm pitches for the throw, in the convention of her aim_pitch (negative is
// up). The wind-up raises the arm in front of her, above the shoulder; the
// swing brings it forward and down to a follow-through just below level, and
// the stick leaves her hand as the arm passes kReleasePitch.
const float kWindupPitch  = -0.95f;
const float kReleasePitch = -0.45f;
const float kFollowPitch  = 0.25f;
const float kSwingSeconds = 0.25f;
// The last part of the swing over which the arm hands back to her held pose.
const float kSwingFadeFraction = 0.3f;
// How fast the arm comes up into the wind-up, and how fast the swing takes
// over from a wind-up that had not finished, per second.
const float kWindupRate = 6.0f;
const float kSwingBlendInRate = 16.0f;

// CStranger::autoAimAtThreat's throwing arm: look input moves the aim between
// 60 degrees up and 70 degrees down, and the throw's pitch follows it at
// half pi per second.
const float kThrowAimUp = -1.047198f;
const float kThrowAimDown = 1.22173f;
const float kThrowAimRate = 3.1415927f * 0.5f;

// updateAimTracking's aim weight rate, per second.
const float kAimWeightRate = 1.0f / 0.3f;

// The fetch of the next stick drives draw_blend itself, silently, from 1 down
// to kRefetchLow and back, at kRefetchSpeed times the holster and draw rates.
// Below kWeaponAtHip the weapon is placed at her hip, so the dip swaps the
// stick. Walking draw_blend through her draw motion would swing the arm out
// front on the way down and up; instead the motion is held at
// kRefetchHipMarker, where the draw takes the weapon from her hip, and only
// its weight moves, from 0 at draw_blend 1 to 1 at kWeaponAtHip.
const float kRefetchLow = 0.6f;
const float kRefetchSpeed = 1.0f;
const float kRefetchHipMarker = (kWeaponAtHip - 0.2f) / (1.0f - 0.2f);

CDynamite *selected_dynamite(CGabriella *gabriella)
{
    return (CDynamite *)core_actor_cpp_castToClassHash_FUN_0040c790
        ((CDemonActor *)(gabriella->base).inventory.selected_weapon,
         g_CDynamiteClassInfo.name_hash);
}

// Her throw, or null for a Gabriella who is not a player hero: an NPC throws
// at once, with no swing or fetch.
SThrow *throw_state(CGabriella *gabriella)
{
    int slot = hero_slot((CDemonActor *)gabriella);

    return (slot < 0) ? (SThrow *)0x0 : &s_throw[slot];
}

// Dynamite drawn with no stick in hand: thrown and not yet replaced, or none left.
int empty_handed(CGabriella *gabriella)
{
    CDynamite *dynamite = selected_dynamite(gabriella);
    const SThrow *t;

    if ((dynamite == (CDynamite *)0x0) || (gabriella->weapon_state_flags == 0)) {
        return 0;
    }
    if ((dynamite->base).ammo_count <= 0) {
        return 1;
    }
    t = throw_state(gabriella);
    return (t != (SThrow *)0x0) && ((t->thrown != 0) || (t->refetch != REFETCH_NONE));
}

float smoothstep01(float x)
{
    x = clamp01(x);
    return x * x * (3.0f - 2.0f * x);
}

float swing_pitch(const SThrow *t)
{
    return kWindupPitch + (kFollowPitch - kWindupPitch) * smoothstep01(t->swing_t / kSwingSeconds);
}

float swing_weight(const SThrow *t)
{
    float weight;
    float fade_start;

    weight = t->swing_from + kSwingBlendInRate * t->swing_t;
    if (1.0f < weight) {
        weight = 1.0f;
    }
    fade_start = kSwingSeconds * (1.0f - kSwingFadeFraction);
    if (fade_start < t->swing_t) {
        weight = weight * (1.0f - (t->swing_t - fade_start) / (kSwingSeconds - fade_start));
    }
    return (weight < 0.0f) ? 0.0f : weight;
}

// How far her arm is out, from updateWeaponAndAimAnimation's aim weight: 0
// until draw_blend passes kArmOut, 1 when fully drawn. Holstering lowers it,
// so the throw pose goes down with the arm.
float drawn_weight(const CGabriella *gabriella)
{
    return clamp01((gabriella->draw_blend - kArmOut) / (1.0f - kArmOut));
}

// Her pistol aim's arm placement, CGabriella::updateWeaponAndAimAnimation's
// CGun branch, with the throw's pitch in place of her aim's: the right arm
// turned to point along (pitch, yaw), down the arm by
// weaponDrawBlendWeightCallback.
void point_throwing_arm(CGabriella *gabriella, float pitch, float weight)
{
    CQuaternion4f turn_z;
    CQuaternion4f turn_y;
    CQuaternion4f arm_out;
    CQuaternion4f aim;
    CQuaternion4f arm;
    CVector3f euler;

    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964f, &turn_z);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964f, &turn_y);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&turn_y, &turn_z, &arm_out);
    euler.x = pitch;
    euler.y = clamp(gabriella->aim_yaw, -1.7453293f, 1.7453293f);
    euler.z = 0.0f;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&euler, &aim);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&arm_out, &aim, &arm);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
        (&(gabriella->base).base.model, &arm, weight, g_GabriellaIndices[4],
         core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0);
}

// One frame of the wind-up, swing and fetch, with dynamite selected.
void step_throw(CGabriella *gabriella, SThrow *t, CDynamite *dynamite, float delta_time)
{
    if ((gabriella->weapon_state_flags & 2) == 0) {
        // Holstering cancels the throw. fire_state can stay kFireReleased with
        // the weapon away, as canFireWeapon refuses, so it must not hold the
        // wind-up; a stick still owed a throw swings again on the redraw. The
        // holster stands in for a fetch the throw still owed.
        t->swinging = 0;
        t->released = 0;
        t->thrown = 0;
        t->refetch = REFETCH_NONE;
        t->windup = clamp01(t->windup - kWindupRate * delta_time);
        return;
    }
    if (gabriella->fire_state == kFireCharging) {
        // A new charge: a swing still following through gives way to the
        // wind-up.
        t->released = 0;
        t->swinging = 0;
    }
    if (t->swinging != 0) {
        t->swing_t = t->swing_t + delta_time;
        if (kSwingSeconds <= t->swing_t) {
            t->swinging = 0;
        }
    }
    if ((t->thrown != 0) && (t->swinging == 0)) {
        // The follow-through is over: fetch the next stick, if any.
        t->thrown = 0;
        if (0 < (dynamite->base).ammo_count) {
            t->refetch = REFETCH_LOWERING;
        }
    }
    else if (gabriella->fire_state == kFireCharging) {
        t->windup = clamp01(t->windup + kWindupRate * delta_time);
    }
    else if (gabriella->fire_state != kFireReleased) {
        // Waiting on the throw holds the wind-up.
        t->windup = clamp01(t->windup - kWindupRate * delta_time);
    }
}

// CStranger::processWeaponTick's drop: no velocity, so the toss explodes where
// the stick is. fire() puts the fuse back to unlit only when it throws; the
// reset after it keeps a refused throw from retrying.
void drop_burned_out(CGabriella *gabriella, CDynamite *dynamite)
{
    memset(&dynamite->toss_velocity, 0, sizeof(dynamite->toss_velocity));
    (*(((dynamite->base.base.vtable._uw)->_uw).fire))((CWeapon *)dynamite);
    dynamite->fuse_timer = -1.0f;
    gabriella->fire_state = 0;
    gabriella->dynamite_charge_power = 10.0f;
}

} // namespace

extern "C" void nocturne_hero_gabriella_charge_dynamite(CGabriella *gabriella, CDynamite *dynamite)
{
    if ((gabriella == (CGabriella *)0x0) || (dynamite == (CDynamite *)0x0)) {
        return;
    }
    // An empty stick stays unlit: CWeapon::fire refuses it, so nothing would
    // carry the fuse away and it would burn out in her hand.
    if ((dynamite->base.ammo_count <= 0) ||
        (core_dynamite_cpp_CDynamite_isFuseLit_FUN_0049cf70(dynamite) != 0)) {
        return;
    }
    core_dynamite_cpp_CDynamite_lightFuse_FUN_0049cf20(dynamite);
}

extern "C" void nocturne_hero_gabriella_dynamite_tick(CGabriella *gabriella, float delta_time)
{
    CDynamite *dynamite;
    SThrow *t;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    dynamite = selected_dynamite(gabriella);
    t = throw_state(gabriella);
    if (t != (SThrow *)0x0) {
        if (dynamite == (CDynamite *)0x0) {
            memset(t, 0, sizeof(*t));
        }
        else {
            step_throw(gabriella, t, dynamite, delta_time);
        }
    }
    if ((dynamite == (CDynamite *)0x0) ||
        (core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0049cf90(dynamite) == 0)) {
        return;
    }
    if (t != (SThrow *)0x0) {
        memset(t, 0, sizeof(*t));
    }
    drop_burned_out(gabriella, dynamite);
}

extern "C" int nocturne_hero_gabriella_holds_dynamite(CGabriella *gabriella)
{
    return (gabriella != (CGabriella *)0x0) && (selected_dynamite(gabriella) != (CDynamite *)0x0);
}

extern "C" int nocturne_hero_gabriella_dynamite_aim(CGabriella *gabriella, float delta_time,
                                                    int is_holstering)
{
    const SThrow *t;
    int raised;
    float step;

    if ((gabriella == (CGabriella *)0x0) || (selected_dynamite(gabriella) == (CDynamite *)0x0)) {
        return 0;
    }
    gabriella->aim_target = (CDemonActor *)0x0;
    // target_aim_pitch is the Stranger's aim_pitch, the look-driven aim;
    // aim_pitch is his target_pitch, which eases after it and is thrown along.
    gabriella->target_aim_pitch =
        clamp((gabriella->base).player_input.look_up_down_speed * 3.1415927f * 2.0f * delta_time +
                  gabriella->target_aim_pitch,
              kThrowAimUp, kThrowAimDown);
    gabriella->target_aim_yaw = 0.0f;

    // Her aim weight carries both her raised arm and her head and body turning
    // to the aim. The Stranger holds the stick at his side and shows no aim
    // until the fuse is lit, so hers rises only through the charge and the
    // throw - canFireWeapon needs it full - and otherwise falls, leaving the
    // stick in her hand at her side.
    t = throw_state(gabriella);
    raised = (gabriella->weapon_state_flags != 0) && (is_holstering == 0) &&
             ((gabriella->fire_state == kFireCharging) ||
              (gabriella->fire_state == kFireReleased) ||
              ((t != (SThrow *)0x0) && (t->swinging != 0)));
    gabriella->aim_weight = clamp01(gabriella->aim_weight +
                                    ((raised != 0) ? kAimWeightRate : -kAimWeightRate) * delta_time);

    step = delta_time * kThrowAimRate;
    gabriella->aim_pitch = approach(gabriella->aim_pitch, gabriella->target_aim_pitch, step);
    gabriella->aim_yaw = approach(gabriella->aim_yaw, 0.0f, step);
    return 1;
}

extern "C" int nocturne_hero_gabriella_throw_ready(CGabriella *gabriella)
{
    SThrow *t;

    if ((gabriella == (CGabriella *)0x0) || (selected_dynamite(gabriella) == (CDynamite *)0x0)) {
        return 1;
    }
    t = throw_state(gabriella);
    if (t == (SThrow *)0x0) {
        return 1;
    }
    if (t->swinging == 0) {
        t->swinging = 1;
        t->swing_t = 0.0f;
        t->swing_from = t->windup;
        t->released = 0;
        t->windup = 0.0f;
        return 0;
    }
    if ((t->released == 0) && (kReleasePitch <= swing_pitch(t))) {
        t->released = 1;
        t->thrown = 1;
        return 1;
    }
    return 0;
}

extern "C" void nocturne_hero_gabriella_pose_throw(CGabriella *gabriella)
{
    const SThrow *t;
    float drawn;

    if ((gabriella == (CGabriella *)0x0) || (selected_dynamite(gabriella) == (CDynamite *)0x0)) {
        return;
    }
    t = throw_state(gabriella);
    if (t == (SThrow *)0x0) {
        return;
    }
    drawn = drawn_weight(gabriella);
    if (t->swinging != 0) {
        point_throwing_arm(gabriella, swing_pitch(t), swing_weight(t) * drawn);
    }
    else if (0.0f < t->windup) {
        point_throwing_arm(gabriella, kWindupPitch, t->windup * drawn);
    }
}

extern "C" int nocturne_hero_gabriella_refetch_dynamite(CGabriella *gabriella, float delta_time)
{
    SThrow *t;

    if ((gabriella == (CGabriella *)0x0) || (selected_dynamite(gabriella) == (CDynamite *)0x0)) {
        return 0;
    }
    t = throw_state(gabriella);
    if ((t == (SThrow *)0x0) || (t->refetch == REFETCH_NONE)) {
        return 0;
    }
    if ((gabriella->weapon_state_flags & 2) == 0) {
        // A holster takes over from where the fetch had got to.
        t->refetch = REFETCH_NONE;
        return 0;
    }
    if (t->refetch == REFETCH_LOWERING) {
        gabriella->draw_blend = gabriella->draw_blend - kRefetchSpeed * delta_time / 1.2f;
        if (gabriella->draw_blend <= kRefetchLow) {
            gabriella->draw_blend = kRefetchLow;
            t->refetch = REFETCH_RAISING;
        }
    }
    else {
        gabriella->draw_blend = gabriella->draw_blend + kRefetchSpeed * delta_time / 1.1f;
        if (1.0f <= gabriella->draw_blend) {
            gabriella->draw_blend = 1.0f;
            t->refetch = REFETCH_NONE;
        }
    }
    return 1;
}

extern "C" int nocturne_hero_gabriella_refetch_pose(CGabriella *gabriella, float *weight,
                                                    float *marker)
{
    const SThrow *t;

    if ((gabriella == (CGabriella *)0x0) || (selected_dynamite(gabriella) == (CDynamite *)0x0)) {
        return 0;
    }
    t = throw_state(gabriella);
    if ((t == (SThrow *)0x0) || (t->refetch == REFETCH_NONE)) {
        return 0;
    }
    *weight = clamp01((1.0f - gabriella->draw_blend) / (1.0f - kWeaponAtHip));
    *marker = kRefetchHipMarker;
    return 1;
}

extern "C" int nocturne_hero_gabriella_weapon_hidden(CGabriella *gabriella)
{
    CDynamite *dynamite;
    const SThrow *t;

    if (gabriella == (CGabriella *)0x0) {
        return 0;
    }
    dynamite = selected_dynamite(gabriella);
    if (dynamite == (CDynamite *)0x0) {
        return 0;
    }
    if ((dynamite->base).ammo_count <= 0) {
        return 1;
    }
    t = throw_state(gabriella);
    if (t == (SThrow *)0x0) {
        return 0;
    }
    // Thrown, and the hand has not yet reached her hip for the next one.
    return (t->thrown != 0) ||
           ((t->refetch == REFETCH_LOWERING) && (kWeaponAtHip <= gabriella->draw_blend));
}

extern "C" void nocturne_hero_gabriella_render_throw_arc(CGabriella *gabriella, CDynamite *dynamite)
{
    CVector3f *start_pos;
    float hit_time;

    // Only while charging: toss_velocity outlives the charge until the stick
    // is thrown, through the swing.
    if ((gabriella == (CGabriella *)0x0) || (dynamite == (CDynamite *)0x0) ||
        (gabriella->fire_state != kFireCharging)) {
        return;
    }
    // toss_velocity is already in world space: CGabriella::process transforms
    // it by her orientation when she charges.
    start_pos = &dynamite->base.base.location.position;
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr, 1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, (CDemonActor *)gabriella);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, (CDemonActor *)dynamite);
    hit_time = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800
                   (g_CDemonSetPtr, start_pos, &dynamite->toss_velocity);
    if (hit_time < 0.0f) {
        hit_time = 10.0f;
    }
    core_fire_cpp_CFireEffect_createLaserPath_FUN_004c7f80
        (g_CFireEffectPtr, start_pos, &dynamite->toss_velocity, 1.0f, 1.0f,
         &g_CDemonSetPtr->collision_normal, hit_time, 0xff, 0, 0);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
}

// =============================================================================
// One press, one action
// =============================================================================

namespace {

// Per hero slot: the current fire press has been used, so fire reads 0 until it
// is released. In single player a consumer clears player_input.fire and it stays
// clear while the button is held; in a network game the synced input is applied
// again every frame, and a held press would repeat the action each time.
int s_press_used[4];

// Marks the press as used and clears it for the rest of this frame.
void use_press(CGabriella *gabriella, int slot)
{
    if ((0 <= slot) && (slot < 4)) {
        s_press_used[slot] = 1;
    }
    (gabriella->base).player_input.action_state.fire = 0;
}

// Start of her frame, before anything reads fire. A press that is still held
// once used reads as released, and so does one held through a draw: action and
// fire share the button, and the held action press would otherwise shoot the
// moment the draw completes. Nor may a press light a stick she does not have
// in hand yet.
void filter_press(CGabriella *gabriella, int slot)
{
    SPlayerInput *input = &(gabriella->base).player_input;

    if ((slot < 0) || (4 <= slot)) {
        return;
    }
    if (input->action_state.fire == 0) {
        s_press_used[slot] = 0;
        return;
    }
    if ((gabriella->weapon_state_flags == 0) && (input->action_state.draw != 0)) {
        s_press_used[slot] = 1;
    }
    if (empty_handed(gabriella) != 0) {
        s_press_used[slot] = 1;
    }
    if (s_press_used[slot] != 0) {
        input->action_state.fire = 0;
    }
}

} // namespace

// =============================================================================
// Pickup, strafe, kick
// =============================================================================

namespace {

// The kick. The thigh peaks at frame 19 and the knee straightens on the way
// down at 22-24; the motion exits at 29. Values to tune in play.
const float kKickHitFrame   = 22.0f;
const float kKickMinDamage  = 10.0f;    // her grab-escape kick, signal 6
const float kKickMaxDamage  = 15.0f;

// Who the kick reaches: an enemy whose collision cylinder comes within this
// distance of her, in front of her within 45 degrees widened by its radius, and
// level with her. The same test starts the kick and lands it, so a kick that
// starts connects unless the enemy has moved out of reach.
const float kKickReach      = 1.5f;
const float kKickHeightBand = 2.0f;

// A press made while she is still settling into STAND (the end of a walk, a turn
// in place) waits this long for her to arrive rather than being dropped.
const float kKickBufferSeconds = 0.5f;

// The shove after a hit.
const float kShoveDistance = 1.5f;
const float kShoveSeconds  = 0.25f;

struct SShove {
    CGabriella *owner;
    CCharacter *target;
    float       dir_x;
    float       dir_z;
    float       elapsed;    // seconds; kShoveSeconds or more is a free slot
};

// Shoves are stepped from their owner's process, once per owner per frame.
SShove s_shoves[16];
#define SHOVE_COUNT ((int)(sizeof(s_shoves) / sizeof(s_shoves[0])))

// Seconds a buffered kick press has left, per hero slot.
float s_kick_buffer[4];

// A live enemy in the set: what the kick may hit and shove.
int is_kickable(CCharacter *target)
{
    if ((target == (CCharacter *)0x0) || ((target->base).lifecycle_state != ACTOR_CREATED)) {
        return 0;
    }
    if (target->hit_points <= 0.0f) {
        return 0;
    }
    if (is_player_hero(&target->base) != 0) {
        return 0;
    }
    return core_actor_cpp_castToClassHash_FUN_0040c790(&target->base, g_CEnemyClassInfo.name_hash)
           != (CDemonActor *)0x0;
}

int in_set(CCharacter *target)
{
    int i;

    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        if (g_CDemonSetPtr->characters[i] == target) {
            return 1;
        }
    }
    return 0;
}

// Whether `target` is a live enemy the kick reaches. Measured to the edge of
// its collision cylinder, so a broad enemy is reached as early as a narrow one.
int in_reach(CGabriella *gabriella, CCharacter *target)
{
    CVector3f local;
    float radius;
    float distance;

    if (is_kickable(target) == 0) {
        return 0;
    }
    radius = target->collision_cylinder_radius;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
        ((CDemonActor *)gabriella, &local, &(target->base).location.position);
    if ((local.z <= 0.0f) || (std::fabs(local.x) > local.z + radius) ||
        (std::fabs(local.y) > kKickHeightBand)) {
        return 0;
    }
    distance = std::sqrt(local.x * local.x + local.z * local.z) - radius;
    return distance <= kKickReach;
}

int enemy_in_reach(CGabriella *gabriella)
{
    int i;

    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        if (in_reach(gabriella, g_CDemonSetPtr->characters[i]) != 0) {
            return 1;
        }
    }
    return 0;
}

// Asks for the kick if she stands and an enemy is in reach.
int try_start_kick(CGabriella *gabriella)
{
    CHero *hero = &gabriella->base;

    if (((hero->base).is_on_ground == 0) || ((hero->base).grabbed_by != (CDemonActor *)0x0)) {
        return 0;
    }
    if ((current_state(gabriella) != kStand) || (enemy_in_reach(gabriella) == 0)) {
        return 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
        (&(hero->base).model.motion_controller, (int)kKickDoor, 1);
    return 1;
}

void start_shove(CGabriella *gabriella, CCharacter *target)
{
    CVector3f *from = &(gabriella->base).base.base.location.position;
    CVector3f *to   = &(target->base).location.position;
    float dx = to->x - from->x;
    float dz = to->z - from->z;
    float length = std::sqrt(dx * dx + dz * dz);
    int i;

    if (length <= 0.0f) {
        return;
    }
    for (i = 0; i < SHOVE_COUNT; i++) {
        SShove *shove = &s_shoves[i];

        // A slot is free once finished, or once its owner is no longer a
        // player hero (a mission ended under it).
        if ((shove->target == (CCharacter *)0x0) || (kShoveSeconds <= shove->elapsed) ||
            (is_player_hero((CDemonActor *)shove->owner) == 0)) {
            shove->owner   = gabriella;
            shove->target  = target;
            shove->dir_x   = dx / length;
            shove->dir_z   = dz / length;
            shove->elapsed = 0.0f;
            return;
        }
    }
}

// Eased out: fast at the hit, slowing to a stop.
float shove_progress(float elapsed)
{
    float t = elapsed / kShoveSeconds;

    if (t >= 1.0f) {
        return 1.0f;
    }
    return 1.0f - (1.0f - t) * (1.0f - t);
}

void step_shoves(CGabriella *gabriella, float delta_time)
{
    int i;

    for (i = 0; i < SHOVE_COUNT; i++) {
        SShove *shove = &s_shoves[i];
        CVector3f world_delta;
        CVector3f local_delta;
        float step;

        if ((shove->owner != gabriella) || (shove->target == (CCharacter *)0x0) ||
            (kShoveSeconds <= shove->elapsed)) {
            continue;
        }
        // The target may have been deleted since the hit.
        if ((in_set(shove->target) == 0) ||
            ((shove->target->base).lifecycle_state != ACTOR_CREATED)) {
            shove->target = (CCharacter *)0x0;
            continue;
        }
        step = shove_progress(shove->elapsed + delta_time) - shove_progress(shove->elapsed);
        shove->elapsed = shove->elapsed + delta_time;

        world_delta.x = shove->dir_x * kShoveDistance * step;
        world_delta.y = 0.0f;
        world_delta.z = shove->dir_z * kShoveDistance * step;
        // moveAndCollide takes the step in the actor's own frame.
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&shove->target->base, &local_delta, &world_delta);
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(shove->target, &local_delta);
    }
}

void land_kick(CGabriella *gabriella)
{
    CDeformableModelInstance *model = &(gabriella->base).base.model;
    CSkeleton *skeleton;
    int bone_index;
    CVector3f local_point;
    CVector3f foot;
    CVector3f *bone_point;
    SDamageInfo damage;
    float amount;
    int i;

    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(model);
    bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                     (skeleton, (char *)"Bip01 L Foot", 1);
    if (bone_index < 0) {
        return;
    }
    bone_point = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0059fb00
                     (model, &local_point, bone_index);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
        ((CDemonActor *)gabriella, &foot, bone_point);

    // One draw per kick, from the simulation stream.
    amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(kKickMinDamage, kKickMaxDamage);
    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        CCharacter *target = g_CDemonSetPtr->characters[i];

        if (in_reach(gabriella, target) == 0) {
            continue;
        }
        // Her grab-escape kick's damage record (signal 6 in processMotionEvents):
        // the foot as the impact point, seen from the target.
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&damage);
        damage.damage_amount = amount;
        damage.damage_type   = DAMAGE_TYPE_MELEE;
        damage.impact_point  = foot;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&target->base, &damage.impact_direction, &foot);
        damage.attacker      = (CDemonActor *)gabriella;
        damage.wielder       = (CDemonActor *)gabriella;
        (*(((target->base).vtable._uc)->_uc).processDamage)(target, &damage);
        if (damage.damage_amount <= 0.0f) {
            continue;
        }
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
            (g_CGorePtr, &foot, (CVector3f *)0x0, (int)(damage.damage_amount * 0.2f) + 1, 0);
        (*(((CDemonActor *)gabriella)->vtable._ub)->playSound)
            ((CDemonActor *)gabriella, (char *)"kick1.wav");
        start_shove(gabriella, target);
    }
}

// Whether the kick crossed its hit frame during the advance that just ran.
int kick_crossed(CGabriella *gabriella, uint prev_state, float prev_frame)
{
    CMotionController *controller = &(gabriella->base).base.model.motion_controller;
    float frame;

    if (current_state(gabriella) != kKickDoor) {
        return 0;
    }
    frame = controller->current_frame_number;
    if ((prev_state != kKickDoor) || (frame < prev_frame)) {
        return kKickHitFrame <= frame;      // the motion started this frame
    }
    return (prev_frame < kKickHitFrame) && (kKickHitFrame <= frame);
}

float motion_rate(CGabriella *gabriella)
{
    uint current;

    // tween_progress is negative when no crossfade is running.
    if (0.0f <= (gabriella->base).base.model.motion_controller.tween_progress) {
        return 1.0f;
    }
    current = current_state(gabriella);
    if ((current == kStrafeL) || (current == kStrafeR)) {
        return NOCTURNE_GABRIELLA_STRAFE_RATE;
    }
    return 1.0f;
}

} // namespace

extern "C" int nocturne_hero_gabriella_pickup(CGabriella *gabriella)
{
    CHero *hero;

    if (gabriella == (CGabriella *)0x0) {
        return 0;
    }
    hero = &gabriella->base;
    if (((hero->base).is_on_ground == 0) || ((hero->base).grabbed_by != (CDemonActor *)0x0)) {
        return 0;
    }
    // From any state but STAND the request is never taken, after
    // findAndPickupNearbyObject has already snapped her onto the object.
    if (current_state(gabriella) != kStand) {
        return 0;
    }
    if (core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870(gabriella) == 0) {
        return 0;
    }
    use_press(gabriella, hero_slot((CDemonActor *)gabriella));
    return 1;
}

extern "C" int nocturne_hero_gabriella_strafe_state(CGabriella *gabriella, int chosen_state)
{
    float strafe_speed;
    uint  wanted;
    uint  current;

    if ((gabriella == (CGabriella *)0x0) || (chosen_state != 0)) {
        return chosen_state;
    }
    strafe_speed = (gabriella->base).player_input.strafe_speed;
    if (strafe_speed < -0.01f) {
        wanted = kStrafeL;
    }
    else if (0.01f < strafe_speed) {
        wanted = kStrafeR;
    }
    else {
        return chosen_state;
    }
    current = current_state(gabriella);
    if ((current != kStand) && (current != kWalk) && (current != wanted)) {
        return (int)kStand;
    }
    return (int)wanted;
}

extern "C" int nocturne_hero_gabriella_kick(CGabriella *gabriella)
{
    int slot;

    if ((gabriella == (CGabriella *)0x0) || (enemy_in_reach(gabriella) == 0)) {
        return 0;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    if (try_start_kick(gabriella) != 0) {
        if (slot >= 0) {
            s_kick_buffer[slot] = 0.0f;
        }
    }
    else if (slot >= 0) {
        // Not standing yet: hold the press until she is.
        s_kick_buffer[slot] = kKickBufferSeconds;
    }
    else {
        return 0;
    }
    use_press(gabriella, slot);
    return 1;
}

extern "C" void nocturne_hero_gabriella_process_motion(CGabriella *gabriella, float delta_time)
{
    CMotionController *controller;
    uint  prev_state;
    float prev_frame;
    int   slot;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    controller = &(gabriella->base).base.model.motion_controller;
    slot = hero_slot((CDemonActor *)gabriella);
    filter_press(gabriella, slot);
    prev_state = current_state(gabriella);
    prev_frame = controller->current_frame_number;

    core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890
        (gabriella, delta_time * motion_rate(gabriella));

    if (kick_crossed(gabriella, prev_state, prev_frame) != 0) {
        land_kick(gabriella);
    }
    step_shoves(gabriella, delta_time);

    // A buffered press fires once she stands, if her weapon is still away.
    if ((slot >= 0) && (0.0f < s_kick_buffer[slot])) {
        s_kick_buffer[slot] = s_kick_buffer[slot] - delta_time;
        if ((gabriella->weapon_state_flags == 0) && (gabriella->draw_blend <= 0.0f) &&
            (try_start_kick(gabriella) != 0)) {
            s_kick_buffer[slot] = 0.0f;
        }
    }
}
