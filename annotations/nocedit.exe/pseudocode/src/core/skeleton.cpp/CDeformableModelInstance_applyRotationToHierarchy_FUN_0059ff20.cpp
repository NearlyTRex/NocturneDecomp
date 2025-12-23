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
  CQuaternion4f *quat_ptr;
  CSkeleton *pCVar1;
  CQuaternion4f *quat2_ptr;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  uint auStackY_1854 [1498];
  CDeformableModelInstance *in_stack_ffffff24;
  CQuaternion4f *in_stack_ffffff28;
  CMatrix3x4f CStack_d0;
  float afStack_a0 [10];
  float fStack_78;
  uint local_74 [4];
  uint uStack_64;
  float fStack_60;
  CQuaternion4f CStack_5c;
  uint uStack_48;
  byte auStack_44 [28];
  byte local_28 [4];
  float local_24;
  float local_20;
  CSkeleton *local_1c;
  CSkeleton *pCStack_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar8 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  local_1c = pCVar1;
  core_xform_cpp_quaternionToAxisAngle_FUN_005f7730
            (rotation_quat,&local_20,(CVector3f *)(auStack_44 + 0x18));
  if (0 < pCVar1->bone_count) {
    pCStack_14 = this_ptr;
    do {
      quat2_ptr = (CQuaternion4f *)
                  core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                            (pCStack_18,iVar3,bone_index);
      if (-1 < (int)quat2_ptr) {
        in_stack_ffffff24 = this_ptr;
        fVar2 = (*blend_callback)(iVar3,bone_index,blend_weight,(int)quat2_ptr,this_ptr);
        quat_ptr = (CQuaternion4f *)(fVar2 * local_24);
        if ((float)1.0000000000000001e-05 < ABS((float)quat_ptr)) {
          core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
                    (quat_ptr,(float)(auStack_44 + 0x14),(CVector3f *)quat_ptr);
          fStack_60 = (float)auStack_44._8_4_;
          puVar5 = (uint *)((int)&CStack_5c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_5c + (uint)bVar8 * -8) =
               *(uint *)(auStack_44 + (uint)bVar8 * -8 + 0xc);
          *puVar5 = *(uint *)(local_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -0xc);
          puVar5[(uint)bVar8 * -2 + 1] =
               *(uint *)
                ((int)(local_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -0xc) +
                ((uint)bVar8 * -2 + 1) * 4);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640
                    ((CQuaternion4f *)pCStack_14,&CStack_5c,quat2_ptr);
          puVar5 = (uint *)((int)pCStack_14 + (uint)bVar8 * -8 + 0x6b4);
          (pCStack_14->bone_transform).bone_rotations[0].w = fStack_78;
          puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
          *puVar5 = local_74[(uint)bVar8 * -2];
          *puVar6 = local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          puVar6[(uint)bVar8 * -2 + 1] =
               (local_74 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
        }
      }
      pCStack_14 = (CDeformableModelInstance *)&(pCStack_14->motion_controller).tween_speed;
      iVar3 = iVar3 + 1;
    } while (iVar3 < pCStack_18->bone_count);
  }
  if (-1 < bone_index) {
    return;
  }
  core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
            ((CQuaternion4f *)((float)local_1c * blend_weight),(float)local_28,
             (CVector3f *)in_stack_ffffff24);
  uStack_48 = uStack_64;
  puVar5 = (uint *)((int)&CStack_5c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  *(float *)(auStack_44 + (uint)bVar8 * -8) = (&fStack_60)[(uint)bVar8 * -2];
  *(uint *)(auStack_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4) = *puVar5;
  *(uint *)
   ((int)(auStack_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4) + ((uint)bVar8 * -2 + 1) * 4) =
       puVar5[(uint)bVar8 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0((CMatrix3x4f *)auStack_44,in_stack_ffffff28);
  pfVar4 = afStack_a0;
  pCVar7 = &CStack_d0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar7->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&(this_ptr->bone_transform).root_position,&CStack_d0);
  return;
}
