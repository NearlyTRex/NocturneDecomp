// Name: core_gore.cpp_FUN_004cdb20
// Address: 004cdb20
// Address Range: [[004cdb20, 004cdb4d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004cdb20(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004cdb20(CBloodSplat *this_ptr)

{
  *(float *)&this_ptr->field_0x28 =
       *(float *)&g_CGamePtr->field_0x314 + *(float *)&this_ptr->field_0x28;
  if (*(float *)&this_ptr->field_0x28 <= (float)_DAT_005c4661) {
    return;
  }
  *(uint *)&this_ptr->field_0x28 = 0x40000000;
  return;
}
