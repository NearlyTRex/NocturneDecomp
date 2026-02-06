// Name: core_charactr.cpp_CCharacter_FUN_0042d300
// Address: 0042d300
// Address Range: [[0042d300, 0042d35e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042d300(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d300(CCharacter *this_ptr)

{
  int iVar1;
  float *unaff_ESI;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  int in_stack_00000008;
  CMatrix3x4f local_38;
  
  bVar3 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&this_ptr->carry_hands[in_stack_00000008].initial_carry_transform,
             (this_ptr->model).bone_transform.bone_world_matrices +
             this_ptr->carry_hands[in_stack_00000008].bone_index,&local_38);
  pCVar2 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar3 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
