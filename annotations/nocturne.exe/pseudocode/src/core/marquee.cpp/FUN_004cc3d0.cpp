// Name: core_marquee.cpp_FUN_004cc3d0
// Address: 004cc3d0
// Address Range: [[004cc3d0, 004cc437]]
// Convention: unknown
// Signature: undefined4 core_marquee_cpp_FUN_004cc3d0(int param_1)

#include "nocturne.h"

uint core_marquee_cpp_FUN_004cc3d0(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_1c [24];
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x194) = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  uVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
  *(uint *)(param_1 + 0x194) = uVar2;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return *(uint *)(param_1 + 0x194);
}
