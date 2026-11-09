// Name: core_gore.cpp_FUN_004c8ce0
// Address: 004c8ce0
// Address Range: [[004c8ce0, 004c8d0d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004c8ce0(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004c8ce0(CBloodPool *this_ptr)

{
  *(float *)&this_ptr->field_0x18 =
       *(float *)&g_CGamePtr->field_0x284 + *(float *)&this_ptr->field_0x18;
  if (*(float *)&this_ptr->field_0x18 <= (float)_DAT_005d94e2) {
    return;
  }
  *(uint *)&this_ptr->field_0x18 = 0x40680000;
  return;
}
