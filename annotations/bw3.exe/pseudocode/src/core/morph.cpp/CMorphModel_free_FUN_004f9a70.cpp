// Name: core_morph.cpp_CMorphModel_free_FUN_004f9a70
// Address: 004f9a70
// Address Range: [[004f9a70, 004f9ac5]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_free_FUN_004f9a70(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_free_FUN_004f9a70(CMorphModel *this_ptr)

{
  if (*(int *)&this_ptr->field_0x58 != 0) {
    FUN_005a3770(*(int *)&this_ptr->field_0x58);
    *(uint *)&this_ptr->field_0x58 = 0;
  }
  if (*(int *)&this_ptr->field_0x60 != 0) {
    FUN_005a3770(*(int *)&this_ptr->field_0x60);
    *(uint *)&this_ptr->field_0x60 = 0;
  }
  *(uint *)&this_ptr->field_0x5c = 0;
  *(uint *)&this_ptr->field_0x64 = 0;
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x54 = 0;
  return;
}
