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
const uint kStand     = 0x00;
const uint kWalk      = 0x01;
const uint kTurnLeft  = 0x10;
const uint kTurnRight = 0x11;
const uint kKickDoor  = 0x13;
const uint kStrafeL   = 0x14;
const uint kStrafeR   = 0x15;
const uint kLadder    = 0x16;

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
// CGun branch: the orientation that points her right arm along (pitch, yaw).
void right_arm_rotation(float pitch, float yaw, CQuaternion4f *arm)
{
    CQuaternion4f turn_z;
    CQuaternion4f turn_y;
    CQuaternion4f arm_out;
    CQuaternion4f aim;
    CVector3f euler;

    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(-1.5707964f, &turn_z);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-1.5707964f, &turn_y);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&turn_y, &turn_z, &arm_out);
    euler.x = pitch;
    euler.y = yaw;
    euler.z = 0.0f;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&euler, &aim);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&arm_out, &aim, arm);
}

// Turns `bone` and the bones below it to `arm`, down the arm by
// weaponDrawBlendWeightCallback.
void blend_arm(CGabriella *gabriella, CQuaternion4f *arm, float weight, int bone)
{
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
        (&(gabriella->base).base.model, arm, weight, bone,
         core_gabriela_cpp_weaponDrawBlendWeightCallback_FUN_004d29f0);
}

// The right arm pointed along the throw's pitch and her aim's yaw.
void point_throwing_arm(CGabriella *gabriella, float pitch, float weight)
{
    CQuaternion4f arm;

    right_arm_rotation(pitch, clamp(gabriella->aim_yaw, -1.7453293f, 1.7453293f), &arm);
    blend_arm(gabriella, &arm, weight, g_GabriellaIndices[4]);
}

