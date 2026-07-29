// Name: core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0
// Address: 00429fe0
// Address Range: [[00429fe0, 0042a05e]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_canLookAt_FUN_00429fe0(int param_1)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_canLookAt_FUN_00429fe0(int param_1)

{
  int iVar1;
  uint uVar2;
  CMotionList *this_ptr;
  float fVar3;
  char *state_name;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar1 < 2) {
    if (*(char *)(param_1 + 0x23b0) != '\0') {
      iVar1 = 0;
      state_name = "STAND";
      this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                           ((CMotionController *)(param_1 + 0x150));
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr,state_name,iVar1);
      if (-1 < iVar1) {
        fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                          ((CMotionController *)(param_1 + 0x150),iVar1);
        if ((float)0.94999999999999996 < fVar3) {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
