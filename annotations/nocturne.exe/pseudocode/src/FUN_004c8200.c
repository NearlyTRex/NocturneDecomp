// Name: FUN_004c8200
// Address: 004c8200
// Address Range: [[004c8200, 004c8288]]
// Convention: unknown
// Signature: int FUN_004c8200(int param_1)

#include "nocturne.h"

int FUN_004c8200(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_1c [24];
  
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      if (iVar1 != 0) {
        core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
                  (param_1 + 0x20,param_1 + 0x30,*(uint *)(param_1 + 0x150),
                   *(uint *)(param_1 + 0x154));
      }
      return iVar1;
    }
  }
  return 0;
}