// The left arm pointed along `pitch`, straight ahead: the right arm's
// orientation reflected through her centre plane.
void point_left_arm(CGabriella *gabriella, float pitch, float weight)
{
    CQuaternion4f arm;

    right_arm_rotation(pitch, 0.0f, &arm);
    arm.y = -arm.y;
    arm.z = -arm.z;
    blend_arm(gabriella, &arm, weight, g_GabriellaIndices[3]);
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
// Weapon switch
// =============================================================================

namespace {

// draw_blend at which a switch swaps weapons: her hand is at her hip, where the
// weapon is placed below kWeaponAtHip, and it is under the 0.49 at which
// CGabriella::process plays the draw sound, so the draw back up plays it.
const float kSwitchAt = 0.45f;

struct SSwitch {
    CWeapon *in_hand;   // the weapon her own code works with
    CWeapon *chosen;    // the inventory's selection, kept while in_hand stands in
    int      held;      // in_hand is standing in for the selection
    int      switching;
    int      redraw;    // she was drawn when the switch began
};

SSwitch s_switch[4];

// Her switch, or null for a Gabriella who is not a player hero, who swaps at
// once as she always did.
SSwitch *switch_state(CGabriella *gabriella)
{
    int slot = hero_slot((CDemonActor *)gabriella);

    return (slot < 0) ? (SSwitch *)0x0 : &s_switch[slot];
}

// By pointer only: `weapon` may be stale from an earlier mission.
int in_inventory(CGabriella *gabriella, CWeapon *weapon)
{
    CInventory *inventory = &(gabriella->base).inventory;
    int i;

    if (weapon == (CWeapon *)0x0) {
        return 0;
    }
    for (i = 0; i < inventory->item_count; i++) {
        if (inventory->items[i] == &weapon->base) {
            return 1;
        }
    }
    return 0;
}

} // namespace

extern "C" void nocturne_hero_gabriella_hold_weapon(CGabriella *gabriella)
{
    SSwitch *s;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    s = switch_state(gabriella);
    if ((s == (SSwitch *)0x0) || (s->held != 0)) {
        return;
    }
    s->chosen = (gabriella->base).inventory.selected_weapon;
    if ((s->in_hand != s->chosen) && (in_inventory(gabriella, s->in_hand) != 0)) {
        (gabriella->base).inventory.selected_weapon = s->in_hand;
        s->held = 1;
    }
}

extern "C" void nocturne_hero_gabriella_release_weapon(CGabriella *gabriella)
{
    SSwitch *s;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    s = switch_state(gabriella);
    if ((s == (SSwitch *)0x0) || (s->held == 0)) {
        return;
    }
    (gabriella->base).inventory.selected_weapon = s->chosen;
    s->held = 0;
}

extern "C" void nocturne_hero_gabriella_switch_weapon(CGabriella *gabriella)
{
    SSwitch *s;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    s = switch_state(gabriella);
    if (s == (SSwitch *)0x0) {
        return;
    }
    if (s->in_hand == s->chosen) {
        s->switching = 0;
        return;
    }
    if ((in_inventory(gabriella, s->in_hand) == 0) || (gabriella->draw_blend <= kSwitchAt)) {
        // Nothing in hand to put away, or her hand is at her hip: take the
        // new weapon, and draw it if she was drawn.
        s->in_hand = s->chosen;
        (gabriella->base).inventory.selected_weapon = s->chosen;
        s->held = 0;
        if ((s->switching != 0) && (s->redraw != 0)) {
            gabriella->weapon_state_flags = gabriella->weapon_state_flags | 2;
        }
        s->switching = 0;
        return;
    }
    if (s->switching == 0) {
        s->switching = 1;
        s->redraw = (gabriella->weapon_state_flags & 2) != 0;
    }
    // Holster the weapon in hand, as her draw button does.
    gabriella->weapon_state_flags = gabriella->weapon_state_flags & ~3;
}

// =============================================================================
// Firing
// =============================================================================

namespace {

// CWeapon::fire_mode of a pump or break action: the shotgun and elephant gun.
const int kFirePump = 2;

// The Stranger's pump-action shot plays draw_shotGunRecoil, which he cannot
// fire through, and ejects the shell at 0.6 of it (the elephant gun's only
// under NOCTURNE_AUTHENTIC_ELEPHANT_GUN_SHELL 0). Hers waits as long, without
// the motion. Tune in play.
const float kPumpSeconds = 0.8f;
const float kPumpShellAt = 0.6f;

struct SPump {
    CWeapon *weapon;    // the weapon being pumped
    float    elapsed;   // seconds since the shot; kPumpSeconds or more is done
    int      ejected;
};

SPump s_pump[4];

SPump *pump_state(CGabriella *gabriella)
{
    int slot = hero_slot((CDemonActor *)gabriella);

    return (slot < 0) ? (SPump *)0x0 : &s_pump[slot];
}

} // namespace

extern "C" void nocturne_hero_gabriella_fired(CGabriella *gabriella)
{
    CWeapon *weapon;
    SPump *p;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    weapon = (gabriella->base).inventory.selected_weapon;
    p = pump_state(gabriella);
    if ((p == (SPump *)0x0) || (weapon == (CWeapon *)0x0) || (weapon->fire_mode != kFirePump)) {
        return;
    }
    p->weapon = weapon;
    p->elapsed = 0.0f;
    p->ejected = 0;
    // Her long-gun recoil, which tryFireWeapon gives only a fire_mode 1 shot.
    gabriella->fire_cooldown_timer = 1.0f;
}

extern "C" int nocturne_hero_gabriella_keep_pending_shot(CGabriella *gabriella)
{
    CWeapon *weapon;

    if ((gabriella == (CGabriella *)0x0) || (hero_slot((CDemonActor *)gabriella) < 0)) {
        return 1;
    }
    weapon = (gabriella->base).inventory.selected_weapon;
    if ((weapon == (CWeapon *)0x0) ||
        (core_actor_cpp_castToClassHash_FUN_0040c790(&weapon->base, g_CDynamiteClassInfo.name_hash)
         != (CDemonActor *)0x0)) {
        return 1;
    }
    // Waiting on her draw or aim, the shot is kept, as it always was. Waiting on
    // the weapon's own refire, it is dropped: the Stranger fires only on a frame
    // the weapon is ready and fire is held, so a press that ends before then
    // fires nothing, and one still held fires as soon as the weapon is ready.
    return (*(((weapon->base).vtable._uw)->_uw).isReadyToFire)(weapon) != 0;
}

extern "C" int nocturne_hero_gabriella_pumping(CGabriella *gabriella)
{
    const SPump *p;

    if (gabriella == (CGabriella *)0x0) {
        return 0;
    }
    p = pump_state(gabriella);
    return (p != (SPump *)0x0) && (p->weapon != (CWeapon *)0x0) &&
           (p->weapon == (gabriella->base).inventory.selected_weapon);
}

extern "C" void nocturne_hero_gabriella_fire_tick(CGabriella *gabriella, float delta_time)
{
    SPump *p;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    p = pump_state(gabriella);
    if ((p == (SPump *)0x0) || (p->weapon == (CWeapon *)0x0)) {
        return;
    }
    // A switch away abandons the pump.
    if (p->weapon != (gabriella->base).inventory.selected_weapon) {
        p->weapon = (CWeapon *)0x0;
        return;
    }
    p->elapsed = p->elapsed + delta_time;
    if ((p->ejected == 0) && (kPumpSeconds * kPumpShellAt <= p->elapsed)) {
        // As CStranger::updateWeaponLayerActions does.
        p->ejected = 1;
        if (nocturne_weapon_ejects_shell(p->weapon) != 0) {
            (*(((p->weapon->base).vtable._uw)->_uw).onFired)(p->weapon);
        }
    }
    if (kPumpSeconds <= p->elapsed) {
        p->weapon = (CWeapon *)0x0;
    }
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
// once used reads as released, and so does one held through a draw or a
// holster: action and fire share the button, and the held press would
// otherwise shoot the moment the draw completes, or act once the weapon is
// away. Nor may a press light a stick she does not have in hand yet.
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
    if ((gabriella->weapon_state_flags == 0) &&
        ((input->action_state.draw != 0) || (0.0f < gabriella->draw_blend))) {
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
// Carried objects
// =============================================================================

namespace {

const uint kPickupCarry = 0x04;
const uint kPutDown     = 0x05;

// CStranger::tryThrowDynamite and updateWeaponLayerActions: the throw's speed
// starts at 10 and rises at 25 a second to 70 while the button is held.
const float kCarryThrowStart = 10.0f;
const float kCarryThrowRate  = 25.0f;
const float kCarryThrowMax   = 70.0f;

// A put-down pressed while she moves waits this long for her to stand.
const float kPutDownBufferSeconds = 0.5f;

struct SCarryThrow {
    int    charging;
    float  power;
    float  target_pitch;    // the look-driven aim
    float  pitch;           // eases after it; the throw goes along this
    SThrow arm;             // the left arm's wind-up and swing
};

// Per hero slot.
SCarryThrow s_carry_throw[4];
float       s_put_down_buffer[4];

// What her left hand carries that she may let go of: anything but her flashlight.
CDemonActor *carried_object(CGabriella *gabriella)
{
    CDemonActor *carried = (gabriella->base).base.carry_hands[0].carry_actor;

    if ((carried == (CDemonActor *)0x0) ||
        (core_actor_cpp_castToClassHash_FUN_0040c790(carried, g_CLightActorClassInfo.name_hash) !=
         (void *)0x0)) {
        return (CDemonActor *)0x0;
    }
    return carried;
}

int is_throwable(CDemonActor *object)
{
    return ((*((object->vtable)._ub)->getAllowedMeleeAttackTypes)(object) & 4) != 0;
}

int can_act(CGabriella *gabriella)
{
    const CCharacter *self = &(gabriella->base).base;

    return (self->grabbed_by == (CDemonActor *)0x0) && (0.0f < self->hit_points);
}

// CStranger::tryPlaceObject's free-floor test, from the object in her hand:
// nothing within 1.5 units ahead of it, ground there within 1 unit of her
// feet, and no crate within 2.
int floor_takes(CGabriella *gabriella, CDemonActor *object)
{
    CDemonActor *self = (CDemonActor *)gabriella;
    CVector3f unit;
    CVector3f ahead;
    CVector3f step;
    CVector3f probe;
    float x;
    float z;
    float feet;
    float ground;
    float dx;
    float dy;
    float dz;
    int i;

    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, self);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, object);
    unit.x = 0.0f;
    unit.y = 0.0f;
    unit.z = 1.0f;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(self, &ahead, &unit);
    x = (object->location).position.x + ahead.x;
    z = (object->location).position.z + ahead.z;
    feet = (self->location).position.y;
    unit.z = 1.5f;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(self, &step, &unit);
    if (core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
            (g_CDemonSetPtr, x, z, step.x, step.z, 1.0f, 0.1f, 3.0f) < 1.0f) {
        core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
        return 0;
    }
    probe.x = x + step.x;
    probe.y = feet + step.y;
    probe.z = z + step.z;
    ground = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                 (g_CDemonSetPtr, &probe, 0.5f);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    if (1.0f < std::fabs(ground - feet)) {
        return 0;
    }
    for (i = 0; i < g_CDemonSetPtr->actor_count; i++) {
        CDemonActor *crate = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c790
            (g_CDemonSetPtr->actors[i], g_CCrateClassInfo.name_hash);

        if (crate == (CDemonActor *)0x0) {
            continue;
        }
        dx = (crate->location).position.x - x;
        dy = (crate->location).position.y - feet;
        dz = (crate->location).position.z - z;
        if (std::sqrt(dx * dx + dy * dy + dz * dz) < 2.0f) {
            return 0;
        }
    }
    return 1;
}

// Asks for PUTDOWN if she stands on the ground and the floor takes what she carries.
int try_start_put_down(CGabriella *gabriella)
{
    CDemonActor *object = carried_object(gabriella);

    if ((object == (CDemonActor *)0x0) || ((gabriella->base).base.is_on_ground == 0) ||
        (can_act(gabriella) == 0) || (current_state(gabriella) != kStand) ||
        (floor_takes(gabriella, object) == 0)) {
        return 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
        (&(gabriella->base).base.model.motion_controller, (int)kPutDown, 1);
    return 1;
}

SCarryThrow *carry_throw_state(CGabriella *gabriella)
{
    int slot = hero_slot((CDemonActor *)gabriella);

    return (slot < 0) ? (SCarryThrow *)0x0 : &s_carry_throw[slot];
}

// CStranger::getThrowDirection, with her throw's pitch and speed, in her
// local space.
void carry_throw_direction(const SCarryThrow *t, CVector3f *direction)
{
    CMatrix3x3f rotation;
    CVector3f euler;
    CVector3f speed;

    euler.x = t->pitch;
    euler.y = 0.0f;
    euler.z = 0.0f;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&rotation, &euler);
    speed.x = 0.0f;
    speed.y = 0.0f;
    speed.z = t->power;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&rotation, direction, &speed);
}

// dropCarriedObject takes the direction in her local space.
void release_carried(CGabriella *gabriella, const SCarryThrow *t)
{
    CVector3f direction;

    if (carried_object(gabriella) == (CDemonActor *)0x0) {
        return;
    }
    carry_throw_direction(t, &direction);
    (*((((gabriella->base).base.base.vtable._uc)->_uc).dropCarriedObject))
        ((CCharacter *)gabriella, 0, &direction);
}

// One frame of a carried throw: the charge while the button is held, then the
// swing, which lets go of the object as the arm passes kReleasePitch.
void step_carry_throw(CGabriella *gabriella, SCarryThrow *t, float delta_time)
{
    const SPlayerInput *input = &(gabriella->base).player_input;
    SThrow *arm = &t->arm;
    float step;

    if (t->charging != 0) {
        if ((carried_object(gabriella) == (CDemonActor *)0x0) || (can_act(gabriella) == 0)) {
            t->charging = 0;
        }
        else if (input->action_state.fire != 0) {
            t->power = t->power + kCarryThrowRate * delta_time;
            if (kCarryThrowMax < t->power) {
                t->power = kCarryThrowMax;
            }
            arm->windup = clamp01(arm->windup + kWindupRate * delta_time);
        }
        else {
            t->charging = 0;
            arm->swinging = 1;
            arm->swing_t = 0.0f;
            arm->swing_from = arm->windup;
            arm->released = 0;
            arm->windup = 0.0f;
        }
    }
    else if (arm->swinging == 0) {
        arm->windup = clamp01(arm->windup - kWindupRate * delta_time);
    }

    if ((t->charging != 0) || (arm->swinging != 0)) {
        // nocturne_hero_gabriella_dynamite_aim's look-driven pitch.
        t->target_pitch = clamp(input->look_up_down_speed * 3.1415927f * 2.0f * delta_time +
                                    t->target_pitch,
                                kThrowAimUp, kThrowAimDown);
        step = delta_time * kThrowAimRate;
        t->pitch = approach(t->pitch, t->target_pitch, step);
    }

    if (arm->swinging != 0) {
        arm->swing_t = arm->swing_t + delta_time;
        if ((arm->released == 0) && (kReleasePitch <= swing_pitch(arm))) {
            arm->released = 1;
            if (can_act(gabriella) != 0) {
                release_carried(gabriella, t);
            }
        }
        if (kSwingSeconds <= arm->swing_t) {
            arm->swinging = 0;
        }
    }
}

} // namespace

