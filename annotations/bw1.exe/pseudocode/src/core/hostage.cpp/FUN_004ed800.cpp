// Name: core_hostage.cpp_FUN_004ed800
// Address: 004ed800
// Address Range: [[004ed800, 004ed84f]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_FUN_004ed800(int param_1)

#include "nocturne.h"

uint core_hostage_cpp_FUN_004ed800(int param_1)

{
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1fe8c) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1fe6c) == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)(param_1 + 0x158));
      if (*(int *)(pSVar2 + 0x24) == 10) {
        return 0;
      }
    }
  }
  uVar3 = core_npc_cpp_FUN_00531b10(param_1);
  return uVar3;
}
