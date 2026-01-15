// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// Address: 0042dcd0
// Address Range: [[0042dcd0, 0042ddc8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

{
  CQuaternion4f *unaff_ESI;
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1850 [1522];
  CQuaternion4f *pCVar5;
  float local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CQuaternion4f local_44;
  float local_34;
  float afStack_30 [7];
  float local_14;
  
  bVar4 = 0;
  if (0.0 < *(float *)(this_ptr->field11_0x25a0 + 0x40)) {
    if (*(int *)(this_ptr->field11_0x25a0 + 0x44) < 0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xde5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x3c),(float)unaff_ESI);
    local_44.w = afStack_30[3];
    pfVar2 = (float *)((int)&local_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_44 + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2 + 4];
    *pfVar2 = afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 5];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_30 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 5)[(uint)bVar4 * -2 + 1];
    pCVar5 = &local_44;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x38),(float)pCVar5);
    local_54.w = local_14;
    pfVar2 = (float *)((int)&local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(float *)((int)&local_54 + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2 + 8];
    *pfVar2 = afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 9];
    pfVar2[(uint)bVar4 * -2 + 1] =
         (afStack_30 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 9)[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_54,pCVar5,unaff_ESI);
    local_64.w = local_74;
    puVar1 = (uint *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_64 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffff90 + (uint)bVar4 * -8);
    *puVar1 = *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar1[(uint)bVar4 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->model).bone_transform.bone_rotations +
               *(int *)(this_ptr->field11_0x25a0 + 0x44),&local_64,
               *(CQuaternion4f **)(this_ptr->field11_0x25a0 + 0x40),(float)unaff_ESI);
    pCVar5 = (this_ptr->model).bone_transform.bone_rotations +
             *(int *)(this_ptr->field11_0x25a0 + 0x44);
    pfVar2 = (float *)((int)pCVar5 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar5->w = local_34;
    pfVar3 = pfVar2 + (uint)bVar4 * -2 + 1;
    *pfVar2 = afStack_30[(uint)bVar4 * -2];
    *pfVar3 = afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar3[(uint)bVar4 * -2 + 1] =
         (afStack_30 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  }
  return;
}
