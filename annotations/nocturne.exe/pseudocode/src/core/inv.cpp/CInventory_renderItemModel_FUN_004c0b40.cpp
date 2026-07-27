// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
// Address: 004c0b40
// Address Range: [[004c0b40, 004c0f99]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float local_5c;
  float local_58;
  float local_54;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  iVar8 = 0x01E57284;
  if (param_2 != 0) {
    if (0x280 < DAT_005b761c) {
      param_3 = (param_3 * 0x280) / DAT_005b761c;
      param_4 = (param_4 * 0x1e0) / DAT_005b7620;
      param_5 = (param_5 * 0x280) / DAT_005b761c;
    }
    *(uint *)(0x01E57284 + 0x15aa88) = 1;
    *(uint *)(iVar8 + 0x15aa8c) = 0xffffb7d5;
    *(uint *)(iVar8 + 0x15aa90) = 0xffffb7d5;
    *(uint *)(iVar8 + 0x15aa94) = 0x482b;
    *(uint *)(iVar8 + 0x15aa98) = 32000;
    _DAT_01cc30a4 =
         _DAT_01cc30a4 +
         ((int)((_DAT_01bd1d80 + (_DAT_01bd1d80 >> 0x1f) * -4) -
               (uint)((_DAT_01bd1d80 >> 0x1f) << 1 < 0)) >> 2);
    iVar8 = engine_matrix_c_interpolatedSin_FUN_004cca60(_DAT_01cc30a4);
    iVar9 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(_DAT_01cc30a4);
    *(uint *)(0x01E57284 + 0x15aa8c) =
         (uint)((longlong)iVar8 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar8 * 0x482b) >> 0x20) << 0x10;
    *(uint *)(0x01E57284 + 0x15aa94) =
         (uint)((longlong)iVar9 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar9 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
              (DAT_005ae704,param_3,param_4,param_5,param_5);
    uVar10 = core_inv_cpp_getItemModel_FUN_004beb40(param_2);
    iVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(uVar10);
    pfVar1 = *(float **)(iVar8 + 0x350);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    fVar6 = pfVar1[4];
    fVar7 = pfVar1[5];
    local_2c = (fVar5 - fVar2) * 0.5f;
    local_28 = (fVar6 - fVar3) * 0.5f;
    local_24 = (fVar7 - fVar4) * 0.5f;
    if (((local_2c <= local_28) || (local_14 = local_2c, local_2c <= local_24)) &&
       (local_14 = local_24, local_24 < local_28)) {
      local_14 = local_28;
    }
    iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CGun");
    if ((iVar8 != 0) ||
       (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CKeyActor"), iVar8 != 0)) {
      local_14 = local_14 * (float)2;
    }
    local_48 = -local_14 * (float)2;
    local_50 = 0;
    local_4c = 0;
    local_18 = local_48;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
              (DAT_005ae704,&local_50);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,0x42100000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(DAT_005ae704,&DAT_02dd1184);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&DAT_02dd1184);
    local_44 = fVar2 + fVar5;
    local_5c = local_44 * -0.5f;
    local_40 = fVar3 + fVar6;
    local_3c = fVar4 + fVar7;
    local_58 = local_40 * -0.5f;
    local_54 = local_3c * -0.5f;
    _DAT_01c038f4 = 0;
    local_38 = 0.0;
    local_30 = 0.0;
    local_34 = param_6;
    iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CKeyActor");
    if (iVar8 != 0) {
      local_38 = local_38 + 1.570796f;
    }
    iVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (param_2,g_CMeleeActorType_01cc56a4.name_hash);
    if (iVar8 != 0) {
      iVar9 = _stricmp(iVar8 + 0x1c8,"axe1.kfm");
      if (iVar9 == 0) {
        local_38 = local_38 + -1.570796f;
        local_30 = local_30 + -1.570796f;
      }
      iVar8 = _stricmp(iVar8 + 0x1c8,"ax.kfm");
      if (iVar8 == 0) {
        local_38 = local_38 + -1.570796f;
        local_30 = local_30 + -1.570796f;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,&local_38,0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&DAT_02dd1184,&local_5c);
    if (param_7 < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,param_7);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(uVar10,0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(uVar10,0,0xffffffff);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
    *(uint *)(0x01E57284 + 0x15aa88) = 0;
  }
  return;
}
