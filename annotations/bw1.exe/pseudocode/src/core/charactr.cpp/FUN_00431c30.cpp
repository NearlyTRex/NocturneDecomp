// Name: core_charactr.cpp_FUN_00431c30
// Address: 00431c30
// Address Range: [[00431c30, 00431cb4]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00431c30(int param_1)

#include "nocturne.h"

uint core_charactr_cpp_FUN_00431c30(int param_1)

{
  char *pcVar1;
  CMotionController *this_ptr;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar3 = 3;
  pcVar2 = &DAT_005d5a90;
  this_ptr = (CMotionController *)(param_1 + 0x158);
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
  iVar3 = _strnicmp(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = 4;
  pcVar2 = &DAT_005d5a94;
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
  iVar3 = _strnicmp(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return 2;
  }
  pcVar2 = "DEAD_POSSUM";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
  iVar3 = _stricmp(pcVar1,pcVar2);
  if (iVar3 == 0) {
    return 0xfffffffe;
  }
  return 0;
}
