// Name: core_schngeis.cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280
// Address: 005a3280
// Address Range: [[005a3280, 005a33a7]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280(CSchnellGeist *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_schngeis_cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280(CSchnellGeist *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x17c))(this_ptr);
  if (iVar3 != 0) {
    fVar1 = *(float *)&this_ptr->field_0x20 - *(float *)(*(int *)&this_ptr->field_0x10a78 + 0x20);
    fVar2 = *(float *)&this_ptr->field_0x28 - *(float *)(*(int *)&this_ptr->field_0x10a78 + 0x28);
    this_ptr_00 = &this_ptr->field_0x2b4;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    iVar3 = *(int *)(iVar3 + 0x24);
    if (_DAT_005ff350 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      *(float *)&this_ptr->field_0x11394 = _DAT_005ff350;
      unkaddr_0059d350_cpp_FUN_0059dcb0(&this_ptr->field_0x10af8,0x3f000000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Chasing");
      if (iVar3 == 10) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0,1);
        return;
      }
    }
    else {
      if (iVar3 == 10) {
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
        *(int *)&this_ptr->field_0x1186c = iVar3;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,0,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0x10a78 + 0x20));
      if (*(int *)&this_ptr->field_0x1186c == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,3,1);
        return;
      }
      if (*(int *)&this_ptr->field_0x1186c == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,4,1);
        return;
      }
    }
  }
  return;
}
