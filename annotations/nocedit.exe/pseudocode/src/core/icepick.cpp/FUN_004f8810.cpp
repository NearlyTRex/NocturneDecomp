// Name: core_icepick.cpp_FUN_004f8810
// Address: 004f8810
// Address Range: [[004f8810, 004f8967]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8810()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f8810(uint param_1, uint
   param_2) */

void core_icepick_cpp_FUN_004f8810(void)

{
  float fVar1;
  CMotionList *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000014;
  float afStackY_17fc [1517];
  float in_stack_ffffffd4;
  code *blend_callback;
  float local_20;
  float fStack_10;
  
  bVar3 = 0;
  if (*(int *)(in_stack_00000004 + 0x1fbf4) != 0) {
    if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
      fVar1 = *(float *)(in_stack_00000004 + 0x1fbfc) - in_stack_00000008 * (float)2;
      *(float *)(in_stack_00000004 + 0x1fbfc) = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)(in_stack_00000004 + 0x1fbfc) = 0;
      }
    }
    else {
      fVar1 = in_stack_00000008 * (float)2 + *(float *)(in_stack_00000004 + 0x1fbfc);
      *(float *)(in_stack_00000004 + 0x1fbfc) = fVar1;
      if (1.0 < fVar1) {
        *(uint *)(in_stack_00000004 + 0x1fbfc) = 0x3f800000;
      }
    }
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         ((CMotionController *)(in_stack_00000004 + 0x158));
    iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),iVar2,0.0,
               *(float *)(in_stack_00000004 + 0x1fbfc),DAT_02db89b0,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar1 = *(float *)(in_stack_00000004 + 0xbe54) * (float)3.1415926535000001 * (float)2
            * in_stack_00000014 + *(float *)(in_stack_00000004 + 0x1fc00);
    *(float *)(in_stack_00000004 + 0x1fc00) = fVar1;
    if ((float)0.78539816337500001 < fVar1) {
      *(uint *)(in_stack_00000004 + 0x1fc00) = 0x3f490fdb;
    }
    if (*(float *)(in_stack_00000004 + 0x1fc00) < (float)-0.78539816337500001) {
      *(uint *)(in_stack_00000004 + 0x1fc00) = 0xbf490fdb;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fc00),in_stack_ffffffd4);
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fStack_10 = local_20;
    *(uint *)(&stack0xfffffff4 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar3 * -8);
    iVar2 = DAT_02db89b0;
    *(uint *)(&stack0xfffffff8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    *(uint *)
     ((int)(&stack0xfffffff8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
               (CQuaternion4f *)&stack0xfffffff0,*(float *)(in_stack_00000004 + 0x1fbfc),iVar2,
               blend_callback);
  }
  return;
}
