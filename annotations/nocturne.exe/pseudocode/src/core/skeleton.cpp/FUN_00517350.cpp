// Name: core_skeleton.cpp_FUN_00517350
// Address: 00517350
// Address Range: [[00517350, 00517399]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00517350(CMotionList *param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00517350(CMotionList *param_1)

{
  char (*pacVar1) [30];
  CMotionList *pCVar2;
  
  FUN_005670b1(8);
  pCVar2 = core_motion_cpp_CMotionList_ctor_FUN_004e0900(param_1);
  pacVar1 = pCVar2[1].state_names;
  *(char *)((int)(pacVar1 + 2) + 0x10) = '\0';
  *(char *)((int)(pacVar1 + 2) + 0x11) = '\0';
  *(char *)((int)(pacVar1 + 2) + 0x12) = '\0';
  *(char *)((int)(pacVar1 + 2) + 0x13) = '\0';
  pCVar2[1].motions[0].signals[10].value = 0;
  pCVar2[1].motions[0].signals[0xb].frame_number = 0;
  pCVar2[1].motions[0].signals[0xb].value = 0;
  pCVar2[1].motions[0].signals[0xc].frame_number = 0;
  return;
}
