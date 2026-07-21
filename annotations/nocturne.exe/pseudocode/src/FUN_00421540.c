// Name: FUN_00421540
// Address: 00421540
// Address Range: [[00421540, 004216cf]]
// Convention: unknown
// Signature: int FUN_00421540(int param_1)

#include "nocturne.h"

int FUN_00421540(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  byte local_44 [24];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x2404) == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_44,0);
      iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
      if (iStack_14 != 0) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0xbd28)) {
          iStack_10 = param_1 + 0x12130;
          iStack_c = param_1 + 0xbd2c;
          iVar4 = param_1 + 0xbd40;
          pfVar3 = (float *)(param_1 + 0xbd34);
          do {
            iStack_8 = iStack_c + iVar1 * 0x40;
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                      (DAT_005ae704,iVar4,pfVar3);
            fStack_20 = *(float *)(param_1 + 0x20) + *pfVar3;
            fStack_1c = *(float *)(param_1 + 0x24) + pfVar3[1];
            fStack_18 = *(float *)(param_1 + 0x28) + pfVar3[2];
            if (&fStack_2c != &fStack_20) {
              fStack_2c = fStack_20;
              fStack_28 = fStack_1c;
              fStack_24 = fStack_18;
            }
            FUN_0050e370(0x01E57284,&fStack_2c);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                      (*(int *)(iStack_8 + 4) * 0x17c + iStack_10,0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
            iVar4 = iVar4 + 0x40;
            iVar1 = iVar1 + 1;
            pfVar3 = pfVar3 + 0x10;
          } while (iVar1 < *(int *)(param_1 + 0xbd28));
        }
        FUN_0050e370(0x01E57284,0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      return iStack_14;
    }
  }
  return 0;
}
