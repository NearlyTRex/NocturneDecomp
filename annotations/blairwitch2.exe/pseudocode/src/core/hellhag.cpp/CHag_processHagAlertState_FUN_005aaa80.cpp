// Name: core_hellhag.cpp_CHag_processHagAlertState_FUN_005aaa80
// Address: 005aaa80
// Address Range: [[005aaa80, 005aab4e]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processHagAlertState_FUN_005aaa80(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hellhag_cpp_CHag_processHagAlertState_FUN_005aaa80(CHag *this_ptr,float delta_time)

{
  CEnemy_full_vtable *pCVar1;
  CCharacter *this_ptr_00;
  EDeathState EVar2;
  int iVar3;
  SStateMachine *pSVar4;
  CDeformableModelInstance *this_ptr_01;
  
  pCVar1 = (this_ptr->base).base.base.base.vtable._ue;
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,delta_time);
  this_ptr_00 = (this_ptr->base).base.victim;
  if (this_ptr_00 == (CCharacter *)0x0) {
    this_ptr_01 = &(this_ptr->base).base.base.model;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_01);
    if (*(int *)(iVar3 + 0x24) != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_01->base,0,1);
      return;
    }
  }
  else {
    EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
    if ((EVar2 == DEATH_STATE_ALIVE) || ((this_ptr->base).base.script_victim == (CCharacter *)0x0))
    {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.base.model.base,0,1);
      pSVar4 = &(this_ptr->base).state_machine;
      (this_ptr->base).attack_range = _DAT_00600a6c;
      core_muzzle_cpp_FUN_0059dcb0(pSVar4,0x3f000000);
      core_muzzle_cpp_FUN_0059d8e0(pSVar4,"Chasing");
      return;
    }
    (this_ptr->base).base.script_victim = (CCharacter *)0x0;
    (this_ptr->base).base.victim = (CCharacter *)0x0;
  }
  return;
}
