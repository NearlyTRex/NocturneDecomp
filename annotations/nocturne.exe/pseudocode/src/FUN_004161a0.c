// Name: FUN_004161a0
// Address: 004161a0
// Address Range: [[004161a0, 004162f7]]
// Convention: unknown
// Signature: undefined4 FUN_004161a0(int param_1)

#include "nocturne.h"

uint FUN_004161a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_20 [24];
  int iStack_8;
  
  if (*(int *)(param_1 + 0x150) < 2) {
    *(uint *)(0x01E57284 + 0x15a8a0) = *(uint *)(param_1 + 0xc98);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
    *(int *)(param_1 + 0xf14) = iVar2;
    if (iVar2 != 0) {
      if ((*(int *)(param_1 + 0xc9c) == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
         iVar2 != 0)) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(param_1,0xffffffff);
      }
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x284)) {
        iStack_8 = param_1 + 0x288;
        iVar3 = param_1 + 0x2a0;
        iVar4 = param_1 + 0x294;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,iVar4,iVar2 * 0x194 + iStack_8);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                    (iVar3,0,0xffffffff);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x194;
          iVar3 = iVar3 + 0x194;
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
        } while (iVar2 < *(int *)(param_1 + 0x284));
      }
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    return *(uint *)(param_1 + 0xf14);
  }
  if ((*(int *)(param_1 + 0xf14) != 0) && (0 < *(int *)(param_1 + 0x744))) {
    return 1;
  }
  return 0;
}
