// Name: core_gore.cpp_FUN_004cdfc0
// Address: 004cdfc0
// Address Range: [[004cdfc0, 004cdfed]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004cdfc0(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004cdfc0(CBloodPool *this_ptr)

{
  *(float *)&this_ptr->field_0x1c =
       *(float *)&g_CGamePtr->field_0x314 + *(float *)&this_ptr->field_0x1c;
  if (*(float *)&this_ptr->field_0x1c <= (float)_DAT_005c46e1) {
    return;
  }
  *(uint *)&this_ptr->field_0x1c = 0x40680000;
  return;
}
