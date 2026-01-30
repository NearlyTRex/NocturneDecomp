// Name: core_stranger.cpp_CStranger_FUN_005bf800
// Address: 005bf800
// Address Range: [[005bf800, 005bfb09]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bf800(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bf800(CStranger* param_1,
   uint param_2) */

void __cdecl core_stranger_cpp_CStranger_FUN_005bf800(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_34;
  
  *(uint *)(in_stack_00000004 + 0x1fc80) = 0;
  *(uint *)(in_stack_00000004 + 0x1fc7c) = *(uint *)(in_stack_00000004 + 0x1fc80);
  *(uint *)(in_stack_00000004 + 0x1fc78) = *(uint *)(in_stack_00000004 + 0x1fc7c);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    ((CMotionController *)(in_stack_00000004 + 0x158),0);
  if ((fVar4 <= 0.0) || (1.0 <= *(float *)(in_stack_00000004 + 0x1fc54))) {
    *(uint *)(in_stack_00000004 + 0x1fc50) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc84) = 0xffffffff;
    *(uint *)(in_stack_00000004 + 0x1fc58) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc5c) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc54) = 0;
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * in_stack_00000008 * (float)10;
    if (fVar4 <= ABS(*(float *)(in_stack_00000004 + 0x1fc50))) {
      if (0.0 <= *(float *)(in_stack_00000004 + 0x1fc50)) {
        *(float *)(in_stack_00000004 + 0x1fc50) = *(float *)(in_stack_00000004 + 0x1fc50) - fVar4;
      }
      else {
        *(float *)(in_stack_00000004 + 0x1fc50) = *(float *)(in_stack_00000004 + 0x1fc50) + fVar4;
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
    fVar4 = (local_34 - *(float *)(in_stack_00000004 + 0x1fc54)) +
            *(float *)(in_stack_00000004 + 0x1fc54);
    *(float *)(in_stack_00000004 + 0x1fc54) = fVar4;
    if ((float)0.001 < fVar4) {
      *(int *)(in_stack_00000004 + 0x1fc84) = iVar1;
      return;
    }
  }
  else {
    fVar4 = *(float *)(in_stack_00000004 + 0x1fc58);
    fVar2 = fVar4 - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x1fc58) = fVar2;
    if (0.0 < fVar2) {
      fVar4 = in_stack_00000008 / fVar4;
    }
    else {
      fVar4 = 1.0 - *(float *)(in_stack_00000004 + 0x1fc54);
      *(uint *)(in_stack_00000004 + 0x1fc58) = 0;
    }
    fVar2 = *(float *)(in_stack_00000004 + 0x1fc54);
    fVar3 = fVar2 + fVar4;
    *(float *)(in_stack_00000004 + 0x1fc54) = fVar3;
    if (fVar3 < 1.0) {
      *(float *)(in_stack_00000004 + 0x1fc50) =
           *(float *)(in_stack_00000004 + 0x1fc50) -
           (*(float *)(in_stack_00000004 + 0x1fc50) * fVar4) / (1.0 - fVar2);
      return;
    }
    *(uint *)(in_stack_00000004 + 0x1fc50) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc58) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc5c) = 0;
    *(uint *)(in_stack_00000004 + 0x1fc54) = 0x3f800000;
  }
  return;
}
