// Name: core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80
// Address: 00432e80
// Address Range: [[00432e80, 00432f02]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_3c [6];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar4 = 0;
  if ((this_ptr->model).model_name[0] != '\0') {
    core_skeleton_cpp_FUN_0056ae70(&this_ptr->model);
    puVar2 = local_3c;
    puVar3 = &local_24;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((uint *)&this_ptr->field_0x2788 != &local_24) {
      *(uint *)&this_ptr->field_0x2788 = local_24;
      *(uint *)&this_ptr->field_0x278c = local_20;
      *(uint *)&this_ptr->field_0x2790 = local_1c;
    }
    if ((uint *)&this_ptr->field_0x2794 != &local_18) {
      *(uint *)&this_ptr->field_0x2794 = local_18;
      *(uint *)&this_ptr->field_0x2798 = local_14;
      *(uint *)&this_ptr->field_0x279c = local_10;
      return;
    }
  }
  return;
}