extern "C" int nocturne_hero_gabriella_throw_carried(CGabriella *gabriella)
{
    SCarryThrow *t;
    CDemonActor *object;
    uint state;

    if (gabriella == (CGabriella *)0x0) {
        return 0;
    }
    t = carry_throw_state(gabriella);
    if (t == (SCarryThrow *)0x0) {
        return 0;
    }
    if ((t->charging != 0) || ((t->arm.swinging != 0) && (t->arm.released == 0))) {
        return 1;
    }
    object = carried_object(gabriella);
    if ((object == (CDemonActor *)0x0) || (is_throwable(object) == 0) || (can_act(gabriella) == 0)) {
        return 0;
    }
    // Not while the pickup or put-down is still under way.
    state = current_state(gabriella);
    if ((state == kPickupCarry) || (state == kPutDown)) {
        return 0;
    }
    t->charging = 1;
    t->power = kCarryThrowStart;
    t->target_pitch = 0.0f;
    t->pitch = 0.0f;
    t->arm.swinging = 0;
    t->arm.released = 0;
    return 1;
}

extern "C" void nocturne_hero_gabriella_render_carry_arc(CGabriella *gabriella)
{
    const SCarryThrow *t;
    CDemonActor *object;
    CVector3f *start_pos;
    CVector3f local;
    CVector3f velocity;
    float hit_time;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    t = carry_throw_state(gabriella);
    object = carried_object(gabriella);
    // CStranger::renderOpaque draws it once his arm is fully in the toss pose.
    if ((t == (const SCarryThrow *)0x0) || (t->charging == 0) || (t->arm.windup <= 0.99f) ||
        (object == (CDemonActor *)0x0)) {
        return;
    }
    start_pos = &(object->location).position;
    carry_throw_direction(t, &local);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
        ((CDemonActor *)gabriella, &velocity, &local);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr, 1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, (CDemonActor *)gabriella);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr, object);
    hit_time = core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800
                   (g_CDemonSetPtr, start_pos, &velocity);
    if (hit_time < 0.0f) {
        hit_time = 10.0f;
    }
    core_fire_cpp_CFireEffect_createLaserPath_FUN_004c7f80
        (g_CFireEffectPtr, start_pos, &velocity, 1.0f, 1.0f,
         &g_CDemonSetPtr->collision_normal, hit_time, 0xff, 0, 0);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
}

