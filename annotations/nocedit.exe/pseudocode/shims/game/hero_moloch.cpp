#include "game/hero_moloch.h"
#include "nocturne.h"

#include <cstring>

namespace {

// MOLOCH_D.SKL state indices. MELEEFIGHT (9) is reachable too, but it only
// waves the arms, so it is not used.
enum {
    MOLOCH_STATE_STAND         = 0,
    MOLOCH_STATE_OVERHEADSMASH = 10,
    MOLOCH_STATE_PUNCH         = 11
};

// The order fire plays them in. Stand has a transition to each.
const unsigned int kAttackStates[] = {
    MOLOCH_STATE_PUNCH, MOLOCH_STATE_OVERHEADSMASH
};
#define ATTACK_COUNT ((int)(sizeof(kAttackStates) / sizeof(kAttackStates[0])))

// Frames the blow lands on. Neither motion carries a signal; these sit before
// their exit frames (32 and 27) and are the values to tune in play.
const float kPunchHitFrame = 16.0f;
const float kSmashHitFrame = 15.0f;

const float kClawDamage = 60.0f;
// CIcePick::performMeleeAttack's radius; CHaystack's 0.5 is for a smaller man.
const float kClawRadius = 1.0f;

// Which attack each player hero throws next. Indexed by hero slot, which every
// machine shares.
unsigned char s_next_attack[4];

int is_attack_state(int state)
{
    int i;

    for (i = 0; i < ATTACK_COUNT; i++) {
        if (state == (int)kAttackStates[i]) {
            return 1;
        }
    }
    return 0;
}

int hero_slot(CHero *hero)
{
    int i;

    for (i = 0; (i < 4) && (i < g_HeroCount); i++) {
        if (g_HeroActors[i] == hero) {
            return i;
        }
    }
    return -1;
}

// CHaystack::checkMeleeHit, from a bone found by name so it survives the morph
// re-initialising the model. Returns whether anyone was hit.
int strike_from(CMoloch *moloch, CCharacter *target, const char *bone_name)
{
    CDeformableModelInstance *model = &(moloch->base).base.model;
    CSkeleton *skeleton;
    int bone_index;
    CVector3f local_point;
    CVector3f world_point;
    CVector3f *bone_point;
    SDamageInfo damage;

    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(model);
    bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(skeleton, (char *)bone_name, 1);
    if (bone_index < 0) {
        return 0;
    }
    bone_point = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (model, &local_point, bone_index);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)moloch, &world_point, bone_point);

    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&damage);
    damage.damage_amount = kClawDamage;
    damage.damage_type   = DAMAGE_TYPE_MELEE;
    damage.attacker      = (CDemonActor *)moloch;
    damage.wielder       = (CDemonActor *)moloch;
    return (*(((target->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
               (target, &world_point, kClawRadius, &damage);
}

void strike(CMoloch *moloch)
{
    int i;

    for (i = 0; i < g_CDemonSetPtr->character_count; i++) {
        CCharacter *target = g_CDemonSetPtr->characters[i];

        if ((target == (CCharacter *)0x0) || (target == (CCharacter *)moloch)) {
            continue;
        }
        // One blow per target, from whichever hand reaches it.
        if (strike_from(moloch, target, "Bip01 R Hand") == 0) {
            strike_from(moloch, target, "Bip01 L Hand");
        }
    }
}

} // namespace

extern "C" void nocturne_moloch_setup_items(CHero *hero)
{
    CWeapon *amulet;

    if (hero == (CHero *)0x0) {
        return;
    }
    amulet = (hero->inventory).selected_weapon;
    if (amulet != (CWeapon *)0x0) {
        strcpy((amulet->base).actor_name, NOCTURNE_MOLOCH_AMULET_NAME);
    }
}

extern "C" unsigned int nocturne_moloch_fire(CMoloch *moloch, unsigned int desired_state)
{
    CHero *hero;
    CMotionController *controller;
    SMotion *motion;
    int slot;
    int attack;

    if (moloch == (CMoloch *)0x0) {
        return desired_state;
    }
    hero = &moloch->base;
    controller = &(hero->base).model.motion_controller;

    // A requested attack blends in from stand for a tenth of a second, and the
    // current motion reads as stand until it arrives, so this branch runs again
    // meanwhile. Keep asking for it: setDesiredState reverses a live transition,
    // so a walk request here would play the attack half way and back, and a
    // held fire would start the next attack in the rotation over it.
    if (is_attack_state(controller->state_index) != 0) {
        return (unsigned int)controller->state_index;
    }

    // Fire while grabbed is the struggle; AI Moloch has no player to press it.
    if (((hero->player_input).action_state.fire == 0) ||
        (hero->control_type == HERO_CONTROL_AI) ||
        ((hero->base).grabbed_by != (CDemonActor *)0x0) ||
        (moloch->in_human_form != 0) || (moloch->morphing != 0)) {
        return desired_state;
    }

    // Walk and backup have no transition to an attack, only to stand. Settle
    // there first; the blow follows once he is standing.
    motion = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(controller);
    if (motion->state_index != MOLOCH_STATE_STAND) {
        return MOLOCH_STATE_STAND;
    }
    // Fire is left set, so holding it swings again when this blow ends.

    slot = hero_slot(hero);
    if (slot < 0) {
        return kAttackStates[0];
    }
    attack = s_next_attack[slot] % ATTACK_COUNT;
    s_next_attack[slot] = (unsigned char)((attack + 1) % ATTACK_COUNT);
    return kAttackStates[attack];
}

extern "C" void nocturne_moloch_attack_hit(CMoloch *moloch, int prev_state, float prev_frame)
{
    CMotionController *controller;
    SMotion *motion;
    float frame;
    float hit_frame;
    int crossed;

    if ((moloch == (CMoloch *)0x0) || (moloch->in_human_form != 0)) {
        return;
    }
    controller = &(moloch->base).base.model.motion_controller;
    motion = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(controller);
    if (motion->state_index == MOLOCH_STATE_PUNCH) {
        hit_frame = kPunchHitFrame;
    }
    else if (motion->state_index == MOLOCH_STATE_OVERHEADSMASH) {
        hit_frame = kSmashHitFrame;
    }
    else {
        return;
    }
    frame = controller->current_frame_number;
    if ((prev_state != motion->state_index) || (frame < prev_frame)) {
        crossed = hit_frame <= frame;                  // the motion started this frame
    }
    else {
        crossed = (prev_frame < hit_frame) && (hit_frame <= frame);
    }
    if (crossed != 0) {
        strike(moloch);
    }
}

extern "C" int nocturne_moloch_is_attacking(CMoloch *moloch)
{
    CMotionController *controller;

    if (moloch == (CMoloch *)0x0) {
        return 0;
    }
    controller = &(moloch->base).base.model.motion_controller;
    return (is_attack_state(controller->state_index) != 0) ||
           (is_attack_state(core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (controller)->state_index) != 0);
}
