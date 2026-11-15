// Name: core_set.cpp_CDemonSet_renderGogglesView_FUN_00550da0
// Address: 00550da0
// Address Range: [[00550da0, 0055116a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderGogglesView_FUN_00550da0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderGogglesView_FUN_00550da0(CDemonSet *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  char *matrix_in;
  CDemonLight *pCVar4;
  CSkeleton *this_ptr_01;
  int iVar5;
  int iVar6;
  CDemonSet *pCVar7;
  byte bVar8;
  float afStackY_1060 [1009];
  CVector3f *input_local_point;
  CVector3f *euler_out;
  float local_80;
  float local_7c;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c [2];
  CVector3f local_54;
  float local_48;
  float afStack_44 [2];
  CVector3i local_3c;
  CVector3f local_30;
  CVector3f local_24;
  char *local_18;
  CDemonLight *local_14;
  
  bVar8 = 0;
  this_ptr_00 = *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_14 = &g_CDemonLightInstance;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)(this_ptr_00 + 1));
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"@Bip01 Head" + 1,0)
  ;
  local_80 = 0.338;
  local_18 = this_ptr_00[0xb].footstep_sound_code + iVar5 * 0x30 + -0x10;
  local_7c = 0.75;
  euler_out = (CVector3f *)0x0;
  core_xform_cpp_transformVector3x4_FUN_005b5080
            ((CVector3f *)&stack0xffffff7c,(CMatrix3x4f *)local_18,&local_6c);
  input_local_point = &local_78;
  local_78.x = local_6c.x;
  *(uint *)((int)&local_78 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&local_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(this_ptr_00,input_local_point,&local_54)
  ;
  matrix_in = local_18;
  local_24.x = local_54.x;
  *(uint *)((int)&local_24 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&local_54 + (uint)bVar8 * -8 + 4);
  *(uint *)((int)&local_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       *(uint *)((int)&local_54 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  core_xform_cpp_matrixToEulerAngles_FUN_005b5930((CMatrix3x4f *)matrix_in,euler_out);
  local_30.y = 0.0;
  local_30.z = 0.0;
  local_60 = local_48;
  local_5c[(uint)bVar8 * -2] = afStack_44[(uint)bVar8 * -2];
  local_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  g_CDemonLightInstance.volumetric_enabled = 0;
  local_30.x = local_60 + (float)_DAT_005f092e;
  local_30.y = local_5c[0] + (this_ptr_00->orient).vec.y;
  if ((CVector3f *)&stack0x00000000 != g_CDemonLightInstance.base.base.rotation_matrix.m + 2) {
    g_CDemonLightInstance.base.base.position.f.x = local_24.x;
    g_CDemonLightInstance.base.base.position.f.y = local_24.y;
    g_CDemonLightInstance.base.base.position.f.z = local_24.z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&(local_14->base).base.rotation_matrix,&local_30);
  (local_14->base).max_distance = 32.0;
  (local_14->base).base.focal_length = 16.0;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(local_14,1.0);
  uVar3 = _DAT_01c50948;
  if ((CVector3f *)&stack0x00000000 != g_CDemonCameraInstance.base.rotation_matrix.m + 2) {
    g_CDemonCameraInstance.base.position.f.x = local_24.x;
    g_CDemonCameraInstance.base.position.f.y = local_24.y;
    g_CDemonCameraInstance.base.position.f.z = local_24.z;
  }
  if (g_CGamePtr->geometry_debug_enabled != 0) {
    _DAT_01c50948 = 0;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
              (DAT_00612560,&local_24);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(DAT_00612560,32.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530(DAT_00612560,&local_30);
    g_CDemonRaytraceInstance.rendering_mode = 1;
    engine_special_cpp_clearZBufferNative_FUN_0057dca4();
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(g_CDemonSetPtr,9999.9,0);
    _DAT_01c50948 = uVar3;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(local_14,0);
  pCVar4 = local_14;
  core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360(local_14);
  iVar5 = 0;
  DAT_00622c28 = 0;
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(this_ptr,(pCVar4->base).max_distance,0);
  DAT_00622c28 = 1;
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,0xffffffff);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,1);
  pCVar7 = this_ptr;
  if (0 < this_ptr->sorted_render_actor_count) {
    do {
      (*((pCVar7->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                (pCVar7->sorted_render_actors[0]);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
      iVar5 = iVar5 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar5 < this_ptr->sorted_render_actor_count);
  }
  core_gore_cpp_CGore_renderParticles_FUN_004e5c50(g_CGorePtr);
  core_fire_cpp_CFireEffect_render_FUN_004b5100(0x01C57074);
  core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(local_14,1);
  local_3c.x = (int)ROUND(local_24.x * _DAT_00605000);
  local_3c.y = (int)ROUND(local_24.y * _DAT_00605000);
  local_3c.z = (int)ROUND(local_24.z * _DAT_00605000);
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
            (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
             (CMatrix3x3f *)0x0);
  iVar5 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                    (this_ptr,&local_3c,(CVector3i *)0x0);
  iVar6 = core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004b7440(0x01C57074);
  if (DAT_0061b49c < 0xf1) {
    iVar1 = -local_14->shadow_map_width;
    iVar2 = -local_14->shadow_map_height;
  }
  else {
    iVar1 = local_14->shadow_map_width * -2;
    iVar2 = local_14->shadow_map_height * -2;
  }
  core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00465e30
            (local_14,(DAT_0061b498 + iVar1) / 2,(DAT_0061b49c + iVar2) / 2,
             ((int)((iVar5 + (iVar5 >> 0x1f) * -0x80) - (uint)((iVar5 >> 0x1f) << 6 < 0)) >> 7) +
             iVar6 * 0x80 + *(int *)(0x02C997C0 + 0x24) * 0x8000);
  return;
}
