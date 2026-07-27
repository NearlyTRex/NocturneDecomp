// Name: core_tvbat.cpp_FUN_0054bfd0
// Address: 0054bfd0
// Address Range: [[0054bfd0, 0054c03c]]
// Convention: unknown
// Signature: int core_tvbat_cpp_FUN_0054bfd0(int param_1)

#include "nocturne.h"

int core_tvbat_cpp_FUN_0054bfd0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if (*(int *)(param_1 + 0xbee0) == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0xbd28,*(uint *)(param_1 + 0xbd24),0xffffffff);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
