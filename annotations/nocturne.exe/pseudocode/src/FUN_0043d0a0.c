// Name: FUN_0043d0a0
// Address: 0043d0a0
// Address Range: [[0043d0a0, 0043d11e]]
// Convention: unknown
// Signature: int FUN_0043d0a0(int param_1)

#include "nocturne.h"

int FUN_0043d0a0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_24 [24];
  uint uStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_24,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  uStack_c = core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043d810(param_1,0xffffffff);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(param_1 + 0x150,uStack_c)
  ;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
