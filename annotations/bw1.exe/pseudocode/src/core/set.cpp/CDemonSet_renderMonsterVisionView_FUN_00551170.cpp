// Name: core_set.cpp_CDemonSet_renderMonsterVisionView_FUN_00551170
// Address: 00551170
// Address Range: [[00551170, 0055147a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_00551170(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderMonsterVisionView_FUN_00551170(CDemonSet *this_ptr)

{
  UVector3 *pUVar1;
  CCharacter *actor_ptr;
  int iVar2;
  int iVar3;
  CSkeleton *this_ptr_00;
  CDemonSet *pCVar4;
  byte bVar5;
  float afStackY_1070 [1012];
  CVector3f *input_local_point;
  CVector3f *in_stack_ffffff78;
  CVector3f local_7c;
  CVector3f local_70;
  float local_64;
  float local_60 [2];
  CVector3f local_58;
  CVector3f *local_4c;
  float local_48 [2];
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float afStack_30 [2];
  CVector3f local_28;
  CMatrix3x4f *local_1c;
  int local_18;
  CDemonLight *local_14;
  
  bVar5 = 0;
  local_14 = &g_CDemonLightInstance;
  actor_ptr = g_CScriptPtr->monster_vision_actor;
  local_18 = 0;
  if (actor_ptr != (CCharacter *)0x0) {
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(&actor_ptr->base,&DAT_005f0936);
    if (iVar3 != 0) {
      local_18 = 1;
    }
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                            (&actor_ptr->model);
    iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",0);
    local_70.z = 0.75;
    local_1c = (actor_ptr->model).bone_transform.bone_model_matrices + iVar3;
    local_70.x = 0.0;
    local_70.y = 0.338;
    core_xform_cpp_transformVector3x4_FUN_005b5080(&local_70,local_1c,&local_58);
    input_local_point = &local_7c;
    local_7c.x = local_58.x;
    *(uint *)((int)&local_7c + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_7c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (&actor_ptr->base,input_local_point,(CVector3f *)&stack0xffffff78);
    local_4c = in_stack_ffffff78;
    local_48[(uint)bVar5 * -2] = *(float *)(&stack0xffffff7c + (uint)bVar5 * -8);
    local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)(&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_1c,in_stack_ffffff78);
    local_64 = local_34;
    local_60[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2];
    local_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    local_28.x = local_64 + (float)_DAT_005f0946;
    local_28.z = 0.0;
    local_28.y = local_60[0] + (actor_ptr->base).orient.vec.y;
    pUVar1 = &(local_14->base).base.position;
    local_14->volumetric_enabled = 0;
    if (pUVar1 != (UVector3 *)&local_4c) {
      (pUVar1->f).x = (float)local_4c;
      (local_14->base).base.position.f.y = local_48[0];
      (local_14->base).base.position.f.z = local_48[1];
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&(local_14->base).base.rotation_matrix,&local_28);
    (local_14->base).max_distance = 42.0;
    (local_14->base).base.focal_length = 26.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(local_14,1.0);
    if (&stack0x00000000 != g_CDemonCameraInstance.camera_name + 0x10) {
      g_CDemonCameraInstance.base.position.f.x = (float)local_4c;
      g_CDemonCameraInstance.base.position.f.y = local_48[0];
      g_CDemonCameraInstance.base.position.f.z = local_48[1];
    }
    core_dlight_cpp_CDemonLight_beginScene_FUN_00462820(local_14,0);
    DAT_00622c28 = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
              (this_ptr,(local_14->base).max_distance,0);
    DAT_00622c28 = 1;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,0xffffffff);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0054eef0(this_ptr,1);
    core_set_cpp_CDemonSet_buildDisplayList_FUN_005545a0(this_ptr,1);
    iVar3 = 0;
    pCVar4 = this_ptr;
    if (0 < this_ptr->sorted_render_actor_count) {
      do {
        (*((pCVar4->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                  (pCVar4->sorted_render_actors[0]);
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
        iVar3 = iVar3 + 1;
        pCVar4 = (CDemonSet *)pCVar4->cameras;
      } while (iVar3 < this_ptr->sorted_render_actor_count);
    }
    core_gore_cpp_CGore_renderParticles_FUN_004e5c50(g_CGorePtr);
    core_fire_cpp_CFireEffect_render_FUN_004b5100(0x01C57074);
    core_dlight_cpp_CDemonLight_endScene_FUN_00462ad0(local_14,1);
    local_40 = (int)ROUND((float)local_4c * _DAT_00605000);
    local_3c = (int)ROUND(local_48[0] * _DAT_00605000);
    local_38 = (int)ROUND(local_48[1] * _DAT_00605000);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0
               ,(CMatrix3x3f *)0x0);
    if (DAT_0061b49c < 0xf1) {
      iVar3 = -local_14->shadow_map_width;
      iVar2 = -local_14->shadow_map_height;
    }
    else {
      iVar3 = local_14->shadow_map_width * -2;
      iVar2 = local_14->shadow_map_height * -2;
    }
    core_dlight_cpp_CDemonLight_drawMonsterVisionBuffer_FUN_00466220
              (local_14,(DAT_0061b498 + iVar3) / 2,(DAT_0061b49c + iVar2) / 2,0,local_18);
    return;
  }
  return;
}
