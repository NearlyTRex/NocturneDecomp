// Name: core_set.cpp_FUN_005365c0
// Address: 005365c0
// Address Range: [[005365c0, 0053698a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005365c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005365c0(CDemonSet *this_ptr)

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
  iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  local_14 = &g_CDemonLightInstance;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)(iVar7 + 0x158));
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"@Bip01 Head" + 1,0)
  ;
  local_80 = 0x3ead0e56;
  local_18 = iVar7 + 0xfd8 + iVar5 * 0x30;
  local_7c = 0x3f400000;
  local_84 = 0;
  core_xform_cpp_FUN_00583260(&stack0xffffff7c,local_18);
  puVar9 = &stack0xffffff88;
  local_78 = local_6c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar8 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  core_actor_cpp_FUN_00408b80(iVar7,puVar9);
  iVar5 = local_18;
  local_24.x = local_54;
  *(uint *)((int)&local_24 + (uint)bVar8 * -8 + 4) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar8 * -8);
  *(uint *)((int)&local_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  core_xform_cpp_matrixToEulerAngles_FUN_00583b10(iVar5);
  local_30.y = 0.0;
  local_30.z = 0.0;
  local_60 = local_48;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar8 * -8);
  *(uint *)(&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  g_CDemonLightInstance.volumetric_enabled = 0;
  local_30.x = local_60 + (float)_DAT_005d05c7;
  local_30.y = local_5c + *(float *)(iVar7 + 0x34);
  if ((CVector3f *)&stack0x00000000 != g_CDemonLightInstance.base.base.rotation_matrix.m + 2) {
    g_CDemonLightInstance.base.base.position.f.x = local_24.x;
    g_CDemonLightInstance.base.base.position.f.y = local_24.y;
    g_CDemonLightInstance.base.base.position.f.z = local_24.z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
            (&(local_14->base).base.rotation_matrix,&local_30);
  (local_14->base).max_distance = 32.0;
  (local_14->base).base.focal_length = 16.0;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(local_14,1.0);
  uVar3 = _DAT_01c6cee8;
  if ((CVector3f *)&stack0x00000000 != g_CDemonCameraInstance.base.rotation_matrix.m + 2) {
    g_CDemonCameraInstance.base.position.f.x = local_24.x;
    g_CDemonCameraInstance.base.position.f.y = local_24.y;
    g_CDemonCameraInstance.base.position.f.z = local_24.z;
  }
  if (*(int *)&g_CGamePtr->field_0x23c != 0) {
    _DAT_01c6cee8 = 0;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
              (DAT_005f2afc,&local_24);
    engine_matrix_c_FUN_0046d090(DAT_005f2afc,0x42000000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(DAT_005f2afc,&local_30);
    g_CDemonRaytraceInstance.rendering_mode = 1;
    engine_special_cpp_clearZBufferNative_FUN_00560dd4();
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(g_CDemonSetPtr,9999.9,0);
    _DAT_01c6cee8 = uVar3;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(local_14,0);
  pCVar4 = local_14;
  core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(local_14);
  iVar7 = 0;
  DAT_00603b38 = 0;
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,(pCVar4->base).max_distance,0);
  DAT_00603b38 = 1;
  core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,0xffffffff);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,1);
  pCVar6 = this_ptr;
  if (0 < this_ptr->sorted_render_actor_count) {
    do {
      (*((pCVar6->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                (pCVar6->sorted_render_actors[0]);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
      iVar7 = iVar7 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar7 < this_ptr->sorted_render_actor_count);
  }
  core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
  core_fire_cpp_CFireEffect_render_FUN_004a1ad0(0x01C73654);
  core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(local_14,1);
  local_3c.x = (int)ROUND(local_24.x * _DAT_005e3bc0);
  local_3c.y = (int)ROUND(local_24.y * _DAT_005e3bc0);
  local_3c.z = (int)ROUND(local_24.z * _DAT_005e3bc0);
  core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
            (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
             (CMatrix3x3f *)0x0);
  iVar7 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
                    (this_ptr,&local_3c,(CVector3i *)0x0);
  iVar5 = core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004a4100(0x01C73654);
  if (DAT_005fba1c < 0xf1) {
    iVar1 = -local_14->shadow_map_width;
    iVar2 = -local_14->shadow_map_height;
  }
  else {
    iVar1 = local_14->shadow_map_width * -2;
    iVar2 = local_14->shadow_map_height * -2;
  }
  core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0045fb40
            (local_14,(DAT_005fba18 + iVar1) / 2,(DAT_005fba1c + iVar2) / 2,
             ((int)((iVar7 + (iVar7 >> 0x1f) * -0x80) - (uint)((iVar7 >> 0x1f) << 6 < 0)) >> 7) +
             iVar5 * 0x80 + *(int *)(0x02D0C1A0 + 0x24) * 0x8000);
  return;
}
