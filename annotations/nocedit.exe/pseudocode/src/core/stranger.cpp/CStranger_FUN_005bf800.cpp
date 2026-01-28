// Name: core_stranger.cpp_CStranger_FUN_005bf800
// Address: 005bf800
// Address Range: [[005bf800, 005bfb09]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_FUN_005bf800(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bf800(CStranger* param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005bf800(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_34;
  
  *(uint *)(in_stack_00000004 + 0x1fc80) = 0;
  *(uint *)(in_stack_00000004 + 0x1fc7c) = *(uint *)(in_stack_00000004 + 0x1fc80);
  *(uint *)(in_stack_00000004 + 0x1fc78) = *(uint *)(in_stack_00000004 + 0x1fc7c);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    ((CMotionController *)(in_stack_00000004 + 0x158),0);
  if ((fVar3 <= 0.0) || (1.0 <= *(float *)(in_stack_00000004 + 0x1fc54))) {
    *(uint *)(in_stack_00000004 + 0x1fc50) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc84) = 0xffffffff;
    *(uint *)(in_stack_00000004 + 0x1fc58) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc5c) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc54) = 0;
    return;
  }
  if (fVar3 < 1.0) {
    fVar3 = (1.0 - fVar3) * in_stack_00000008 * (float)10;
    if (fVar3 <= ABS(*(float *)(in_stack_00000004 + 0x1fc50))) {
      if (0.0 <= *(float *)(in_stack_00000004 + 0x1fc50)) {
        *(float *)(in_stack_00000004 + 0x1fc50) = *(float *)(in_stack_00000004 + 0x1fc50) - fVar3;
      }
      else {
        *(float *)(in_stack_00000004 + 0x1fc50) = *(float *)(in_stack_00000004 + 0x1fc50) + fVar3;
      }
    }
    else {
      *(uint *)(in_stack_00000004 + 0x1fc50) = 0;
    }
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x1fc84);
  *(uint *)(in_stack_00000004 + 0x1fc84) = DAT_03f6bb1c;
  if (*(float *)(in_stack_00000004 + 0x1fc50) < 0.0) {
    *(uint *)(in_stack_00000004 + 0x1fc84) = DAT_03f6bb20;
  }
  if (*(float *)(in_stack_00000004 + 0x1fc54) <= (float)0.20000000000000001) {
    *(uint *)(in_stack_00000004 + 0x1fc5c) = 0;
  }
  else {
    *(float *)(in_stack_00000004 + 0x1fc5c) =
         *(float *)(in_stack_00000004 + 0x1fc5c) + in_stack_00000008;
  }
  if ((*(float *)(in_stack_00000004 + 0x1fc58) <= 0.0) &&
     (((float)0.5 <= *(float *)(in_stack_00000004 + 0x1fc54) ||
      (1.0 < *(float *)(in_stack_00000004 + 0x1fc5c))))) {
    *(float *)(in_stack_00000004 + 0x1fc58) = (1.0 - *(float *)(in_stack_00000004 + 0x1fc54)) * 1.6;
  }
  if (*(float *)(in_stack_00000004 + 0x1fc58) <= 0.0) {
    local_34 = ABS(*(float *)(in_stack_00000004 + 0x1fc50) * (float)0.31830988619288902);
    if (iVar1 != *(int *)(in_stack_00000004 + 0x1fc84)) {
      local_34 = 0.0;
    }
    if (1.0 < local_34) {
      local_34 = 1.0;
    }
    fVar3 = (local_34 - *(float *)(in_stack_00000004 + 0x1fc54)) +
            *(float *)(in_stack_00000004 + 0x1fc54);
    *(float *)(in_stack_00000004 + 0x1fc54) = fVar3;
    if ((float)0.001 < fVar3) {
      *(int *)(in_stack_00000004 + 0x1fc84) = iVar1;
      return;
    }
  }
  else {
    fVar3 = *(float *)(in_stack_00000004 + 0x1fc58);
    fVar2 = fVar3 - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x1fc58) = fVar2;
    if (0.0 < fVar2) {
      in_stack_00000008 = in_stack_00000008 / fVar3;
    }
    else {
      in_stack_00000008 = 1.0 - *(float *)(in_stack_00000004 + 0x1fc54);
      *(uint *)(in_stack_00000004 + 0x1fc58) = 0;
    }
    fVar3 = *(float *)(in_stack_00000004 + 0x1fc54);
    fVar2 = fVar3 + in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x1fc54) = fVar2;
    if (fVar2 < 1.0) {
      *(float *)(in_stack_00000004 + 0x1fc50) =
           *(float *)(in_stack_00000004 + 0x1fc50) -
           (*(float *)(in_stack_00000004 + 0x1fc50) * in_stack_00000008) / (1.0 - fVar3);
      return;
    }
    *(uint *)(in_stack_00000004 + 0x1fc50) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc58) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc5c) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc54) = 0x3f800000;
  }
  return;
}