extern "C" int nocturne_hero_gabriella_put_down(CGabriella *gabriella)
{
    CDemonActor *object;
    int slot;

    if (gabriella == (CGabriella *)0x0) {
        return 0;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    object = carried_object(gabriella);
    if ((slot < 0) || (object == (CDemonActor *)0x0)) {
        return 0;
    }
    if (try_start_put_down(gabriella) != 0) {
        s_put_down_buffer[slot] = 0.0f;
    }
    else if (((gabriella->base).base.is_on_ground != 0) && (can_act(gabriella) != 0) &&
             (current_state(gabriella) != kPutDown) && (floor_takes(gabriella, object) != 0)) {
        // Not standing yet: hold the press until she is.
        s_put_down_buffer[slot] = kPutDownBufferSeconds;
    }
    else {
        return 0;
    }
    use_press(gabriella, slot);
    return 1;
}

extern "C" void nocturne_hero_gabriella_use_item(CGabriella *gabriella)
{
    CHero *hero;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    hero = &gabriella->base;
    if ((hero->player_input).action_state.use_item == 0) {
        return;
    }
    if (hero_slot((CDemonActor *)gabriella) < 0) {
        if (core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870(gabriella) == 0) {
            core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004d6050(gabriella);
        }
        return;
    }
    if (can_act(gabriella) != 0) {
        core_hero_cpp_CHero_tryUseSelectedItem_FUN_004f3760(hero);
    }
}

// =============================================================================
// Gas mask
// =============================================================================

namespace {

// How long her hand takes to reach her face, and to come back down.
const float kMaskRaiseSeconds = 0.5f;
const float kMaskLowerSeconds = 0.4f;

// The reach, in right_arm_rotation's angles: the upper arm down and across her
// body, the forearm folded up to her face. Values to tune in play.
const float kMaskUpperPitch   = 0.9f;
const float kMaskUpperYaw     = 0.7f;
const float kMaskForearmPitch = -1.3f;
const float kMaskForearmYaw   = 1.4f;

// The mask's placement on her head and in her right hand, as
// CStranger::renderOpaque places his: a position and euler angles in the
// bone's frame. His values, except that on her smaller head the mask sits
// kMaskOnHeadScale of his distance from the head bone.
const float kMaskOnHeadScale = 0.8f;
const CVector3f kMaskOnHeadPosition  = { 0.00604827f * kMaskOnHeadScale,
                                         0.283614f * kMaskOnHeadScale,
                                         0.537644f * kMaskOnHeadScale };
const CVector3f kMaskOnHeadAngles    = { -0.140457f, -3.0786f, 0.0f };
const CVector3f kMaskInHandPosition  = { 0.512623f, -0.0202601f, 0.130713f };
const CVector3f kMaskInHandAngles    = { 1.16195f, 0.368073f, 0.0489636f };

struct SMaskArm {
    float reach;    // 0 at her side, 1 at her face
    int   moving;
    int   raising;
};

// Per hero slot.
SMaskArm s_mask_arm[4];

// The inventory's gas mask: CInventory::select stores it in light_gun_ptr.
CGasMask *inventory_mask(CGabriella *gabriella)
{
    return (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c790
        ((CDemonActor *)(gabriella->base).inventory.light_gun_ptr, g_CGasMaskClassInfo.name_hash);
}

// CInventory::select's toggle, which CGasMask keeps in `carrier`.
int mask_wanted(CGabriella *gabriella)
{
    CGasMask *mask = inventory_mask(gabriella);

    return (mask != (CGasMask *)0x0) && (mask->carrier != (CDemonActor *)0x0);
}

} // namespace

extern "C" void nocturne_hero_gabriella_mask_tick(CGabriella *gabriella, float delta_time)
{
    SMaskArm *m;
    int *wearing;
    int wanted;
    int slot;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    if (slot < 0) {
        return;
    }
    m = &s_mask_arm[slot];
    wearing = &(gabriella->base).is_wearing_gas_mask;
    wanted = mask_wanted(gabriella);

    if (m->moving == 0) {
        // The arm waits for her weapon to be away entirely.
        if ((((wanted != 0) && (*wearing != 2)) || ((wanted == 0) && (*wearing != 0))) &&
            (gabriella->weapon_state_flags == 0) && (gabriella->draw_blend <= 0.0f)) {
            m->moving = 1;
            m->raising = 1;
            if ((*wearing == 0) && (wanted != 0)) {
                *wearing = 1;
            }
        }
    }
    else if (m->raising != 0) {
        m->reach = m->reach + delta_time / kMaskRaiseSeconds;
        if (1.0f <= m->reach) {
            m->reach = 1.0f;
            m->raising = 0;
            *wearing = (wanted != 0) ? 2 : 1;
        }
    }
    else {
        m->reach = m->reach - delta_time / kMaskLowerSeconds;
        if (m->reach <= 0.0f) {
            m->reach = 0.0f;
            m->moving = 0;
            if (*wearing < 2) {
                *wearing = (wanted != 0) ? 1 : 0;
            }
        }
    }
    if (m->moving != 0) {
        (gabriella->base).player_input.action_state.draw = 0;
    }
}

extern "C" void nocturne_hero_gabriella_pose_arms(CGabriella *gabriella)
{
    const SCarryThrow *t;
    const SMaskArm *m;
    CQuaternion4f arm;
    float weight;
    int slot;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    if (slot < 0) {
        return;
    }
    t = &s_carry_throw[slot];
    if (t->arm.swinging != 0) {
        point_left_arm(gabriella, swing_pitch(&t->arm), swing_weight(&t->arm));
    }
    else if (0.0f < t->arm.windup) {
        point_left_arm(gabriella, kWindupPitch, t->arm.windup);
    }

    m = &s_mask_arm[slot];
    if (m->reach <= 0.0f) {
        return;
    }
    weight = smoothstep01(m->reach);
    right_arm_rotation(kMaskUpperPitch, kMaskUpperYaw, &arm);
    blend_arm(gabriella, &arm, weight, g_GabriellaIndices[4]);
    right_arm_rotation(kMaskForearmPitch, kMaskForearmYaw, &arm);
    blend_arm(gabriella, &arm, weight, g_GabriellaIndices[6]);
}

extern "C" void nocturne_hero_gabriella_render_mask(CGabriella *gabriella)
{
    CDemonActor *self = (CDemonActor *)gabriella;
    CGasMask *mask;
    CVector3f position;
    CVector3f angles;
    CMatrix3x4f offset;
    CMatrix3x4f placed;
    int wearing;
    int bone;

    if (gabriella == (CGabriella *)0x0) {
        return;
    }
    wearing = (gabriella->base).is_wearing_gas_mask;
    mask = inventory_mask(gabriella);
    if ((wearing == 0) || (mask == (CGasMask *)0x0)) {
        return;
    }
    if (wearing == 2) {
        position = kMaskOnHeadPosition;
        angles = kMaskOnHeadAngles;
        bone = g_GabriellaIndices[0];
    }
    else {
        position = kMaskInHandPosition;
        angles = kMaskInHandAngles;
        bone = g_GabriellaIndices[0x11];
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(self);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&offset, &position, &angles);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
        (&offset, &(gabriella->base).base.model.bone_transform.bone_model_matrices[bone], &placed);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&placed, &angles);
    core_xform_cpp_getTranslation_FUN_005f6110(&placed, &position);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
        (g_CDemonRendererPtr2, &angles, &position);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
        (&mask->model, 0.0f, -1);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(self);
}

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
    if (current == kLadder) {
        return NOCTURNE_GABRIELLA_LADDER_RATE;
    }
    if ((current == kTurnLeft) || (current == kTurnRight)) {
        return NOCTURNE_GABRIELLA_TURN_RATE;
    }
    return 1.0f;
}

} // namespace

