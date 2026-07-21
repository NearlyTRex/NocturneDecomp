// Name: core_fire.cpp_CBulletTrail_render_FUN_004856c0
// Address: 004856c0
// Address Range: [[004856c0, 004858e7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004856c0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004856c0(float *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  float local_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  uint local_20;
  float fStack_1c;
  int local_18;
  
  local_60 = param_1[3] - *param_1;
  local_5c = param_1[4] - param_1[1];
  local_58 = param_1[5] - param_1[2];
  fVar2 = param_1[6];
  local_6c = *(float *)((int)fVar2 + 0x344) - *(float *)((int)fVar2 + 0x338);
  local_68 = *(float *)((int)fVar2 + 0x348) - *(float *)((int)fVar2 + 0x33c);
  local_64 = *(float *)((int)fVar2 + 0x34c) - *(float *)((int)fVar2 + 0x340);
  local_7c[0] = SQRT(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) - local_64;
  if (0.0 < local_7c[0]) {
    local_20 = 2;
    if (0.0 < param_1[7]) {
      fVar4 = (float10)round((float10)local_7c[0] / (float10)param_1[7]);
      local_24 = (int)ROUND(fVar4);
      if (local_24 < 2) {
        local_24 = 2;
      }
      else if (100 < local_24) {
        local_24 = 100;
      }
    }
    local_18 = local_24;
    local_28 = (float)local_24;
    local_50 = 1.0 / local_28;
    local_58 = local_64 * local_50;
    local_54 = local_60 * local_50;
    local_50 = local_5c * local_50;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_7c,&local_64);
    iVar3 = 0;
    if (0 < local_24) {
      iVar1 = local_24 + -1;
      do {
        while( true ) {
          fStack_1c = (float)iVar3;
          fVar2 = ((float)iVar3 * _DAT_0058115c) / (float)iVar1;
          if (fVar2 <= (float)_DAT_00581164) break;
          local_34 = local_58 * fStack_1c;
          local_30 = local_54 * fStack_1c;
          local_2c = local_50 * fStack_1c;
          local_40 = *param_1 + local_34;
          local_3c = param_1[1] + local_30;
          local_38 = param_1[2] + local_2c;
          local_18 = iVar1;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                    (DAT_005ae704,&local_40);
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,local_7c,&local_4c);
          uVar5 = 0x4858ac;
          fVar4 = (float10)round((float10)fVar2);
          fStack_1c = (float)(int)ROUND(fVar4);
          core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                    (param_1[6],0,0,fStack_1c,uVar5);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
          iVar3 = iVar3 + 1;
          if ((int)local_28 <= iVar3) {
            return;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_24);
    }
  }
  return;
}
