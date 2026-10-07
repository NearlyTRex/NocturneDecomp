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
unsigned char s_next_attack[NOCTURNE_HERO_SLOTS];

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

// CHaystack::checkMeleeHit, from a bone found by name so it survives the morph
// re-initialising the model. Returns whether anyone was hit.
int strike_from(CMoloch *moloch, CCharacter *target, const char *bone_name)
{
    CVector3f world_point;
    SDamageInfo damage;

    if (nocturne_hero_bone_world(&(moloch->base).base, bone_name, &world_point) == 0) {
        return 0;
    }

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

    slot = nocturne_hero_slot(hero);
    if (slot < 0) {
        return kAttackStates[0];
    }
    attack = s_next_attack[slot] % ATTACK_COUNT;
    s_next_attack[slot] = (unsigned char)((attack + 1) % ATTACK_COUNT);
    return kAttackStates[attack];
}

extern "C" void nocturne_moloch_attack_hit(CMoloch *moloch, int prev_state, float prev_frame)
{
    CCharacter *character;
    int state;
    float hit_frame;

    if ((moloch == (CMoloch *)0x0) || (moloch->in_human_form != 0)) {
        return;
    }
    character = &(moloch->base).base;
    state = nocturne_hero_motion_state(character);
    if (state == MOLOCH_STATE_PUNCH) {
        hit_frame = kPunchHitFrame;
    }
    else if (state == MOLOCH_STATE_OVERHEADSMASH) {
        hit_frame = kSmashHitFrame;
    }
    else {
        return;
    }
    if (nocturne_hero_motion_crossed(character, state, prev_state, prev_frame, hit_frame) != 0) {
        strike(moloch);
    }
}

namespace {

// CMoloch's processDamage slot. The NPC goes straight to the inherited
// CCharacter::processDamage, as shipped.
void moloch_process_damage(CCharacter *character, SDamageInfo *damage_info)
{
    CHero *hero = (CHero *)character;

    if (nocturne_hero_slot(hero) < 0) {
        core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(character, damage_info);
        return;
    }
#if !NOCTURNE_AUTHENTIC_FRIENDLY_FIRE
    if (nocturne_net_friendly_fire_block(character, damage_info) != 0) {
        return;
    }
#endif

    // CCharacter::processDamage's dispatch: EXPLODE explodes, FALL_APART and
    // CHOPPED dismember, SHATTER shatters.
    if ((damage_info->damage_type == DAMAGE_TYPE_EXPLODE) ||
        (damage_info->damage_type == DAMAGE_TYPE_FALL_APART) ||
        (damage_info->damage_type == DAMAGE_TYPE_SHATTER) ||
        (damage_info->damage_type == DAMAGE_TYPE_CHOPPED)) {
        damage_info->damage_type = DAMAGE_TYPE_GENERIC;
    }

    // The other heroes' processDamage prologue.
    if ((hero->invincibility_timer != 0.0f) || (g_CGamePtr->god_mode_enabled != 0) ||
        (g_CGamePtr->allow_damage_flag == 0)) {
        damage_info->damage_amount = 0.0f;
    }
    if (0.0f < damage_info->damage_amount) {
        hero->invincibility_timer = 0.5f;
        character->hit_points = character->hit_points - damage_info->damage_amount;
        if (character->hit_points < MOLOCH_MIN_HIT_POINTS) {
            character->hit_points = MOLOCH_MIN_HIT_POINTS;
        }
        nocturne_hero_items_damage_taken(hero, damage_info);
    }
    core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(character, damage_info);
}

// g_CMolochVTable with processDamage replaced. Copied on first use, after
// static initialisation has filled the original.
CHero_full_vtable s_moloch_vtable;
int s_moloch_vtable_ready = 0;

} // namespace

extern "C" void nocturne_moloch_install_vtable(CMoloch *moloch)
{
    if (s_moloch_vtable_ready == 0) {
        s_moloch_vtable = g_CMolochVTable;
        s_moloch_vtable._uc.processDamage = (CCharacter_processDamage *)moloch_process_damage;
        s_moloch_vtable_ready = 1;
    }
    (moloch->base).base.base.vtable._ub = &s_moloch_vtable._ub;
}

extern "C" void nocturne_moloch_regenerate(CMoloch *moloch, float delta_time)
{
    CCharacter *character = &(moloch->base).base;

    if ((nocturne_hero_slot(&moloch->base) < 0) || (character->max_hit_points <= character->hit_points)) {
        return;
    }
    character->hit_points = character->hit_points + delta_time * MOLOCH_REGEN_PER_SECOND;
    if (character->max_hit_points < character->hit_points) {
        character->hit_points = character->max_hit_points;
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
