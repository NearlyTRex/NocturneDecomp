// Name: core_mobster.cpp_FUN_00527740
// Address: 00527740
// Address Range: [[00527740, 005278c5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_00527740(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00527740(uint param_1, uint
   param_2) */

void __cdecl core_mobster_cpp_FUN_00527740(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CCharacter *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40
            (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x30));
  sound_sndmain_cpp_killSfx_FUN_005a9c40
            (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x28));
  core_mobster_cpp_FUN_00527380();
  if (((in_stack_00000004->base).model.part_visibility_flags
       [*(int *)(in_stack_00000004[1].base.base.create_event + 0x38)] == 0) &&
     ((in_stack_00000004->base).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base.base.create_event + 0x40)] == 0)) {
    in_stack_00000008->damage_amount = 9999.9;
  }
  fVar1 = (float)(in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  this_ptr = &(in_stack_00000004->base).model;
  (in_stack_00000004->base).hit_points = (int)fVar1;
  if (fVar1 <= 0.0) {
    (in_stack_00000004->base).hit_points = 0;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar5->state_index != 5) && (pSVar5->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
      (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc21)();
      if (*(int *)(in_stack_00000004[1].base.base.create_event + 0x2c) == 0) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40
                  (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x24));
        uVar6 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)in_stack_00000004,"mobster-die-?.wav");
        pCVar2 = &in_stack_00000004[1].base;
        (pCVar2->base).create_event[0x2c] = '\x01';
        (pCVar2->base).create_event[0x2d] = '\0';
        (pCVar2->base).create_event[0x2e] = '\0';
        (pCVar2->base).create_event[0x2f] = '\0';
        *(uint *)(in_stack_00000004[1].base.base.create_event + 0x24) = uVar6;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
        return;
      }
    }
    goto LAB_00527805;
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008->attacker,g_CTommyGunClassInfo.name_hash);
  if (pCVar3 == (CDemonActor *)0x0) {
LAB_005277e1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,3,1)
    ;
  }
  else {
    iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar4 != 0) goto LAB_005277e1;
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                    (*(uint *)(in_stack_00000004[1].base.base.create_event + 0x24));
  if (iVar4 == 0) {
    uVar6 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                      ((CDemonActor *)in_stack_00000004,"mobster-hit-?.wav");
    *(uint *)(in_stack_00000004[1].base.base.create_event + 0x24) = uVar6;
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
LAB_00527805:
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
