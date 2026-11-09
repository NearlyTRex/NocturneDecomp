// Name: core_charactr.cpp_FUN_004331a0
// Address: 004331a0
// Address Range: [[004331a0, 0043321e]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_004331a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_004331a0(int param_1)

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
      this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)(param_1 + 0x158));
      iVar1 = core_motion_cpp_FUN_004fba50(this_ptr,state_name,iVar1);
      if (-1 < iVar1) {
        fVar3 = (float)core_motion_cpp_FUN_004fc350((CMotionController *)(param_1 + 0x158),iVar1);
        if ((float)_DAT_005b873e < fVar3) {
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
