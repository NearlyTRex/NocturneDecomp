// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
// Address: 004fee00
// Address Range: [[004fee00, 004ff201]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004fee00(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,int rotation_y,int alpha)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004fee00(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,int rotation_y,int alpha)

{
  int iVar11;
  int iVar12;
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar13;
  int iVar1;
  CMelee *pCVar14;
  float fVar10;
  CVector3i local_50;
  CVector3i local_44;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  float local_18;
  float local_14;
  float fVar8;
  float fVar9;
  float fVar4;
  float fVar5;
  float fVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  CDemonSet *pCVar10;
  CVector3f *pCVar1;
  
  pCVar10 = g_CDemonSetPtr;
  if (item != (CDemonActor *)0x0) {
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar10->light_direction).x = -0x482b;
    (pCVar10->light_direction).y = -0x482b;
    (pCVar10->light_direction).z = 0x482b;
    pCVar10->ambient_base_quick = 32000;
    INT_02dcd794 = INT_02dcd794 +
                   ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
                         (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2);
    iVar11 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(INT_02dcd794);
    iVar12 = engine_matrix_c_interpolatedCos_FUN_0050c600(INT_02dcd794);
    (g_CDemonSetPtr->light_direction).x =
         (uint)((longlong)iVar11 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar11 * 0x482b) >> 0x20) << 0x10;
    (g_CDemonSetPtr->light_direction).z =
         (uint)((longlong)iVar12 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar12 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
              (g_CDemonRendererPtr2,viewport_x,viewport_y,viewport_size,viewport_size);
    this_ptr_00 = core_inv_cpp_getItemModel_FUN_004fcda0(item);
    pCVar13 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
    pCVar1 = pCVar13->frame_bounds;
    fVar10 = pCVar1->x;
    fVar3 = pCVar1->y;
    fVar4 = pCVar1->z;
    fVar5 = pCVar1[1].x;
    fVar6 = pCVar1[1].y;
    fVar7 = pCVar1[1].z;
    local_14 = (fVar5 - fVar10) * 0.5f;
    fVar8 = (fVar6 - fVar3) * 0.5f;
    fVar9 = (fVar7 - fVar4) * 0.5f;
    if (((local_14 <= fVar8) || (local_14 <= fVar9)) && (local_14 = fVar9, fVar9 < fVar8)) {
      local_14 = fVar8;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CGun");
    if ((iVar1 != 0) ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CKeyActor"), iVar1 != 0)) {
      local_14 = local_14 * (float)2;
    }
    local_44.z = (int)(-local_14 * (float)2);
    local_44.x = 0;
    local_44.y = 0;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr2,&local_44);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    local_50.x = (int)((fVar10 + fVar5) * -0.5f);
    local_50.y = (int)((fVar3 + fVar6) * -0.5f);
    local_50.z = (int)((fVar4 + fVar7) * -0.5f);
    g_PerspectiveReciprocal = 0;
    local_2c.x = 0;
    local_2c.z = 0;
    local_2c.y = rotation_y;
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CKeyActor");
    if (iVar1 != 0) {
      local_2c.x = (int)((float)local_2c.x + 1.570796f);
    }
    pCVar14 = (CMelee *)
              core_actor_cpp_castToClassHash_FUN_0040c790(item,g_CMeleeClassInfo.name_hash);
    if (pCVar14 != (CMelee *)0x0) {
      iVar1 = _stricmp
                        ((pCVar14->base).model.model_name,"axe1.kfm");
      if (iVar1 == 0) {
        local_2c.x = (int)((float)local_2c.x + -1.570796f);
        local_2c.z = (int)((float)local_2c.z + -1.570796f);
      }
      iVar1 = _stricmp((pCVar14->base).model.model_name,"ax.kfm")
      ;
      if (iVar1 == 0) {
        local_2c.x = (int)((float)local_2c.x + -1.570796f);
        local_2c.z = (int)((float)local_2c.z + -1.570796f);
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&local_2c,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&g_ZeroVector.i,&local_50);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (this_ptr_00,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(this_ptr_00,0.0,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0();
    g_CDemonSetPtr->rendering_mode = 0;
    return;
  }
  return;
}
