// Name: core_charactr.cpp_CCharacter_FUN_0042d300
// Address: 0042d300
// Address Range: [[0042d300, 0042d35e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d300(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d300(CCharacter *this_ptr)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffffc8;
  
  bVar3 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)this_ptr->carry_hands[in_stack_00000008].field2_0xc,
             (this_ptr->model).bone_transform.bone_world_matrices +
             *(int *)this_ptr->carry_hands[in_stack_00000008].field0_0x0,in_stack_ffffffc8);
  puVar2 = (uint *)&stack0xffffffc8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
