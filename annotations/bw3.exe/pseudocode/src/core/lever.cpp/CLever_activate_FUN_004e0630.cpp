// Name: core_lever.cpp_CLever_activate_FUN_004e0630
// Address: 004e0630
// Address Range: [[004e0630, 004e068d]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_activate_FUN_004e0630(CLever *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lever_cpp_CLever_activate_FUN_004e0630(CLever *this_ptr)

{
  *(uint *)&this_ptr->field_0x418 = 1;
  if (*(float *)&this_ptr->field_0x2dc < (float)_DAT_005c691a) {
    *(uint *)&this_ptr->field_0x41c = 0x3f800000;
    return;
  }
  *(uint *)&this_ptr->field_0x41c = 0;
  return;
}
