// Name: core_morph.cpp_CMorphModel_free_FUN_00522170
// Address: 00522170
// Address Range: [[00522170, 005221c5]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_free_FUN_00522170(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_free_FUN_00522170(CMorphModel *this_ptr)

{
  if (*(int *)&this_ptr->field_0x58 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x58);
    *(uint *)&this_ptr->field_0x58 = 0;
  }
  if (*(int *)&this_ptr->field_0x60 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x60);
    *(uint *)&this_ptr->field_0x60 = 0;
  }
  *(uint *)&this_ptr->field_0x5c = 0;
  *(uint *)&this_ptr->field_0x64 = 0;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x54 = 0;
  return;
}
