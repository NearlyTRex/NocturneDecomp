// Name: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
// Address: 0059ff20
// Address Range: [[0059ff20, 005a00ed]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, CDeformableModel_MotionBlendWeightFunc * blend_callback)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
          (CDeformableModelInstance *this_ptr,CQuaternion4f *rotation_quat,float blend_weight,
          int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  CSkeleton *pCVar1;
  int iVar2;
  CVector3f *start_bone_index;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  uint auStackY_1858 [1484];
  uint uStack_f4;
  CVector3f *axis_ptr;
  CQuaternion4f *quat2_ptr;
  CQuaternion4f *in_stack_ffffff20;
  CQuaternion4f *in_stack_ffffff24;
  CMatrix3x4f CStack_d4;
  float afStack_a4 [10];
  float fStack_7c;
  uint auStack_78 [4];
  uint uStack_68;
  float fStack_64;
  CQuaternion4f CStack_60;
  uint uStack_4c;
  byte auStack_48 [28];
  byte auStack_2c [4];
  float local_28;
  float local_24;
  CSkeleton *local_20;
  CSkeleton *local_1c;
  CDeformableModelInstance *pCStack_18;
  CQuaternion4f *pCStack_14;
  
  bVar7 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = (CVector3f *)0x0;
  uStack_f4 = 0x59ff5f;
  local_20 = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
            (rotation_quat,&local_24,(CVector3f *)(auStack_48 + 0x18));
  if (0 < pCVar1->bone_count) {
    pCStack_14 = (this_ptr->bone_transform).bone_rotations;
    pCStack_18 = this_ptr;
    do {
      axis_ptr = start_bone_index;
      quat2_ptr = (CQuaternion4f *)bone_index;
      iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (local_1c,(int)start_bone_index,bone_index);
      if (-1 < iVar2) {
        pCStack_18 = (CDeformableModelInstance *)
                     (*blend_callback)((int)start_bone_index,bone_index,blend_weight,iVar2,this_ptr)
        ;
        in_stack_ffffff20 = (CQuaternion4f *)((float)pCStack_18 * local_28);
        if ((float)1.0000000000000001e-05 < ABS((float)in_stack_ffffff20)) {
          uStack_f4 = 0x5a0037;
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (in_stack_ffffff20,(float)(auStack_48 + 0x14),axis_ptr);
          fStack_64 = (float)auStack_48._8_4_;
          puVar4 = (uint *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&CStack_60 + (uint)bVar7 * -8) =
               *(uint *)(auStack_48 + (uint)bVar7 * -8 + 0xc);
          *puVar4 = *(uint *)(auStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0xc);
          puVar4[(uint)bVar7 * -2 + 1] =
               *(uint *)
                ((int)(auStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -0xc) +
                ((uint)bVar7 * -2 + 1) * 4);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)pCStack_18,&CStack_60,quat2_ptr);
          puVar4 = (uint *)((int)pCStack_18 + (uint)bVar7 * -8 + 0x6b4);
          (pCStack_18->bone_transform).bone_rotations[0].w = fStack_7c;
          puVar5 = puVar4 + (uint)bVar7 * -2 + 1;
          *puVar4 = auStack_78[(uint)bVar7 * -2];
          *puVar5 = auStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          puVar5[(uint)bVar7 * -2 + 1] =
               (auStack_78 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        }
      }
      pCStack_18 = (CDeformableModelInstance *)&(pCStack_18->motion_controller).tween_speed;
      start_bone_index = (CVector3f *)((int)&start_bone_index->x + 1);
      pCStack_14 = pCStack_14 + 1;
    } while ((int)start_bone_index < local_1c->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
            ((CQuaternion4f *)((float)local_20 * blend_weight),(float)auStack_2c,
             (CVector3f *)in_stack_ffffff20);
  uStack_4c = uStack_68;
  puVar4 = (uint *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(float *)(auStack_48 + (uint)bVar7 * -8) = (&fStack_64)[(uint)bVar7 * -2];
  *(uint *)(auStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) = *puVar4;
  *(uint *)
   ((int)(auStack_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4) + ((uint)bVar7 * -2 + 1) * 4) =
       puVar4[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)auStack_48,in_stack_ffffff24);
  pfVar3 = afStack_a4;
  pCVar6 = &CStack_d4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&(this_ptr->bone_transform).root_position,&CStack_d4);
  return;
}
