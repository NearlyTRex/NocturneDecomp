// =============================================================================
// GABRIELLA AS A PLAYER HERO — see hero_gabriella.h
// =============================================================================

#include "game/hero_gabriella.h"
#include "nocturne.h"

#include <cmath>

namespace {

// GABRIELA.SKL's state list.
const uint kStand    = 0x00;
const uint kWalk     = 0x01;
const uint kKickDoor = 0x13;
const uint kStrafeL  = 0x14;
const uint kStrafeR  = 0x15;

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

// Seconds a buffered kick press has left, per hero slot. Slots are shared by
// every machine.
float s_kick_buffer[4];

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
// moment the draw completes.
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
    if (s_press_used[slot] != 0) {
        input->action_state.fire = 0;
    }
}

uint current_state(CGabriella *gabriella)
{
    return core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
               (&(gabriella->base).base.model.motion_controller)->state_index;
}

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
    bone_point = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
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
