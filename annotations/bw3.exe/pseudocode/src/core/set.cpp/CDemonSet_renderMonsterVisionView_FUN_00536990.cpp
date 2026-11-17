// Name: core_set.cpp_CDemonSet_renderMonsterVisionView_FUN_00536990
// Address: 00536990
// Address Range: [[00536990, 00536c86]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_00536990(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_00536990(CDemonSet *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CMatrix3x4f *matrix_in;
  CSkeleton *this_ptr_01;
  int iVar2;
  CDemonSet *pCVar3;
  byte bVar4;
  float afStackY_106c [1012];
  CVector3f *pCVar5;
  float local_80;
  float local_7c;
  CVector3f local_78;
  int local_6c;
  int local_68;
  int local_64;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38 [5];
  CVector3f local_24;
  CMatrix3x4f *local_18;
  CDemonLight *local_14;
  
  bVar4 = 0;
  this_ptr_00 = g_CScriptPtr->monster_vision_actor;
  local_14 = &g_CDemonLightInstance;
  if (this_ptr_00 != (CCharacter *)0x0) {
    this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                            (&this_ptr_00->model);
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",0);
    local_60.y = 0.338;
    local_18 = (this_ptr_00->model).bone_transform.bone_model_matrices + iVar2;
    local_60.z = 0.75;
    local_60.x = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00583260(&local_60,local_18,&local_54);
    pCVar5 = &local_78;
    local_78.x = local_54.x;
    *(uint *)((int)&local_78 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_78 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(&this_ptr_00->base,pCVar5,&local_24);
    matrix_in = local_18;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar4 * -8) =
         *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4);
    pCVar5 = (CVector3f *)local_24.x;
    *(uint *)((int)&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(matrix_in,pCVar5);
    local_48.y = 0.0;
    local_48.z = 0.0;
    local_3c = local_38[2];
    local_38[(uint)bVar4 * -2] = local_38[(uint)bVar4 * -2 + 3];
    local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    g_CDemonLightInstance.volumetric_enabled = 0;
    local_48.x = local_3c + (float)0.261799387791667;
    local_48.y = local_38[0] + (this_ptr_00->base).orient.vec.y;
    if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x48) {
      g_CDemonLightInstance.base.base.position.f.y = local_80;
      g_CDemonLightInstance.base.base.position.f.z = local_7c;
      g_CDemonLightInstance.base.base.position._0_4_ = pCVar5;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              (&(local_14->base).base.rotation_matrix,&local_48);
    (local_14->base).max_distance = 42.0;
    (local_14->base).base.focal_length = 26.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(local_14,1.0);
    if (&stack0x00000000 != g_CDemonCameraInstance.camera_name + 0x48) {
      g_CDemonCameraInstance.base.position.f.y = local_80;
      g_CDemonCameraInstance.base.position.f.z = local_7c;
      g_CDemonCameraInstance.base.position.f.x = (float)pCVar5;
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(local_14,0);
    g_INT_00603b38 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
              (this_ptr,(local_14->base).max_distance,0);
    g_INT_00603b38 = 1;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,0xffffffff);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(this_ptr,1);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(this_ptr,1);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->sorted_render_actor_count) {
      do {
        (*((pCVar3->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                  (pCVar3->sorted_render_actors[0]);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                  (g_CDemonRenderer_PTR_005f2afc,1);
        iVar2 = iVar2 + 1;
        pCVar3 = (CDemonSet *)pCVar3->cameras;
      } while (iVar2 < this_ptr->sorted_render_actor_count);
    }
    core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
    core_fire_cpp_CFireEffect_render_FUN_004a1ad0(g_CFireEffect_PTR_005fc5a0);
    core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(local_14,1);
    local_6c = (int)ROUND((float)pCVar5 * 256.0f);
    local_68 = (int)ROUND(local_80 * 256.0f);
    local_64 = (int)ROUND(local_7c * 256.0f);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0
               ,(CMatrix3x3f *)0x0);
    if (g_INT_005fba1c < 0xf1) {
      iVar2 = -local_14->shadow_map_width;
      iVar1 = -local_14->shadow_map_height;
    }
    else {
      iVar2 = local_14->shadow_map_width * -2;
      iVar1 = local_14->shadow_map_height * -2;
    }
    core_dlight_cpp_CDemonLight_drawMonsterVisionBuffer_FUN_0045ff30
              (local_14,(g_INT_005fba18 + iVar2) / 2,(g_INT_005fba1c + iVar1) / 2,0);
    return;
  }
  return;
}
