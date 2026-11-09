// Name: core_lever.cpp_FUN_004e20e0
// Address: 004e20e0
// Address Range: [[004e20e0, 004e213d]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_FUN_004e20e0(CLever *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lever_cpp_FUN_004e20e0(CLever *this_ptr)

{
  *(uint *)&this_ptr->field_0x574 = 1;
  if (*(float *)&this_ptr->field_0x438 < (float)_DAT_005dbf52) {
    *(uint *)&this_ptr->field_0x578 = 0x3f800000;
    return;
  }
  *(uint *)&this_ptr->field_0x578 = 0;
  return;
}
