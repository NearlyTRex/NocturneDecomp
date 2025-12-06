// Name: core_stranger.cpp_CStranger_FUN_005bf720
// Address: 005bf720
// Address Range: [[005bf720, 005bf7fe]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005bf720()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005bf720(CStranger* param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005bf720(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  int in_stack_00000004;
  SBoneTransformData *in_stack_0000001c;
  float blend_weight;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffe534;
  byte auStack_1ac0 [6808];
  float afStack_28 [7];
  
  bVar2 = 0;
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            (this_ptr,(SBoneTransformData *)&stack0xffffe528);
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,*(int *)(in_stack_00000004 + 0x1fc84),
             *(float *)(in_stack_00000004 + 0x1fc54) * (float)40,-1);
  pCVar1 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0
                     ((CVector3f *)(afStack_28 + 5),
                      (CQuaternion4f *)(DAT_03f6bacc * 0x10 + in_stack_00000004 + 0x808));
  bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  blend_weight = -NAN;
  core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-pCVar1->y,1.0);
  auStack_1ac0._6804_4_ = afStack_28[3];
  afStack_28[(uint)bVar2 * -2] = afStack_28[(uint)bVar2 * -2 + 4];
  afStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_28[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
  (afStack_28 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       (afStack_28 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr,(CQuaternion4f *)(auStack_1ac0 + 0x1a94),blend_weight,(int)bone_index,
             in_stack_ffffe534);
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            (this_ptr,in_stack_0000001c);
  core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
            (this_ptr,(SBoneTransformData *)auStack_1ac0);
  return;
}
