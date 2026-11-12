// Name: core_unionzom.cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0
// Address: 005a40f0
// Address Range: [[005a40f0, 005a4211]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0(CUnionZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_unionzom_cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0(CUnionZombie *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  SStateMachine *pSVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = this_ptr->vanish_phase;
  this_ptr_00 = &(this_ptr->base).base.base.model;
  if (uVar2 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
    core_basicene_cpp_FUN_005a01a0(this_ptr,(this_ptr->base).fade_val,0,0x3f99999a);
    core_basicene_cpp_FUN_0059f570(this_ptr);
    this_ptr->vanish_phase = 1;
    return;
  }
  if (uVar2 < 2) {
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar3 + 0x24) == 4) {
      if (_DAT_005f02de <= (this_ptr->base).base.base.model.base.current_frame_number) {
        core_basicene_cpp_FUN_005a01a0(this_ptr,(this_ptr->base).fade_val,0x3f800000,0x3f400000);
        core_basicene_cpp_FUN_0059f570(this_ptr);
        this_ptr->vanish_phase = 2;
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
      return;
    }
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar3 + 0x24) == 3) {
      pSVar1 = &(this_ptr->base).state_machine;
      (this_ptr->base).attack_range = _DAT_005ff544;
      core_muzzle_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","MeleeAttack");
      core_muzzle_cpp_FUN_0059d8e0(pSVar1,"MeleeAttack");
      this_ptr->vanish_phase = 0;
      return;
    }
  }
  return;
}
