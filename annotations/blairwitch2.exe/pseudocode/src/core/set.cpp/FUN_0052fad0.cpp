// Name: core_set.cpp_FUN_0052fad0
// Address: 0052fad0
// Address Range: [[0052fad0, 0052fe9a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052fad0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0052fad0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  CDemonLight *pCVar4;
  CSkeleton *this_ptr_00;
  int iVar5;
  CDemonSet *pCVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1060 [1009];
  uint *puVar9;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_6c;
  float local_60;
  float local_5c;
  float local_54;
  float local_48;
  CVector3i local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  CDemonLight *local_14;
  
  bVar8 = 0;
  iVar7 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_14 = &g_CDemonLightInstance;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)(iVar7 + 0x2b4));
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"@Bip01 Head" + 1,0)
  ;
  local_80 = 0x3ead0e56;
  local_18 = iVar7 + 0x1134 + iVar5 * 0x30;
  local_7c = 0x3f400000;
  local_84 = 0;
  core_xform_cpp_FUN_00591530(&stack0xffffff7c,local_18);
  puVar9 = &stack0xffffff88;
  local_78 = local_6c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  core_actor_cpp_FUN_00408d70(iVar7,puVar9);
  iVar5 = local_18;
  local_24.x = local_54;
  *(uint *)((int)&local_24 + (uint)bVar8 * -8 + 4) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar8 * -8);
  *(uint *)((int)&local_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(iVar5);
  local_30.y = 0.0;
  local_30.z = 0.0;
  local_60 = local_48;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  g_CDemonLightInstance.volumetric_enabled = 0;
  local_30.x = local_60 + (float)_DAT_005e590a;
  local_30.y = local_5c + *(float *)(iVar7 + 0x34);
  if ((CVector3f *)&stack0x00000000 != g_CDemonLightInstance.base.base.rotation_matrix.m + 2) {
    g_CDemonLightInstance.base.base.position.f.x = local_24.x;
    g_CDemonLightInstance.base.base.position.f.y = local_24.y;
    g_CDemonLightInstance.base.base.position.f.z = local_24.z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&(local_14->base).base.rotation_matrix,&local_30);
  (local_14->base).max_distance = 32.0;
  (local_14->base).base.focal_length = 16.0;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(local_14,1.0);
  uVar3 = _DAT_01c37788;
  if ((CVector3f *)&stack0x00000000 != g_CDemonCameraInstance.base.rotation_matrix.m + 2) {
    g_CDemonCameraInstance.base.position.f.x = local_24.x;
    g_CDemonCameraInstance.base.position.f.y = local_24.y;
    g_CDemonCameraInstance.base.position.f.z = local_24.z;
  }
  if (g_CGamePtr->geometry_debug_enabled != 0) {
    _DAT_01c37788 = 0;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
              (DAT_0060b280,&local_24);
    engine_drender_cpp_FUN_0046b4b0(DAT_0060b280,0x42000000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(DAT_0060b280,&local_30);
    g_CDemonRaytraceInstance.rendering_mode = 1;
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(g_CDemonSetPtr,9999.9,0);
    _DAT_01c37788 = uVar3;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(local_14,0);
  pCVar4 = local_14;
  core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(local_14);
  iVar7 = 0;
  DAT_0061b5b8 = 0;
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(this_ptr,(pCVar4->base).max_distance,0);
  DAT_0061b5b8 = 1;
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,0xffffffff);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,1);
  pCVar6 = this_ptr;
  if (0 < this_ptr->sorted_render_actor_count) {
    do {
      (*((pCVar6->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                (pCVar6->sorted_render_actors[0]);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
      iVar7 = iVar7 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar7 < this_ptr->sorted_render_actor_count);
  }
  core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
  core_fire_cpp_CFireEffect_render_FUN_0049c780(0x01C3DEB4);
  core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(local_14,1);
  local_3c.x = (int)ROUND(local_24.x * _DAT_005fb210);
  local_3c.y = (int)ROUND(local_24.y * _DAT_005fb210);
  local_3c.z = (int)ROUND(local_24.z * _DAT_005fb210);
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
            (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
             (CMatrix3x3f *)0x0);
  iVar7 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                    (this_ptr,&local_3c,(CVector3i *)0x0);
  iVar5 = core_fire_cpp_FUN_0049eb50(0x01C3DEB4);
  if (DAT_006141bc < 0xf1) {
    iVar1 = -local_14->shadow_map_width;
    iVar2 = -local_14->shadow_map_height;
  }
  else {
    iVar1 = local_14->shadow_map_width * -2;
    iVar2 = local_14->shadow_map_height * -2;
  }
  core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600
            (local_14,(DAT_006141b8 + iVar1) / 2,(DAT_006141bc + iVar2) / 2,
             ((int)((iVar7 + (iVar7 >> 0x1f) * -0x80) - (uint)((iVar7 >> 0x1f) << 6 < 0)) >> 7) +
             iVar5 * 0x80 + *(int *)(0x02661F80 + 0x24) * 0x8000);
  return;
}
