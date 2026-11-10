// Name: core_hand.cpp_CHand_processMeleeAttackState_FUN_005a9ed0
// Address: 005a9ed0
// Address Range: [[005a9ed0, 005a9fe5]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processMeleeAttackState_FUN_005a9ed0(CHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hand_cpp_CHand_processMeleeAttackState_FUN_005a9ed0(CHand *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x17c))(this_ptr);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0x10a78 + 0x20));
  iVar2 = *(int *)&this_ptr->field_0x10a78;
  if ((iVar2 != 0) &&
     (fVar3 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20),
     fVar1 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28),
     _DAT_0060088c < SQRT(fVar1 * fVar1 + fVar3 * fVar3))) {
    unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Sleeping");
    return;
  }
  if (*(int *)&this_ptr->field_0x1185c == 0) {
    iVar2 = 3;
  }
  else {
    if (*(int *)&this_ptr->field_0x1185c != 1) goto LAB_005a9f63;
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
LAB_005a9f63:
  iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  iVar2 = *(int *)(iVar2 + 0x24);
  fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
  if ((iVar2 != 3) && (iVar2 != 4)) {
    return;
  }
  if (fVar3 <= (float)_DAT_005f0a53) {
    return;
  }
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
  *(int *)&this_ptr->field_0x1185c = iVar2;
  return;
}
