// Name: core_wateract.cpp_FUN_00551c00
// Address: 00551c00
// Address Range: [[00551c00, 00551e35]]
// Convention: unknown
// Signature: int core_wateract_cpp_FUN_00551c00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_wateract_cpp_FUN_00551c00(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  byte local_24 [24];
  int iStack_c;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_24,0);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar4);
    if (iStack_c != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (DAT_005ae704,*(uint *)(param_1 + 0x15c));
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (DAT_005ae704,&DAT_005c13cc + *(int *)(param_1 + 0x2b220) * 0x18);
      if (0 < *(int *)(param_1 + 0x290)) {
        piVar5 = (int *)&DAT_02dda6b8;
        pfVar6 = (float *)(param_1 + 0x294);
        do {
          *piVar5 = (int)ROUND(*pfVar6 * _DAT_005a3ed0);
          piVar5[1] = (int)ROUND(pfVar6[1] * _DAT_005a3ed0);
          piVar5[2] = (int)ROUND(pfVar6[2] * _DAT_005a3ed0);
          iVar3 = iVar3 + 1;
          pfVar6 = pfVar6 + 8;
          piVar5 = piVar5 + 3;
        } while (iVar3 < *(int *)(param_1 + 0x290));
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
                (0x01E57284,*(uint *)(param_1 + 0x290),&DAT_02dda6b8);
      if (0 < *(int *)(param_1 + 0x290)) {
        iVar7 = param_1 + 0x2a0;
        iVar8 = 0;
        do {
          core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                    (0x01E57284,iVar7,&DAT_02dd1184,iVar3);
          iVar1 = *DAT_005ae704;
          lVar2 = (longlong)(*(int *)(param_1 + 0x284) << 8) *
                  (longlong)*(int *)(iVar1 + 0x20 + iVar8);
          *(uint *)(iVar1 + 0x20 + iVar8) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(*(int *)(param_1 + 0x288) << 8) *
                  (longlong)*(int *)(iVar1 + 0x24 + iVar8);
          *(uint *)(iVar1 + 0x24 + iVar8) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          piVar5 = (int *)(iVar1 + 0x28 + iVar8);
          iVar8 = iVar8 + 0x30;
          lVar2 = (longlong)(*(int *)(param_1 + 0x28c) << 8) * (longlong)*piVar5;
          *(uint *)(iVar1 + -8 + iVar8) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 0x20;
        } while (iVar3 < *(int *)(param_1 + 0x290));
      }
      iVar3 = param_1 + 0x7fa0;
      if (*(int *)(param_1 + 0x15c) < 0xfde9) {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x2b22c)) {
          do {
            iVar7 = iVar7 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                      (DAT_005ae704,iVar3,0x267);
            iVar3 = iVar3 + 0x48;
          } while (iVar7 < *(int *)(param_1 + 0x2b22c));
        }
      }
      else {
        core_set_cpp_FUN_0050ddd0(0x01E57284,iVar3,*(uint *)(param_1 + 0x2b22c),0xffffffff);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iStack_c;
  }
  return 0;
}
