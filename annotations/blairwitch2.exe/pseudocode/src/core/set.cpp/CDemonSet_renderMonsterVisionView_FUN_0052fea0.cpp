// Name: core_set.cpp_CDemonSet_renderMonsterVisionView_FUN_0052fea0
// Address: 0052fea0
// Address Range: [[0052fea0, 005301ce]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_0052fea0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_0052fea0(CDemonSet *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  int iVar2;
  CMatrix3x4f *matrix_in;
  CSkeleton *this_ptr_01;
  int iVar3;
  int iVar4;
  CDemonSet *pCVar5;
  byte bVar6;
  float afStackY_106c [1012];
  CVector3f *input_local_point;
  CVector3f *euler_out;
  float local_78;
  float local_74;
  CVector3f local_6c;
  CVector3f local_60;
  float local_54;
  float local_50 [5];
  CVector3i local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x4f *local_18;
  CDemonLight *local_14;
  
  bVar6 = 0;
  this_ptr_00 = g_CScriptPtr->monster_vision_actor;
  local_14 = &g_CDemonLightInstance;
  if (this_ptr_00 != (CCharacter *)0x0) {
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                            (&this_ptr_00->model);
    iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",0);
    local_24.y = 0.338;
    local_18 = (this_ptr_00->model).bone_transform.bone_model_matrices + iVar3;
    local_24.z = 0.75;
    local_24.x = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00591530(&local_24,local_18,&local_6c);
    input_local_point = (CVector3f *)&stack0xffffff7c;
    *(uint *)(&stack0xffffff80 + (uint)bVar6 * -8) =
         *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
    euler_out = (CVector3f *)local_6c.x;
    *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              (&this_ptr_00->base,input_local_point,&local_30);
    matrix_in = local_18;
    local_54 = local_30.x;
    local_50[(uint)bVar6 * -2] = *(float *)((int)&local_30 + (uint)bVar6 * -8 + 4);
    local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(matrix_in,euler_out);
    local_60.y = 0.0;
    local_60.z = 0.0;
    local_78 = local_50[2];
    *(float *)((int)&stack0xffffff8c + (uint)bVar6 * -8) = local_50[(uint)bVar6 * -2 + 3];
    *(float *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    g_CDemonLightInstance.volumetric_enabled = 0;
    local_60.x = local_78 + (float)0.261799387791667;
    local_60.y = local_74 + (this_ptr_00->base).orient.vec.y;
    if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x18) {
      g_CDemonLightInstance.base.base.position.f.x = local_54;
      g_CDemonLightInstance.base.base.position.f.y = local_50[0];
      g_CDemonLightInstance.base.base.position.f.z = local_50[1];
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
              (&(local_14->base).base.rotation_matrix,&local_60);
    (local_14->base).max_distance = 42.0;
    (local_14->base).base.focal_length = 26.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(local_14,1.0);
    if (&stack0x00000000 != g_CDemonCameraInstance.camera_name + 0x18) {
      g_CDemonCameraInstance.base.position.f.x = local_54;
      g_CDemonCameraInstance.base.position.f.y = local_50[0];
      g_CDemonCameraInstance.base.position.f.z = local_50[1];
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(local_14,0);
    g_INT_0061b5b8 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
              (this_ptr,(local_14->base).max_distance,0);
    g_INT_0061b5b8 = 1;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,0xffffffff);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0052dc10(this_ptr,1);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_005332f0(this_ptr,1);
    iVar3 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->sorted_render_actor_count) {
      do {
        (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                  (pCVar5->sorted_render_actors[0]);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
                  (g_CDemonRenderer_PTR_0060b280,1);
        iVar3 = iVar3 + 1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar3 < this_ptr->sorted_render_actor_count);
    }
    core_gore_cpp_CGore_renderParticles_FUN_004c9440(g_CGorePtr);
    core_fire_cpp_CFireEffect_render_FUN_0049c780(g_CFireEffect_PTR_00614d30);
    core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(local_14,1);
    local_3c.x = (int)ROUND(local_54 * 256.0f);
    local_3c.y = (int)ROUND(local_50[0] * 256.0f);
    local_3c.z = (int)ROUND(local_50[1] * 256.0f);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0
               ,(CMatrix3x3f *)0x0);
    iVar3 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                      (this_ptr,&local_3c,(CVector3i *)0x0);
    iVar4 = core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_0049eb50(g_CFireEffect_PTR_00614d30);
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
               ((int)((iVar3 + (iVar3 >> 0x1f) * -0x80) - (uint)((iVar3 >> 0x1f) << 6 < 0)) >> 7) +
               iVar4 * 0x80 + g_CWeather_PTR_0061e8f4->lightning_active * 0x8000);
    return;
  }
  return;
}
