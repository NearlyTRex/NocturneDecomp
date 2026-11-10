// Name: core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30
// Address: 00433b30
// Address Range: [[00433b30, 00433c42]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter *this_ptr)

{
  float *pfVar1;
  byte bVar2;
  float afStackY_1860 [1521];
  int bone_index;
  uint local_84;
  uint local_74;
  uint local_64;
  uint local_54;
  CQuaternion4f local_44;
  uint local_34;
  float afStack_30 [7];
  float local_14;
  
  bVar2 = 0;
  if (0.0 < *(float *)&this_ptr->field_0x2770) {
    if (*(int *)&this_ptr->field_0x2774 < 0) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x1036;
      core_main_c_FUN_005030e0("CCharacter::applyLookAt - never set lookAtHeadBone for actor %s",this_ptr);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(*(uint *)&this_ptr->field_0x276c);
    local_54 = afStack_30[3];
    *(float *)((int)&stack0xffffffb0 + (uint)bVar2 * 0xfffffffe * 4) =
         afStack_30[(uint)bVar2 * -2 + 4];
    afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -7] =
         afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
    (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + -7)[(uint)bVar2 * -2 + 1] =
         (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30
              (*(uint *)&this_ptr->field_0x2768,&stack0xffffffac);
    local_64 = local_84;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xffffff9c);
    local_74 = local_34;
    *(float *)((int)&stack0xffffff90 + (uint)bVar2 * 0xfffffffe * 4) = afStack_30[(uint)bVar2 * -2];
    *(float *)(&stack0xffffff94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    *(float *)((int)(&stack0xffffff94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
              ((uint)bVar2 * -2 + 1) * 4) =
         (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
    bone_index = *(int *)&this_ptr->field_0x2774;
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              ((this_ptr->model).rest_bone_scales + bone_index * 4 + 0x67,&stack0xffffff8c,
               *(uint *)&this_ptr->field_0x2770);
    local_44.w = local_14;
    pfVar1 = (float *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    *(float *)((int)&local_44 + (uint)bVar2 * -8 + 4) = afStack_30[(uint)bVar2 * -2 + 8];
    *pfVar1 = afStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9];
    pfVar1[(uint)bVar2 * -2 + 1] =
         (afStack_30 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 9)[(uint)bVar2 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0
              (&this_ptr->model,&local_44,bone_index);
  }
  return;
}