// =============================================================================
// Ladder
// =============================================================================

namespace {

// Which ladders she can take: CStranger::tryClimbLadder's window, with her own
// height band and either face of the ladder, as CGabriella::tryClimbLadder
// allows. Within kLadderReach of its plane, no more than kLadderSideSlack past
// either side of its bounding box, facing along its axis within 15 degrees and
// toward it.
const float kLadderHeightBand = 5.0f;
const float kLadderReach      = 4.0f;
const float kLadderSideSlack  = 1.0f;
const float kLadderFacingCos  = 0.96592582629f;    // cos 15 degrees

// Where she climbs from, in the ladder's frame: CGabriella::tryClimbLadder's
// (0, 0, +-2). She is eased there and turned to face the ladder over this long
// rather than snapped.
const float kLadderStandOff      = 2.0f;
const float kLadderBlendSeconds  = 0.5f;

// A press made while she settles into STAND waits this long for her.
const float kClimbBufferSeconds = 0.5f;

struct SLadderBlend {
    CVector3f offset;       // world distance still to cover
    float     facing;       // yaw to reach
    float     remaining;    // seconds; 0 when done
};

// Per hero slot.
SLadderBlend s_ladder_blend[4];
float        s_climb_buffer[4];

// The first ladder she may take, and which face of it she is on (1 in front,
// -1 behind).
CLadder *find_ladder(CGabriella *gabriella, float *side)
{
    CVector3f       *position = &(gabriella->base).base.base.location.position;
    CMatrix3x3f     *orient = &(gabriella->base).base.base.orient_matrix;
    CBoundingBox3D   box;
    CVector3f        local;
    CVector3f        ahead;
    CLadder         *ladder;
    float            facing_dot;
    int              i;

    for (i = 0; i < g_CDemonSetPtr->actor_count; i++) {
        ladder = (CLadder *)core_actor_cpp_castToClassHash_FUN_0040c790
                     (g_CDemonSetPtr->actors[i], g_CLadderClassInfo.name_hash);
        if (ladder == (CLadder *)0x0) {
            continue;
        }
        if (std::fabs(position->y - (ladder->base).location.position.y) > kLadderHeightBand) {
            continue;
        }
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&ladder->base, &local, position);
        if (std::fabs(local.z) > kLadderReach) {
            continue;
        }
        (*((ladder->base).vtable._ub)->getBoundingBox)(&ladder->base, &box);
        if ((local.x > box.max.x + kLadderSideSlack) ||
            (local.x < box.min.x - kLadderSideSlack)) {
            continue;
        }
        facing_dot = orient->m[0].z * (ladder->base).orient_matrix.m[0].z +
                     orient->m[1].z * (ladder->base).orient_matrix.m[1].z +
                     orient->m[2].z * (ladder->base).orient_matrix.m[2].z;
        if (std::fabs(facing_dot) < kLadderFacingCos) {
            continue;
        }
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)gabriella, &ahead, &(ladder->base).location.position);
        if (ahead.z <= 0.0f) {
            continue;
        }
        *side = (local.z < 0.0f) ? -1.0f : 1.0f;
        return ladder;
    }
    return (CLadder *)0x0;
}

