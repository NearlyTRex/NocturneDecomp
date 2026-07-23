// Name: core_stranger.cpp_CStranger_updateTurnBlending_FUN_005397b0
// Address: 005397b0
// Address Range: [[005397b0, 00539ab9]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_34;
  
  *(uint *)(param_1 + 0x1fae8) = 0;
  *(uint *)(param_1 + 0x1fae4) = *(uint *)(param_1 + 0x1fae8);
  *(uint *)(param_1 + 0x1fae0) = *(uint *)(param_1 + 0x1fae4);
  fVar3 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                           (param_1 + 0x150,0);
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(param_1 + 0x1fabc))) {
    *(uint *)(param_1 + 0x1fab8) = 0;
    *(uint *)(param_1 + 0x1faec) = 0xffffffff;
    *(uint *)(param_1 + 0x1fac0) = 0;
    *(uint *)(param_1 + 0x1fac4) = 0;
    *(uint *)(param_1 + 0x1fabc) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * param_2 * (float)10;
    if (fVar3 <= ABS(*(float *)(param_1 + 0x1fab8))) {
      if (0.0 <= *(float *)(param_1 + 0x1fab8)) {
        *(float *)(param_1 + 0x1fab8) = *(float *)(param_1 + 0x1fab8) - fVar3;
      }
      else {
        *(float *)(param_1 + 0x1fab8) = *(float *)(param_1 + 0x1fab8) + fVar3;
      }
    }
    else {
      *(uint *)(param_1 + 0x1fab8) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1faec);
  *(uint *)(param_1 + 0x1faec) = _DAT_02dc9fa0;
  if (*(float *)(param_1 + 0x1fab8) < 0.0) {
    *(uint *)(param_1 + 0x1faec) = _DAT_02dc9fa4;
  }
  if (*(float *)(param_1 + 0x1fabc) <= (float)0.20000000000000001) {
    *(uint *)(param_1 + 0x1fac4) = 0;
  }
  else {
    *(float *)(param_1 + 0x1fac4) = *(float *)(param_1 + 0x1fac4) + param_2;
  }
  if ((*(float *)(param_1 + 0x1fac0) <= 0.0) &&
     (((float)0.5 <= *(float *)(param_1 + 0x1fabc) ||
      (1.0 < *(float *)(param_1 + 0x1fac4))))) {
    *(float *)(param_1 + 0x1fac0) = (1.0 - *(float *)(param_1 + 0x1fabc)) * 1.6;
  }
  if (*(float *)(param_1 + 0x1fac0) <= 0.0) {
    local_34 = ABS(*(float *)(param_1 + 0x1fab8) * (float)0.31830988619288902);
    if (iVar1 != *(int *)(param_1 + 0x1faec)) {
      local_34 = 0.0;
    }
    if (1.0 < local_34) {
      local_34 = 1.0;
    }
    fVar3 = (local_34 - *(float *)(param_1 + 0x1fabc)) + *(float *)(param_1 + 0x1fabc);
    *(float *)(param_1 + 0x1fabc) = fVar3;
    if ((float)0.001 < fVar3) {
      *(int *)(param_1 + 0x1faec) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x1fac0);
    fVar2 = fVar3 - param_2;
    *(float *)(param_1 + 0x1fac0) = fVar2;
    if (0.0 < fVar2) {
      param_2 = param_2 / fVar3;
    }
    else {
      param_2 = 1.0 - *(float *)(param_1 + 0x1fabc);
      *(uint *)(param_1 + 0x1fac0) = 0;
    }
    fVar3 = *(float *)(param_1 + 0x1fabc);
    fVar2 = fVar3 + param_2;
    *(float *)(param_1 + 0x1fabc) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(param_1 + 0x1fab8) =
           *(float *)(param_1 + 0x1fab8) - (*(float *)(param_1 + 0x1fab8) * param_2) / (1.0 - fVar3)
      ;
      return;
    }
    *(uint *)(param_1 + 0x1fab8) = 0;
    *(uint *)(param_1 + 0x1fac0) = 0;
    *(uint *)(param_1 + 0x1fac4) = 0;
    *(uint *)(param_1 + 0x1fabc) = 0x3f800000;
  }
  return;
}
