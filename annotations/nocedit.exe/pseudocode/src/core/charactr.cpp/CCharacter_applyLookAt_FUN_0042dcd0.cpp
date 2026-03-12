// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
// Address: 0042dcd0
// Address Range: [[0042dcd0, 0042ddc8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter *this_ptr)

{
  CQuaternion4f *pCVar1;
  uint *puVar1;
  uint *puVar4;
  uint *puVar5;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1850 [1522];
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CQuaternion4f local_44;
  CQuaternion4f local_34;
  CQuaternion4f local_24;
  CQuaternion4f local_14;
  CQuaternion4f *pCVar5;
  
  bVar4 = 0;
  if (0.0 < this_ptr->look_at_weight) {
    if (this_ptr->look_at_head_bone < 0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xde5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(this_ptr->look_at_pitch,&local_24);
    local_44.w = local_24.w;
    puVar4 = (uint *)((int)&local_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar1 = (uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_44 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4);
    *puVar4 = *puVar1;
    puVar4[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
    pCVar5 = &local_44;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(this_ptr->look_at_yaw,&local_14);
    local_54.w = local_14.w;
    puVar5 = (uint *)((int)&local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar4 = (uint *)((int)&local_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_54 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_14 + (uint)bVar4 * -8 + 4);
    *puVar5 = *puVar4;
    puVar5[(uint)bVar4 * -2 + 1] = puVar4[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_54,pCVar5,&local_74);
    local_64.w = local_74.w;
    puVar5 = (uint *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar4 = (uint *)((int)&local_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_64 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_74 + (uint)bVar4 * -8 + 4);
    *puVar5 = *puVar4;
    puVar5[(uint)bVar4 * -2 + 1] = puVar4[(uint)bVar4 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((this_ptr->model).bone_transform.bone_rotations + this_ptr->look_at_head_bone,
               &local_64,this_ptr->look_at_weight,&local_34);
    pCVar1 = (this_ptr->model).bone_transform.bone_rotations + this_ptr->look_at_head_bone;
    puVar2 = (uint *)((int)pCVar1 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar1->w = local_34.w;
    puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar4 = (uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *puVar2 = *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4);
    *puVar3 = *puVar4;
    puVar3[(uint)bVar4 * -2 + 1] = puVar4[(uint)bVar4 * -2 + 1];
  }
  return;
}
