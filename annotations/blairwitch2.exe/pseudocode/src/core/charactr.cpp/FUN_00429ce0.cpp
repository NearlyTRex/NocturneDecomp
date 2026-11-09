// Name: core_charactr.cpp_FUN_00429ce0
// Address: 00429ce0
// Address Range: [[00429ce0, 00429d5e]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00429ce0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_00429ce0(int param_1)

{
  int iVar1;
  uint uVar2;
  CMotionList *this_ptr;
  float fVar3;
  char *state_name;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar1 < 2) {
    if (*(char *)(param_1 + 0x2514) != '\0') {
      iVar1 = 0;
      state_name = "STAND";
      this_ptr = core_motion_cpp_FUN_00503860((CMotionController *)(param_1 + 0x2b4));
      iVar1 = core_motion_cpp_FUN_00502fa0(this_ptr,state_name,iVar1);
      if (-1 < iVar1) {
        fVar3 = (float)core_motion_cpp_FUN_005038a0((CMotionController *)(param_1 + 0x2b4),iVar1);
        if ((float)_DAT_005cd13e < fVar3) {
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
