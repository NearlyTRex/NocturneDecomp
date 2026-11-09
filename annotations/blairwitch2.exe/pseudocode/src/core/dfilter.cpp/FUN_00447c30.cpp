// Name: core_dfilter.cpp_FUN_00447c30
// Address: 00447c30
// Address Range: [[00447c30, 00447c4f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_FUN_00447c30(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_FUN_00447c30(CFilterFX *this_ptr)

{
  if (*(int *)&this_ptr->field_0x4 == 0) {
    return;
  }
  FUN_005b86a0(*(int *)&this_ptr->field_0x4);
  *(uint *)&this_ptr->field_0x4 = 0;
  return;
}
