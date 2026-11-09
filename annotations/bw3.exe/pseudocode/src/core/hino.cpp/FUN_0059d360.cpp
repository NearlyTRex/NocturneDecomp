// Name: core_hino.cpp_FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d404]]
// Convention: unknown
// Signature: void core_hino_cpp_FUN_0059d360(int param_1,int param_2)

#include "nocturne.h"

void core_hino_cpp_FUN_0059d360(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x30) == 0x6a) {
    return;
  }
  this_ptr = (CMotionController *)(param_1 + 0x158);
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd054));
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar3 == 0) goto LAB_0059d3d8;
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    iVar3 = 6;
  }
  else {
    *(uint *)(param_1 + 0x2540) = 0;
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    if ((*(int *)(pSVar2 + 0x24) == 7) || (*(int *)(pSVar2 + 0x24) == 8)) goto LAB_0059d3d8;
    iVar3 = 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,iVar3,1);
LAB_0059d3d8:
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
