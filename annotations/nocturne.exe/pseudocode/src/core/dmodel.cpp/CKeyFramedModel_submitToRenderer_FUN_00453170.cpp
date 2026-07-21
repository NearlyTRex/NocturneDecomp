// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170
// Address: 00453170
// Address Range: [[00453170, 004533d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(int param_1,int *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(int param_1,int *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int *local_20;
  int local_1c;
  
  if (0 < *(int *)(param_1 + 0x110)) {
    if (*(int *)(param_1 + 0x360) == 0) {
      if ((0 < *(int *)(param_1 + 0x100)) ||
         (fVar1 = *(float *)(param_1 + 0x344) - *(float *)(param_1 + 0x338),
         fVar2 = *(float *)(param_1 + 0x348) - *(float *)(param_1 + 0x33c),
         fVar3 = *(float *)(param_1 + 0x34c) - *(float *)(param_1 + 0x340),
         (float)_DAT_0057cb6e < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
    }
    iVar9 = -1;
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    local_24 = 0;
    if (0 < *(int *)(param_1 + 0x244)) {
      local_1c = param_1;
      local_20 = param_2;
      iVar8 = 0;
      do {
        iVar5 = *(int *)(local_1c + 0x24c) + iVar8;
        if ((param_2 == (int *)0x0) || (*local_20 != 0)) {
          if ((*(int *)(param_1 + 0x120) < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                        (DAT_005ae704,param_1 + 0x124);
            }
            FUN_0050ddd0(0x01E57284,*(int *)(param_1 + 0x114) + iVar8 * 0x48,iVar5 - iVar8,param_3
                        );
          }
          else {
            while (iVar8 < iVar5) {
              iVar6 = *(int *)(*(int *)(param_1 + 0x118) + iVar8 * 4);
              if (iVar9 != iVar6) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                          (DAT_005ae704,iVar6 * 0x48 + param_1 + 0x124);
                iVar9 = *(int *)(*(int *)(param_1 + 0x118) + iVar8 * 4);
              }
              iVar6 = iVar8 * 4;
              iVar7 = iVar8;
              do {
                iVar6 = iVar6 + 4;
                iVar7 = iVar7 + 1;
                if (iVar5 * 4 <= iVar6) break;
              } while (iVar9 == *(int *)(*(int *)(param_1 + 0x118) + iVar6));
              FUN_0050ddd0(0x01E57284,*(int *)(param_1 + 0x114) + iVar8 * 0x48,iVar7 - iVar8,
                           param_3);
              iVar8 = iVar7;
            }
          }
        }
        local_1c = local_1c + 8;
        local_20 = local_20 + 1;
        local_24 = local_24 + 1;
        iVar8 = iVar5;
      } while (local_24 < *(int *)(param_1 + 0x244));
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  }
  return;
}
