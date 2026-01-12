// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
// Address: 004fee00
// Address Range: [[004fee00, 004ff183] [004ff1ba, 004ff201]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderItemModel_FUN_004fee00(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, int viewport_size, int rotation_y, int alpha)

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
          (CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,
          int rotation_y,int alpha)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonSet *pCVar8;
  int iVar9;
  int iVar10;
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *pCVar11;
  CDemonActor *pCVar12;
  BADSPACEBASE *in_ESP;
  char *pcVar13;
  float fVar14;
  CVector3i local_50;
  CVector3i local_44;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  float local_18;
  float local_14;
  
  pCVar8 = g_CDemonSetPtr;
  if (item != (CDemonActor *)0x0) {
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar8->light_direction).x = -0x482b;
    (pCVar8->light_direction).y = -0x482b;
    (pCVar8->light_direction).z = 0x482b;
    pCVar8->ambient_base_quick = 32000;
    INT_02dcd794 = INT_02dcd794 +
                   ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
                         (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2);
    iVar9 = engine_matrix_c_interpolatedSin_FUN_0050c5c0((ushort)INT_02dcd794);
    iVar10 = engine_matrix_c_interpolatedCos_FUN_0050c600((ushort)INT_02dcd794);
    (g_CDemonSetPtr->light_direction).x =
         (uint)((longlong)iVar9 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar9 * 0x482b) >> 0x20) << 0x10;
    (g_CDemonSetPtr->light_direction).z =
         (uint)((longlong)iVar10 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar10 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
              (g_CDemonRendererPtr,viewport_x,viewport_y,viewport_size,viewport_size);
    this_ptr_00 = core_inv_cpp_getItemModel_FUN_004fcda0(item);
    pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
    pCVar1 = pCVar11->frame_bounds;
    fVar14 = pCVar1->y;
    fVar2 = pCVar1->z;
    fVar3 = pCVar1[1].x;
    fVar4 = pCVar1[1].y;
    local_38 = fVar3 - pCVar1->x;
    local_34 = fVar4 - fVar14;
    fVar5 = pCVar1[1].z;
    local_14 = local_38 * 0.5f;
    local_30 = fVar5 - fVar2;
    fVar6 = local_34 * 0.5f;
    fVar7 = local_30 * 0.5f;
    if (((local_14 <= fVar6) || (local_14 <= fVar7)) && (local_14 = fVar7, fVar7 < fVar6)) {
      local_14 = fVar6;
    }
    pcVar13 = "CGun";
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CGun");
    if ((iVar9 != 0) ||
       (iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CKeyActor"), iVar9 != 0)) {
      local_14 = local_14 * (float)2;
    }
    local_44.z = (int)(-local_14 * (float)2);
    local_44.x = 0;
    local_44.y = 0;
    local_18 = (float)local_44.z;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
              (g_CDemonRendererPtr,&local_44);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    local_50.x = (int)(((float)pcVar13 + fVar3) * -0.5f);
    local_50.y = (int)((fVar14 + fVar4) * -0.5f);
    local_50.z = (int)((fVar2 + fVar5) * -0.5f);
    g_PerspectiveReciprocal = 0.0;
    local_2c.x = 0;
    local_2c.z = 0;
    local_2c.y = rotation_y;
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item,"CKeyActor");
    if (iVar9 != 0) {
      local_2c.x = (int)((float)local_2c.x + 1.570796f);
    }
    pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790(item,g_CMeleeClassInfo.name_hash);
    if (pCVar12 != (CDemonActor *)0x0) {
      iVar9 = crt_string_c_stricmp_FUN_005fe7f0(pCVar12[1].create_event,"axe1.kfm");
      if (iVar9 == 0) {
        local_2c.x = (int)((float)local_2c.x + -1.570796f);
        local_2c.z = (int)((float)local_2c.z + -1.570796f);
      }
      iVar9 = crt_string_c_stricmp_FUN_005fe7f0(pCVar12[1].create_event,"ax.kfm");
      if (iVar9 == 0) {
        local_2c.x = (int)((float)local_2c.x + -1.570796f);
        local_2c.z = (int)((float)local_2c.z + -1.570796f);
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,&local_2c,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,&local_50);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (this_ptr_00,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(this_ptr_00,0.0,-1);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
    g_CDemonSetPtr->rendering_mode = 0;
    return;
  }
  return;
}
