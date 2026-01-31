// Name: core_icepick.cpp_CIcePick_FUN_004f8810
// Address: 004f8810
// Address Range: [[004f8810, 004f8967]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_FUN_004f8810(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_FUN_004f8810(CIcePick *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CMotionList *this_ptr_01;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float in_stack_00000008;
  float afStackY_180c [1519];
  code *blend_callback;
  CQuaternion4f local_30;
  CQuaternion4f local_20;
  
  bVar5 = 0;
  if (*(int *)(this_ptr->unk + 0x20) != 0) {
    if (*(int *)this_ptr->unk == 0) {
      fVar1 = *(float *)(this_ptr->unk + 0x28) - in_stack_00000008 * (float)2;
      *(float *)(this_ptr->unk + 0x28) = fVar1;
      if (fVar1 < 0.0) {
        this_ptr->unk[0x28] = '\0';
        this_ptr->unk[0x29] = '\0';
        this_ptr->unk[0x2a] = '\0';
        this_ptr->unk[0x2b] = '\0';
      }
    }
    else {
      fVar1 = in_stack_00000008 * (float)2 + *(float *)(this_ptr->unk + 0x28);
      *(float *)(this_ptr->unk + 0x28) = fVar1;
      if (1.0 < fVar1) {
        this_ptr->unk[0x28] = '\0';
        this_ptr->unk[0x29] = '\0';
        this_ptr->unk[0x2a] = -0x80;
        this_ptr->unk[0x2b] = '?';
      }
    }
    this_ptr_00 = &(this_ptr->base).base.model;
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_00,iVar2,0.0,*(float *)(this_ptr->unk + 0x28),INT_02db89b0,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar1 = *(float *)((this_ptr->base).unk2 + 0x28) * (float)3.1415926535000001 *
            (float)2 * in_stack_00000008 + *(float *)(this_ptr->unk + 0x2c);
    *(float *)(this_ptr->unk + 0x2c) = fVar1;
    if ((float)0.78539816337500001 < fVar1) {
      this_ptr->unk[0x2c] = -0x25;
      this_ptr->unk[0x2d] = '\x0f';
      this_ptr->unk[0x2e] = 'I';
      this_ptr->unk[0x2f] = '?';
    }
    if (*(float *)(this_ptr->unk + 0x2c) < (float)-0.78539816337500001) {
      this_ptr->unk[0x2c] = -0x25;
      this_ptr->unk[0x2d] = '\x0f';
      this_ptr->unk[0x2e] = 'I';
      this_ptr->unk[0x2f] = -0x41;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(*(float *)(this_ptr->unk + 0x2c),&local_30);
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    local_20.w = local_30.w;
    puVar4 = (uint *)((int)&local_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar3 = (uint *)((int)&local_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_20 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_30 + (uint)bVar5 * -8 + 4);
    iVar2 = INT_02db89b0;
    *puVar4 = *puVar3;
    puVar4[(uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (&(this_ptr->base).base.model,&local_20,*(float *)(this_ptr->unk + 0x28),iVar2,
               blend_callback);
  }
  return;
}