// Puts her on `ladder`: CGabriella::tryClimbLadder's request and placement,
// with the placement eased by ladder_tick.
void start_climb(CGabriella *gabriella, int slot, CLadder *ladder, float side)
{
    CVector3f    *position = &(gabriella->base).base.base.location.position;
    SLadderBlend *blend = &s_ladder_blend[slot];
    CVector3f     stand_off;
    CVector3f     target;
    CVector3f     to_ladder;
    CVector3f     angles;

    (gabriella->base).ladder_to_climb = ladder;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
        (&(gabriella->base).base.model.motion_controller, (int)kLadder, 1);
    stand_off.x = 0.0f;
    stand_off.y = 0.0f;
    stand_off.z = kLadderStandOff * side;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&ladder->base, &target, &stand_off);
    to_ladder.x = (ladder->base).location.position.x - target.x;
    to_ladder.y = (ladder->base).location.position.y - target.y;
    to_ladder.z = (ladder->base).location.position.z - target.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&angles, &to_ladder);
    blend->offset.x = target.x - position->x;
    blend->offset.y = target.y - position->y;
    blend->offset.z = target.z - position->z;
    blend->facing = angles.y;
    blend->remaining = kLadderBlendSeconds;
}

// Starts the climb if she stands, on the ground and free, with her weapon away,
// by a ladder she may take.
int try_start_climb(CGabriella *gabriella, int slot)
{
    CHero   *hero = &gabriella->base;
    CLadder *ladder;
    float    side;

    if (((hero->base).is_on_ground == 0) || ((hero->base).grabbed_by != (CDemonActor *)0x0) ||
        (hero->ladder_to_climb != (CLadder *)0x0) || (current_state(gabriella) != kStand) ||
        (gabriella->weapon_state_flags != 0) || (0.0f < gabriella->draw_blend)) {
        return 0;
    }
    ladder = find_ladder(gabriella, &side);
    if (ladder == (CLadder *)0x0) {
        return 0;
    }
    start_climb(gabriella, slot, ladder, side);
    return 1;
}

