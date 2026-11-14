// Name: core_set.cpp_FUN_00536990
// Address: 00536990
// Address Range: [[00536990, 00536c86]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00536990(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00536990(CDemonSet *param_1)

{
  CCharacter *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CSkeleton *this_ptr;
  int iVar4;
  CDemonSet *pCVar5;
  byte bVar6;
  float afStackY_106c [1012];
  uint *puVar7;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  float afStack_50 [2];
  CVector3f local_48;
  float local_3c;
  float local_38 [5];
  float local_24;
  CMatrix3x4f *local_18;
  CDemonLight *local_14;
  
  bVar6 = 0;
  pCVar1 = g_CScriptPtr->monster_vision_actor;
  local_14 = &g_CDemonLightInstance;
  if (pCVar1 != (CCharacter *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         (&pCVar1->model);
    iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr,"?Bip01 Head" + 1,0);
    local_5c = 0x3ead0e56;
    local_18 = (pCVar1->model).bone_transform.bone_model_matrices + iVar4;
    local_58 = 0x3f400000;
    local_60 = 0;
    core_xform_cpp_FUN_00583260(&local_60,local_18);
    puVar7 = &stack0xffffff88;
    local_78 = local_54;
    *(float *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) = afStack_50[(uint)bVar6 * -2];
    afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
         afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    core_actor_cpp_FUN_00408b80(pCVar1,puVar7);
    pCVar3 = local_18;
    local_84 = local_24;
    *(float *)((int)&stack0xffffff80 + (uint)bVar6 * -8) = local_38[(uint)bVar6 * -2 + 6];
    *(float *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(pCVar3);
    local_48.y = 0.0;
    local_48.z = 0.0;
    local_3c = local_38[2];
    local_38[(uint)bVar6 * -2] = local_38[(uint)bVar6 * -2 + 3];
    local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    g_CDemonLightInstance.volumetric_enabled = 0;
    local_48.x = local_3c + (float)_DAT_005d05df;
    local_48.y = local_38[0] + (pCVar1->base).orient.vec.y;
    if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x48) {
      g_CDemonLightInstance.base.base.position.f.x = local_84;
      g_CDemonLightInstance.base.base.position.f.y = local_80;
      g_CDemonLightInstance.base.base.position.f.z = local_7c;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              (&(local_14->base).base.rotation_matrix,&local_48);
    (local_14->base).max_distance = 42.0;
    (local_14->base).base.focal_length = 26.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(local_14,1.0);
    if (&stack0x00000000 != g_CDemonCameraInstance.camera_name + 0x48) {
      g_CDemonCameraInstance.base.position.f.x = local_84;
      g_CDemonCameraInstance.base.position.f.y = local_80;
      g_CDemonCameraInstance.base.position.f.z = local_7c;
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(local_14,0);
    DAT_00603b38 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(param_1,(local_14->base).max_distance,0)
    ;
    DAT_00603b38 = 1;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(param_1,0xffffffff);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_005346b0(param_1,1);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_00539f30(param_1,1);
    iVar4 = 0;
    pCVar5 = param_1;
    if (0 < param_1->sorted_render_actor_count) {
      do {
        (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                  (pCVar5->sorted_render_actors[0]);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
        iVar4 = iVar4 + 1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar4 < param_1->sorted_render_actor_count);
    }
    core_gore_cpp_CGore_renderParticles_FUN_004ce5b0(g_CGorePtr);
    core_fire_cpp_CFireEffect_render_FUN_004a1ad0(0x01C73654);
    core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(local_14,1);
    local_6c = (int)ROUND(local_84 * _DAT_005e3bc0);
    local_68 = (int)ROUND(local_80 * _DAT_005e3bc0);
    local_64 = (int)ROUND(local_7c * _DAT_005e3bc0);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (param_1,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0,
               (CMatrix3x3f *)0x0);
    if (DAT_005fba1c < 0xf1) {
      iVar4 = -local_14->shadow_map_width;
      iVar2 = -local_14->shadow_map_height;
    }
    else {
      iVar4 = local_14->shadow_map_width * -2;
      iVar2 = local_14->shadow_map_height * -2;
    }
    core_dlight_cpp_FUN_0045ff30(local_14,(DAT_005fba18 + iVar4) / 2,(DAT_005fba1c + iVar2) / 2,0);
    return;
  }
  return;
}
