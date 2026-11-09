// Name: core_gore.cpp_FUN_004c8690
// Address: 004c8690
// Address Range: [[004c8690, 004c86bd]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004c8690(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004c8690(CBloodSplat *this_ptr)

{
  *(float *)&this_ptr->field_0x24 =
       *(float *)&g_CGamePtr->field_0x284 + *(float *)&this_ptr->field_0x24;
  if (*(float *)&this_ptr->field_0x24 <= (float)_DAT_005d946a) {
    return;
  }
  *(uint *)&this_ptr->field_0x24 = 0x40000000;
  return;
}
