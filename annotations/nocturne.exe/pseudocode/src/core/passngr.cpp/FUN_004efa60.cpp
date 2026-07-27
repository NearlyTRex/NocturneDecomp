// Name: core_passngr.cpp_FUN_004efa60
// Address: 004efa60
// Address Range: [[004efa60, 004efb2f]]
// Convention: unknown
// Signature: int core_passngr_cpp_FUN_004efa60(int param_1)

#include "nocturne.h"

int core_passngr_cpp_FUN_004efa60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte local_1c [24];
  
  if ((*(float *)(param_1 + 0x202a8) <= 1.0) && (*(int *)(param_1 + 0x2404) == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
    if (iVar3 != 0) {
      if ((*(uint *)(param_1 + 0x202a8) & 0x7fffffff) != 0) {
        iVar1 = param_1 + 0x1f67c;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(iVar1,0,param_1 + 0x150,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                  (iVar1,1,*(int *)(param_1 + 0x1f678) + 0x150,0);
        core_morph_cpp_CMorph_render_FUN_004e0820(iVar1,*(uint *)(param_1 + 0x202a8));
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
        return iVar3;
      }
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iVar3;
  }
  return 0;
}
