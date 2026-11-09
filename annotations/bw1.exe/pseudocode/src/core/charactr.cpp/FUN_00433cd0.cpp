// Name: core_charactr.cpp_FUN_00433cd0
// Address: 00433cd0
// Address Range: [[00433cd0, 00433d4e]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00433cd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_00433cd0(int param_1)

{
  int iVar1;
  uint uVar2;
  CMotionList *this_ptr;
  float fVar3;
  char *state_name;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 < 2) {
    if (*(char *)(param_1 + 0x24a8) != '\0') {
      iVar1 = 0;
      state_name = "STAND";
      this_ptr = core_motion_cpp_FUN_00524a00((CMotionController *)(param_1 + 0x158));
      iVar1 = core_motion_cpp_FUN_00524150(this_ptr,state_name,iVar1);
      if (-1 < iVar1) {
        fVar3 = (float)core_motion_cpp_FUN_00524a40((CMotionController *)(param_1 + 0x158),iVar1);
        if ((float)_DAT_005d5df7 < fVar3) {
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
