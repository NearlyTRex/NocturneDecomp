// Name: core_confzomb.cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130
// Address: 005a2130
// Address Range: [[005a2130, 005a223a]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130(CConfederateZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_confzomb_cpp_CConfederateZombie_processMeleeAttackState_FUN_005a2130(CConfederateZombie *this_ptr,float delta_time)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,3,1);
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0x10a78 + 0x20));
  fVar3 = *(float *)&this_ptr->field_0x20 - *(float *)(*(int *)&this_ptr->field_0x10a78 + 0x20);
  fVar2 = *(float *)&this_ptr->field_0x28 - *(float *)(*(int *)&this_ptr->field_0x10a78 + 0x28);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  puVar1 = &this_ptr->field_0x10af8;
  if (_DAT_005fef90 < fVar2) {
    *(float *)&this_ptr->field_0x11394 = _DAT_005fef90;
    unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","BRangeAttack" + 1);
    unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
  }
  else if (_DAT_005fef94 + _DAT_005efe93 < fVar2) {
    *(float *)&this_ptr->field_0x11394 = _DAT_005fef94;
    unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
    return;
  }
  return;
}
