// Name: core_charactr.cpp_FUN_004281d0
// Address: 004281d0
// Address Range: [[004281d0, 00428252]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_004281d0(int param_1)

#include "nocturne.h"

uint core_charactr_cpp_FUN_004281d0(int param_1)

{
  char *pcVar1;
  CMotionController *this_ptr;
  char *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  iVar3 = 3;
  pcVar2 = &DAT_005ccdff;
  this_ptr = (CMotionController *)(param_1 + 0x2b4);
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(this_ptr);
  iVar3 = _strnicmp(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return 1;
  }
  pcVar2 = &DAT_005cce03;
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(this_ptr);
  iVar3 = _stricmp(pcVar1,pcVar2);
  if (iVar3 == 0) {
    return 2;
  }
  pcVar2 = "DEAD_POSSUM";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(this_ptr);
  iVar3 = _stricmp(pcVar1,pcVar2);
  if (iVar3 == 0) {
    return 0xfffffffe;
  }
  return 0;
}
