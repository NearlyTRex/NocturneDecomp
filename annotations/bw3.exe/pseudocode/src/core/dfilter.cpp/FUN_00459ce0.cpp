// Name: core_dfilter.cpp_FUN_00459ce0
// Address: 00459ce0
// Address Range: [[00459ce0, 00459cff]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_FUN_00459ce0(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_FUN_00459ce0(CFilterFX *this_ptr)

{
  if (*(int *)&this_ptr->field_0x4 == 0) {
    return;
  }
  FUN_005a3770(*(int *)&this_ptr->field_0x4);
  *(uint *)&this_ptr->field_0x4 = 0;
  return;
}
