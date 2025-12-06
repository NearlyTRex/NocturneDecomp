// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// Address: 0042dcd0
// Address Range: [[0042dcd0, 0042ddc8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

{
  CQuaternion4f *pCVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1840 [1519];
  CQuaternion4f *in_stack_ffffff8c;
  CQuaternion4f *in_stack_ffffff90;
  float in_stack_ffffff94;
  uint local_64;
  uint uStack_58;
  byte local_54 [16];
  float local_44 [9];
  float fStack_20;
  float afStack_1c [5];
  float fStack_8;
  
  bVar4 = 0;
  if (0.0 < *(float *)(this_ptr->field11_0x25a0 + 0x40)) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x44) < 0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xde5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x3c),unaff_EDI);
    local_44[1] = afStack_1c[0];
    local_44[(uint)bVar4 * -2 + 2] = afStack_1c[(uint)bVar4 * -2 + 1];
    local_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
         afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 2];
    (local_44 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 3)[(uint)bVar4 * -2 + 1] =
         (afStack_1c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 2)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x38),(float)(local_44 + 2));
    local_54._8_4_ = fStack_8;
    local_44[(uint)bVar4 * -2 + -1] = *(float *)(&stack0xfffffffc + (uint)bVar4 * -8);
    local_44[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
         *(float *)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (local_44 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1] =
         *(float *)((int)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
                   ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_005f7640
              ((CQuaternion4f *)(local_54 + 0xc),in_stack_ffffff8c,in_stack_ffffff90);
    uStack_58 = local_64;
    *(uint *)(local_54 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8);
    *(uint *)(local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->model).bone_transform.bone_rotations +
               *(int *)(this_ptr->field11_0x25a0 + 0x44),(CQuaternion4f *)local_54,
               *(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x40),in_stack_ffffff94);
    pCVar1 = (this_ptr->model).bone_transform.bone_rotations +
             *(int *)(this_ptr->field11_0x25a0 + 0x44);
    pfVar2 = (float *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar1->w = fStack_20;
    pfVar3 = pfVar2 + (uint)bVar4 * -2 + 1;
    *pfVar2 = afStack_1c[(uint)bVar4 * -2];
    *pfVar3 = afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar3[(uint)bVar4 * -2 + 1] =
         (afStack_1c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  }
  return;
}
