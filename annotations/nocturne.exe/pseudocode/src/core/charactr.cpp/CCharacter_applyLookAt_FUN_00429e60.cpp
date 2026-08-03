// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00429e60
// Address: 00429e60
// Address Range: [[00429e60, 00429f58]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00429e60(CCharacter *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1850 [1522];
  CQuaternion4f *pCVar5;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  CQuaternion4f local_54;
  CQuaternion4f local_44;
  CQuaternion4f local_34;
  CQuaternion4f local_24;
  CQuaternion4f local_14;
  
  bVar4 = 0;
  if (0.0 < this_ptr->look_at_weight) {
    if (this_ptr->look_at_head_bone < 0) {
      g_CHAR_PTR_01cc4800 = "..\\core\\charactr.cpp";
      g_INT_01cc4804 = 0xdf9;
      core_main_c_FUN_004c8440("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(this_ptr->look_at_pitch,&local_24);
    local_44.w = local_24.w;
    puVar2 = (uint *)((int)&local_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar1 = (uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_44 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
    pCVar5 = &local_44;
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(this_ptr->look_at_yaw,&local_14);
    local_54.w = local_14.w;
    puVar2 = (uint *)((int)&local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar1 = (uint *)((int)&local_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_54 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_14 + (uint)bVar4 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_54,pCVar5,&local_74);
    local_64.w = local_74.w;
    puVar2 = (uint *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    puVar1 = (uint *)((int)&local_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_64 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_74 + (uint)bVar4 * -8 + 4);
    *puVar2 = *puVar1;
    puVar2[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              ((this_ptr->model).bone_transform.pose_data.bone_rotations +
               this_ptr->look_at_head_bone,&local_64,this_ptr->look_at_weight,&local_34);
    pCVar5 = (this_ptr->model).bone_transform.pose_data.bone_rotations + this_ptr->look_at_head_bone
    ;
    puVar2 = (uint *)((int)pCVar5 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar5->w = local_34.w;
    puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar1 = (uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *puVar2 = *(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4);
    *puVar3 = *puVar1;
    puVar3[(uint)bVar4 * -2 + 1] = puVar1[(uint)bVar4 * -2 + 1];
  }
  return;
}
