// Name: core_robin.cpp_CRobin_processMeleeAttackState_FUN_005a6140
// Address: 005a6140
// Address Range: [[005a6140, 005a61ed]]
// Convention: __cdecl
// Signature: void __cdecl core_robin_cpp_CRobin_processMeleeAttackState_FUN_005a6140(CRobin *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_robin_cpp_CRobin_processMeleeAttackState_FUN_005a6140(CRobin *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte *this_ptr_00;
  
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x17c))(this_ptr);
  if (iVar3 != 0) {
    iVar3 = *(int *)&this_ptr->field_0x10a78;
    fVar1 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
    fVar2 = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
    if (_DAT_005ffc9c < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      unkaddr_0059d350_cpp_FUN_0059dcb0(&this_ptr->field_0x10af8,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Chasing");
      return;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,(CVector3f *)(iVar3 + 0x20));
    this_ptr_00 = &this_ptr->field_0x2b4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,5,1);
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar3 + 0x24) == 5) {
      core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr_00);
      return;
    }
  }
  return;
}
