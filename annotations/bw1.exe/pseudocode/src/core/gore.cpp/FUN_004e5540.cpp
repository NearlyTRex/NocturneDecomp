// Name: core_gore.cpp_FUN_004e5540
// Address: 004e5540
// Address Range: [[004e5540, 004e556d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004e5540(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004e5540(CBloodPool *this_ptr)

{
  *(float *)&this_ptr->field_0x18 =
       *(float *)&g_CGamePtr->field_0x294 + *(float *)&this_ptr->field_0x18;
  if (*(float *)&this_ptr->field_0x18 <= (float)_DAT_005e40c5) {
    return;
  }
  *(uint *)&this_ptr->field_0x18 = 0x40680000;
  return;
}
