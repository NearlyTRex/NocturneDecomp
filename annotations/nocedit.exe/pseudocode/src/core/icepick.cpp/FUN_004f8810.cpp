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
  float unaff_ESI;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  float afStackY_180c [1519];
  code *blend_callback;
  float local_30;
  CQuaternion4f local_20;
  
  bVar4 = 0;
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
            * in_stack_00000008 + *(float *)(in_stack_00000004 + 0x1fc00);
    *(float *)(in_stack_00000004 + 0x1fc00) = fVar1;
    if ((float)0.78539816337500001 < fVar1) {
      *(uint *)(in_stack_00000004 + 0x1fc00) = 0x3f490fdb;
    }
    if (*(float *)(in_stack_00000004 + 0x1fc00) < (float)-0.78539816337500001) {
      *(uint *)(in_stack_00000004 + 0x1fc00) = 0xbf490fdb;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(in_stack_00000004 + 0x1fc00),unaff_ESI);
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    local_20.w = local_30;
    puVar3 = (uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
    iVar2 = DAT_02db89b0;
    *puVar3 = *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar3[(uint)bVar4 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_20,
               *(float *)(in_stack_00000004 + 0x1fbfc),iVar2,blend_callback);
  }
  return;
}
