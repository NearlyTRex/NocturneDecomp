// Name: core_hand.cpp_CHand_processSleepingState_FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa190]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processSleepingState_FUN_005a9ff0(CHand *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hand_cpp_CHand_processSleepingState_FUN_005a9ff0(CHand *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  
  this_ptr_00 = &this_ptr->field_0x2b4;
  iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (*(float *)&this_ptr->field_0x11864 <= 0.0) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,delta_time);
    if (*(int *)&this_ptr->field_0x10a78 == 0) {
      if (iVar3 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,2,1);
        fVar1 = *(float *)&this_ptr->field_0x11868 - delta_time;
        *(float *)&this_ptr->field_0x11868 = fVar1;
        if (fVar1 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,0,1);
          return;
        }
      }
    }
    else {
      *(uint *)&this_ptr->field_0x11868 = 0x40a00000;
      iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x10a78 + 0x2b0) + 0x114))
                        (*(int *)&this_ptr->field_0x10a78);
      if ((iVar3 != 0) && (*(int *)&this_ptr->field_0x10af0 != 0)) {
        *(uint *)&this_ptr->field_0x10af0 = 0;
        *(uint *)&this_ptr->field_0x10a78 = 0;
        return;
      }
      iVar3 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
      if (*(int *)(iVar3 + 0x24) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,2,1);
        return;
      }
      if (*(int *)(iVar3 + 0x24) != 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,2,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0x10a78 + 0x20));
      fVar1 = *(float *)&this_ptr->field_0x20 - *(float *)(*(int *)&this_ptr->field_0x10a78 + 0x20);
      fVar2 = *(float *)&this_ptr->field_0x28 - *(float *)(*(int *)&this_ptr->field_0x10a78 + 0x28);
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < _DAT_0060088c) {
        unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"?MeleeAttack" + 1);
        return;
      }
    }
  }
  else {
    fVar1 = *(float *)&this_ptr->field_0x11864 - delta_time;
    *(float *)&this_ptr->field_0x11864 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x11864 = 0;
    }
  }
  return;
}