// Whether LADDER is playing or being crossfaded into.
int on_ladder_motion(CGabriella *gabriella)
{
    CMotionController *controller = &(gabriella->base).base.model.motion_controller;

    if (0.0f < core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                   (controller, (int)kLadder)) {
        return 1;
    }
    return (controller->in_transition != (SMotionTransition *)0x0) &&
           (controller->in_transition->desired_state == (int)kLadder);
}

} // namespace

extern "C" int nocturne_hero_gabriella_climb(CGabriella *gabriella)
{
    float side;
    int   slot;

    if (gabriella == (CGabriella *)0x0) {
        return 0;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    if (slot < 0) {
        return core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004d5c60(gabriella);
    }
    if (try_start_climb(gabriella, slot) != 0) {
        s_climb_buffer[slot] = 0.0f;
    }
    else if (((gabriella->base).base.is_on_ground != 0) &&
             ((gabriella->base).ladder_to_climb == (CLadder *)0x0) &&
             (find_ladder(gabriella, &side) != (CLadder *)0x0)) {
        // Not standing yet: hold the press until she is.
        s_climb_buffer[slot] = kClimbBufferSeconds;
    }
    else {
        return 0;
    }
    use_press(gabriella, slot);
    return 1;
}

extern "C" int nocturne_hero_gabriella_ladder_tick(CGabriella *gabriella, float delta_time)
{
    SLadderBlend *blend;
    float         step;
    int           slot;

    if (gabriella == (CGabriella *)0x0) {
        return 1;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    if (on_ladder_motion(gabriella) == 0) {
        (gabriella->base).ladder_to_climb = (CLadder *)0x0;
        if (slot >= 0) {
            s_ladder_blend[slot].remaining = 0.0f;
        }
        return 0;
    }
    if ((slot < 0) || (s_ladder_blend[slot].remaining <= 0.0f)) {
        return 1;
    }
    // CStranger::processFrame's ladder ease: cover the share of what is left
    // that this frame is of the time left.
    blend = &s_ladder_blend[slot];
    if (blend->remaining <= delta_time) {
        step = 1.0f;
        blend->remaining = 0.0f;
    }
    else {
        step = delta_time / blend->remaining;
        blend->remaining = blend->remaining - delta_time;
    }
    (gabriella->base).base.base.location.position.x += blend->offset.x * step;
    (gabriella->base).base.base.location.position.y += blend->offset.y * step;
    (gabriella->base).base.base.location.position.z += blend->offset.z * step;
    blend->offset.x = blend->offset.x * (1.0f - step);
    blend->offset.y = blend->offset.y * (1.0f - step);
    blend->offset.z = blend->offset.z * (1.0f - step);
    (gabriella->base).base.turn_angle_accumulator =
        core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
            (blend->facing - (gabriella->base).base.base.orient.vec.y) * step;
    return 1;
}

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

extern "C" float nocturne_hero_gabriella_pickup_reach(CGabriella *gabriella)
{
    if ((gabriella != (CGabriella *)0x0) && (is_player_hero((CDemonActor *)gabriella) != 0)) {
        return 5.0f;
    }
    return 2.0f;
}

// =============================================================================
// Turning in place
// =============================================================================

namespace {

// Turn input must last this long before a step starts, so a tap only rotates
// her, as before.
const float kTurnHoldSeconds = 0.15f;

// While the turn lasts, a step is followed by the next from this many frames
// before its exit: its pose crossfades to the step's first frame over
// kTurnChainTween seconds with neither advancing (tweenPoseToPose), and the
// step then plays in full, rather than going through its own exit to "gab
// pause".
const float kTurnChainFrames = 1.0f;
const float kTurnChainTween  = 0.2f;

// Per hero slot: seconds turn input has lasted.
float s_turn_held[4];

// The turn state her turn input asks for, or STAND (0) for none.
uint turn_wanted(CGabriella *gabriella, int slot)
{
    const SPlayerInput *input = &(gabriella->base).player_input;

    if ((slot < 0) || (s_turn_held[slot] < kTurnHoldSeconds) ||
        (input->action_state.fire != 0) || (std::fabs(input->turn_speed) <= 0.01f)) {
        return kStand;
    }
    return (input->turn_speed < 0.0f) ? kTurnLeft : kTurnRight;
}

// Before her motion advances by `motion_delta` seconds: once a step nears its
// exit with the same turn still wanted, crossfades into the step's start.
void chain_turn(CGabriella *gabriella, int slot, float motion_delta)
{
    CMotionController *controller = &(gabriella->base).base.model.motion_controller;
    SMotionTransition  next;
    SMotion           *motion;
    uint               current;

    current = current_state(gabriella);
    if (((current != kTurnLeft) && (current != kTurnRight)) ||
        (0.0f <= controller->tween_progress) || (turn_wanted(gabriella, slot) != current)) {
        return;
    }
    motion = &controller->motion_list_ptr->motions[controller->current_motion_index];
    if (controller->current_frame_number + motion_delta * motion->fps <
        (float)motion->exit_forward_from_frame - kTurnChainFrames) {
        return;
    }
    next.desired_state = (int)current;
    next.cmd = MOTION_CMD_TWEEN;
    next.to_motion_number = controller->current_motion_index;
    next.to_frame_number = 0.0f;
    next.tween_time = kTurnChainTween;
    next.set_new_state_as_desired = 0;
    core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0(controller, &next);
}

} // namespace

extern "C" int nocturne_hero_gabriella_locomotion_state(CGabriella *gabriella, int chosen_state)
{
    SPlayerInput *input;
    float strafe_speed;
    uint  wanted;
    uint  current;
    int   slot;

    if (gabriella == (CGabriella *)0x0) {
        return chosen_state;
    }
    slot = hero_slot((CDemonActor *)gabriella);
    current = current_state(gabriella);
    // A request made during a crossfade out of a step restarts the crossfade
    // from nothing (findAndStartTransition clears it), and the pose jumps. The
    // request waits for the crossfade, at most kTurnChainTween or the step's
    // own 0.3 s.
    if (((current == kTurnLeft) || (current == kTurnRight)) &&
        (0.0f <= (gabriella->base).base.model.motion_controller.tween_progress)) {
        return (int)current;
    }
    if ((slot >= 0) && ((0.0f < s_climb_buffer[slot]) || (0.0f < s_put_down_buffer[slot]))) {
        return (int)kStand;
    }
    if (chosen_state != 0) {
        return chosen_state;
    }
    input = &(gabriella->base).player_input;
    strafe_speed = input->strafe_speed;
    if (strafe_speed < -0.01f) {
        wanted = kStrafeL;
    }
    else if (0.01f < strafe_speed) {
        wanted = kStrafeR;
    }
    else {
        // Turning in place, for a player. A press still waiting for an action
        // holds her in STAND, where every action starts.
        if ((current != kStand) && (current != kTurnLeft) && (current != kTurnRight)) {
            return chosen_state;
        }
        return (int)turn_wanted(gabriella, slot);
    }
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

    if (slot >= 0) {
        if (std::fabs((gabriella->base).player_input.turn_speed) <= 0.01f) {
            s_turn_held[slot] = 0.0f;
        }
        else {
            s_turn_held[slot] = s_turn_held[slot] + delta_time;
        }
        chain_turn(gabriella, slot, delta_time * motion_rate(gabriella));
    }

    core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890
        (gabriella, delta_time * motion_rate(gabriella));

    if (kick_crossed(gabriella, prev_state, prev_frame) != 0) {
        land_kick(gabriella);
    }
    step_shoves(gabriella, delta_time);

    if ((slot >= 0) && (0.0f < s_climb_buffer[slot])) {
        s_climb_buffer[slot] = s_climb_buffer[slot] - delta_time;
        if (try_start_climb(gabriella, slot) != 0) {
            s_climb_buffer[slot] = 0.0f;
        }
    }

    // A buffered press fires once she stands, if her weapon is still away.
    if ((slot >= 0) && (0.0f < s_kick_buffer[slot])) {
        s_kick_buffer[slot] = s_kick_buffer[slot] - delta_time;
        if ((gabriella->weapon_state_flags == 0) && (gabriella->draw_blend <= 0.0f) &&
            (try_start_kick(gabriella) != 0)) {
            s_kick_buffer[slot] = 0.0f;
        }
    }

    if (slot >= 0) {
        step_carry_throw(gabriella, &s_carry_throw[slot], delta_time);
        if (0.0f < s_put_down_buffer[slot]) {
            s_put_down_buffer[slot] = s_put_down_buffer[slot] - delta_time;
            if ((carried_object(gabriella) == (CDemonActor *)0x0) ||
                (try_start_put_down(gabriella) != 0)) {
                s_put_down_buffer[slot] = 0.0f;
            }
        }
    }
}
