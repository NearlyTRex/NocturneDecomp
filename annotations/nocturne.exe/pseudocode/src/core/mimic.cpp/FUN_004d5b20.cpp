// Name: core_mimic.cpp_FUN_004d5b20
// Address: 004d5b20
// Address Range: [[004d5b20, 004d5ba1]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004d5b20(int param_1,int param_2)

#include "nocturne.h"

void core_mimic_cpp_FUN_004d5b20(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if (*(int *)(param_1 + 0xbc90) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x2404) = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
    if (iVar2 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                (param_1 + 0x150,0xffffffff,0xffffffff,1,0);
      core_cloth_cpp_CCloth_render_FUN_00437db0(param_1 + 0xbdec,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  }
  return;
}
