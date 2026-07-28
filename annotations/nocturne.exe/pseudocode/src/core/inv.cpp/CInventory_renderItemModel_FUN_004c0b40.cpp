// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
// Address: 004c0b40
// Address Range: [[004c0b40, 004c0f99]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

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
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar10;
  CDemonActor *pCVar11;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  iVar8 = 0x01E57284;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < DAT_005b761c) {
      viewport_x = (viewport_x * 0x280) / DAT_005b761c;
      viewport_y = (viewport_y * 0x1e0) / DAT_005b7620;
      viewport_size = (viewport_size * 0x280) / DAT_005b761c;
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
              (DAT_005ae704,viewport_x,viewport_y,viewport_size,viewport_size);
    this_ptr_00 = (CKeyFramedModelInstance *)core_inv_cpp_getItemModel_FUN_004beb40(item);
    pCVar10 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr_00);
    pfVar1 = (float *)pCVar10->texture_list[7].textures[2].base.count;
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
    iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(item,"CGun");
    if ((iVar8 != 0) ||
       (iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(item,"CKeyActor"), iVar8 != 0)) {
      local_14 = local_14 * (float)2;
    }
    local_50.z = -local_14 * (float)2;
    local_50.x = 0.0;
    local_50.y = 0.0;
    local_18 = local_50.z;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
              (DAT_005ae704,&local_50);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
              (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,(CVector3f *)&DAT_02dd1184);
    local_44 = fVar2 + fVar5;
    local_5c.x = local_44 * -0.5f;
    local_40 = fVar3 + fVar6;
    local_3c = fVar4 + fVar7;
    local_5c.y = local_40 * -0.5f;
    local_5c.z = local_3c * -0.5f;
    _DAT_01c038f4 = 0;
    local_38.x = 0.0;
    local_38.z = 0.0;
    local_38.y = rotation_y;
    iVar8 = core_actor_cpp_isOfClass_FUN_0040d7e0(item,"CKeyActor");
    if (iVar8 != 0) {
      local_38.x = local_38.x + 1.570796f;
    }
    pCVar11 = core_actor_cpp_castToClassHash_FUN_0040d890(item,g_CMeleeActorType_01cc56a4.name_hash)
    ;
    if (pCVar11 != (CDemonActor *)0x0) {
      iVar8 = _stricmp(pCVar11[1].create_event,"axe1.kfm");
      if (iVar8 == 0) {
        local_38.x = local_38.x + -1.570796f;
        local_38.z = local_38.z + -1.570796f;
      }
      iVar8 = _stricmp(pCVar11[1].create_event,"ax.kfm");
      if (iVar8 == 0) {
        local_38.x = local_38.x + -1.570796f;
        local_38.z = local_38.z + -1.570796f;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_38,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,(CVector3f *)&DAT_02dd1184,&local_5c);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (this_ptr_00,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(this_ptr_00,0.0,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
    *(uint *)(0x01E57284 + 0x15aa88) = 0;
  }
  return;
}
