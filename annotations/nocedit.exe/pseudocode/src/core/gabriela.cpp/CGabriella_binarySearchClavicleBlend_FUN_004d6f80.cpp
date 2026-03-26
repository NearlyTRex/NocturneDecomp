// Name: core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80
// Address: 004d6f80
// Address Range: [[004d6f80, 004d711f] [03fc44d5, 03fc453d]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80(CGabriella *this_ptr,float delta_time,float *clavicle_blend,int probe_bone_index,int blend_bone_index,CVector3f *probe_offset)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80(CGabriella *this_ptr,float delta_time,float *clavicle_blend,int probe_bone_index,int blend_bone_index,CVector3f *probe_offset)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *input_local_point;
  int iVar2;
  int iVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float local_1b48;
  SPose local_1b44;
  CMatrix3x4f local_a8;
  CMatrix3x4f local_78;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  CDeformableModelInstance *local_14;
  
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(pCVar2,&local_1b44);
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
            (pCVar2,&local_30,blend_bone_index);
  local_30.y = local_30.y + -0.3f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_24,&local_30);
  local_18 = *clavicle_blend;
  local_1b48 = delta_time / 0.05f + local_18;
  if (1.0 < local_1b48) {
    local_1b48 = 1.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  iVar3 = 0;
  do {
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
              (this_ptr_00,&local_1b44);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_00,0,0.0,*clavicle_blend,blend_bone_index,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (this_ptr_00,probe_bone_index,&local_78);
    input_local_point =
         core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_48,probe_offset,&local_a8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_3c,input_local_point);
    iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                      (g_CDemonSetPtr,&local_24,&local_3c);
    if (iVar2 == 0) {
      local_1b48 = *clavicle_blend;
    }
    else if (iVar3 != 0) {
      local_18 = *clavicle_blend;
    }
    iVar3 = iVar3 + 1;
    *clavicle_blend = (local_18 + local_1b48) * (float)0.5;
  } while (iVar3 < 7);
  return;
}
