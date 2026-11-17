// Name: core_set.cpp_CDemonSet_renderGogglesView_FUN_0052fad0
// Address: 0052fad0
// Address Range: [[0052fad0, 0052fe9a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderGogglesView_FUN_0052fad0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_set_cpp_CDemonSet_renderGogglesView_FUN_0052fad0(CDemonSet *this_ptr)

{
  CHero *this_ptr_00;
  int iVar1;
  int iVar2;
  CMatrix3x4f *matrix_in;
  CDemonLight *pCVar3;
  CSkeleton *this_ptr_01;
  int iVar4;
  int iVar5;
  CDemonSet *pCVar6;
  byte bVar7;
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
  CMatrix3x4f *local_18;
  CDemonLight *local_14;
  
  bVar7 = 0;
  this_ptr_00 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
  local_14 = &g_CDemonLightInstance;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr_00->base).model);
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",0);
  local_80 = 0.338;
  local_18 = (this_ptr_00->base).model.bone_transform.bone_model_matrices + iVar4;
  local_7c = 0.75;
  euler_out = (CVector3f *)0x0;
  core_xform_cpp_transformVector3x4_FUN_00591530((CVector3f *)&stack0xffffff7c,local_18,&local_6c);
  input_local_point = &local_78;
  local_78.x = local_6c.x;
  *(uint *)((int)&local_78 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_6c + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_6c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr_00,input_local_point,&local_54);
  matrix_in = local_18;
  local_24.x = local_54.x;
  *(uint *)((int)&local_24 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_54 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(matrix_in,euler_out);
  local_30.y = 0.0;
  local_30.z = 0.0;
  local_60 = local_48;
  local_5c[(uint)bVar7 * -2] = afStack_44[(uint)bVar7 * -2];
  local_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_44[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  g_CDemonLightInstance.volumetric_enabled = 0;
  local_30.x = local_60 + (float)0.261799387791667;
  local_30.y = local_5c[0] + (this_ptr_00->base).base.orient.vec.y;
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
  iVar4 = g_INT_01c37788;
  if ((CVector3f *)&stack0x00000000 != g_CDemonCameraInstance.base.rotation_matrix.m + 2) {
    g_CDemonCameraInstance.base.position.f.x = local_24.x;
    g_CDemonCameraInstance.base.position.f.y = local_24.y;
    g_CDemonCameraInstance.base.position.f.z = local_24.z;
  }
  if (g_CGamePtr->geometry_debug_enabled != 0) {
    g_INT_01c37788 = 0;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
              (g_CDemonRenderer_PTR_0060b280,&local_24);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
              (g_CDemonRenderer_PTR_0060b280,32.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
              (g_CDemonRenderer_PTR_0060b280,&local_30);
    g_CDemonRaytraceInstance.rendering_mode = 1;
    engine_special_cpp_clearZBufferNative_FUN_0055b254();
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(g_CDemonSetPtr,9999.9,0);
    g_INT_01c37788 = iVar4;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(local_14,0);
  pCVar3 = local_14;
  core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(local_14);
  iVar4 = 0;
  g_INT_0061b5b8 = 0;
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(this_ptr,(pCVar3->base).max_distance,0);
  g_INT_0061b5b8 = 1;
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,0xffffffff);
  core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,1);
  pCVar6 = this_ptr;
  if (0 < this_ptr->sorted_render_actor_count) {
    do {
      (*((pCVar6->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                (pCVar6->sorted_render_actors[0]);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
                (g_CDemonRenderer_PTR_0060b280,1);
      iVar4 = iVar4 + 1;
      pCVar6 = (CDemonSet *)pCVar6->cameras;
    } while (iVar4 < this_ptr->sorted_render_actor_count);
  }
  core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
  core_fire_cpp_CFireEffect_render_FUN_0049c780(g_CFireEffect_PTR_00614d30);
  core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(local_14,1);
  local_3c.x = (int)ROUND(local_24.x * 256.0f);
  local_3c.y = (int)ROUND(local_24.y * 256.0f);
  local_3c.z = (int)ROUND(local_24.z * 256.0f);
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
            (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
             (CMatrix3x3f *)0x0);
  iVar4 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                    (this_ptr,&local_3c,(CVector3i *)0x0);
  iVar5 = core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0049eb50(g_CFireEffect_PTR_00614d30);
  if (g_INT_006141bc < 0xf1) {
    iVar1 = -local_14->shadow_map_width;
    iVar2 = -local_14->shadow_map_height;
  }
  else {
    iVar1 = local_14->shadow_map_width * -2;
    iVar2 = local_14->shadow_map_height * -2;
  }
  core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_0044d600
            (local_14,(g_INT_006141b8 + iVar1) / 2,(g_INT_006141bc + iVar2) / 2,
             ((int)((iVar4 + (iVar4 >> 0x1f) * -0x80) - (uint)((iVar4 >> 0x1f) << 6 < 0)) >> 7) +
             iVar5 * 0x80 + g_CWeather_PTR_0061e8f4->lightning_active * 0x8000);
  return;
}
