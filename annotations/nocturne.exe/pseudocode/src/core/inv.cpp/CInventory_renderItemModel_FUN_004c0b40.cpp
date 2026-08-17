// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
// Address: 004c0b40
// Address Range: [[004c0b40, 004c0f99]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

{
  CBoundingBox3D *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonSet *pCVar6;
  int iVar7;
  int iVar8;
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar9;
  CDemonActor *pCVar10;
  float fVar11;
  float fVar12;
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
  
  pCVar6 = g_CDemonSet_PTR_005be368;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < g_WindowWidth) {
      viewport_x = (viewport_x * 0x280) / g_WindowWidth;
      viewport_y = (viewport_y * 0x1e0) / g_WindowHeight;
      viewport_size = (viewport_size * 0x280) / g_WindowWidth;
    }
    g_CDemonSet_PTR_005be368->rendering_mode = 1;
    (pCVar6->light_direction).x = -0x482b;
    (pCVar6->light_direction).y = -0x482b;
    (pCVar6->light_direction).z = 0x482b;
    pCVar6->ambient_base_quick = 32000;
    _DAT_01cc30a4 =
         _DAT_01cc30a4 +
         ((int)((_DAT_01bd1d80 + (_DAT_01bd1d80 >> 0x1f) * -4) -
               (uint)((_DAT_01bd1d80 >> 0x1f) << 1 < 0)) >> 2);
    iVar7 = engine_matrix_c_interpolatedSin_FUN_004cca60(_DAT_01cc30a4);
    iVar8 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(_DAT_01cc30a4);
    (g_CDemonSet_PTR_005be368->light_direction).x =
         (uint)((longlong)iVar7 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar7 * 0x482b) >> 0x20) << 0x10;
    (g_CDemonSet_PTR_005be368->light_direction).z =
         (uint)((longlong)iVar8 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar8 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
              (g_CDemonRenderer_PTR_005ae704,viewport_x,viewport_y,viewport_size,viewport_size);
    this_ptr_00 = core_inv_cpp_getItemModel_FUN_004beb40(item);
    pCVar9 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr_00);
    pCVar1 = pCVar9->frame_bounds;
    fVar11 = (pCVar1->min).x;
    fVar12 = (pCVar1->min).y;
    fVar2 = (pCVar1->min).z;
    fVar3 = (pCVar1->max).x;
    fVar4 = (pCVar1->max).y;
    fVar5 = (pCVar1->max).z;
    local_2c = (fVar3 - fVar11) * 0.5f;
    local_28 = (fVar4 - fVar12) * 0.5f;
    local_24 = (fVar5 - fVar2) * 0.5f;
    if (((local_2c <= local_28) || (local_14 = local_2c, local_2c <= local_24)) &&
       (local_14 = local_24, local_24 < local_28)) {
      local_14 = local_28;
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(item,"CGun");
    if ((iVar7 != 0) ||
       (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(item,"CKeyActor"), iVar7 != 0)) {
      local_14 = local_14 * (float)2;
    }
    local_50.z = -local_14 * (float)2;
    local_50.x = 0.0;
    local_50.y = 0.0;
    local_18 = local_50.z;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
              (g_CDemonRenderer_PTR_005ae704,&local_50);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
              (g_CDemonRenderer_PTR_005ae704,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
              (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_02dd1184);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_02dd1184);
    local_44 = fVar11 + fVar3;
    local_5c.x = local_44 * -0.5f;
    local_40 = fVar12 + fVar4;
    local_3c = fVar2 + fVar5;
    local_5c.y = local_40 * -0.5f;
    local_5c.z = local_3c * -0.5f;
    _DAT_01c038f4 = 0;
    local_38.x = 0.0;
    local_38.z = 0.0;
    local_38.y = rotation_y;
    iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(item,"CKeyActor");
    if (iVar7 != 0) {
      local_38.x = local_38.x + 1.570796f;
    }
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040d890(item,g_CMeleeActorType_01cc56a4.name_hash)
    ;
    if (pCVar10 != (CDemonActor *)0x0) {
      iVar7 = _stricmp(pCVar10[1].create_event,"axe1.kfm");
      if (iVar7 == 0) {
        local_38.x = local_38.x + -1.570796f;
        local_38.z = local_38.z + -1.570796f;
      }
      iVar7 = _stricmp(pCVar10[1].create_event,"ax.kfm");
      if (iVar7 == 0) {
        local_38.x = local_38.x + -1.570796f;
        local_38.z = local_38.z + -1.570796f;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (g_CDemonRenderer_PTR_005ae704,&local_38,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (g_CDemonRenderer_PTR_005ae704,(CVector3f *)&DAT_02dd1184,&local_5c);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (g_CDemonRenderer_PTR_005ae704,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
                (g_CDemonRenderer_PTR_005ae704,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (this_ptr_00,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
                (g_CDemonRenderer_PTR_005ae704);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(this_ptr_00,0.0,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(g_CDemonRenderer_PTR_005ae704);
    g_CDemonSet_PTR_005be368->rendering_mode = 0;
  }
  return;
}
