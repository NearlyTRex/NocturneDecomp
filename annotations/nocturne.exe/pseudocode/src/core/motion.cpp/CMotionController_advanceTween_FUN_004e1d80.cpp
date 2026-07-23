// Name: core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80
// Address: 004e1d80
// Address Range: [[004e1d80, 004e1e56]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80(int *param_1,int param_2,float param_3,float *param_4)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_advanceTween_FUN_004e1d80(int *param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_20;
  
  iVar5 = param_2 * 0x54c + *param_1 + 0x968;
  fVar1 = *param_4 * *(float *)(iVar5 + 0x20) + param_3;
  iVar3 = 0;
  iVar4 = iVar5;
  local_20 = fVar1;
  if (0 < *(int *)(iVar5 + 0x4a4)) {
    do {
      fVar2 = (float)*(int *)(iVar4 + 0x4a8);
      if ((param_3 <= fVar2) && (fVar2 <= local_20 + (float)0.001)) {
        local_20 = fVar2 + (float)0.001;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < *(int *)(iVar5 + 0x4a4));
  }
  if ((float)*(int *)(iVar5 + 100) < local_20) {
    local_20 = (float)*(int *)(iVar5 + 100);
  }
  if (local_20 < fVar1) {
    *param_4 = (local_20 - param_3) / *(float *)(iVar5 + 0x20);
    return;
  }
  return;
}
