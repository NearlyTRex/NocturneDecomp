// Name: core_gore.cpp_FUN_004e4f70
// Address: 004e4f70
// Address Range: [[004e4f70, 004e4f9d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004e4f70(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_FUN_004e4f70(CBloodSplat *this_ptr)

{
  *(float *)&this_ptr->field_0x24 =
       *(float *)&g_CGamePtr->field_0x294 + *(float *)&this_ptr->field_0x24;
  if (*(float *)&this_ptr->field_0x24 <= (float)_DAT_005e404d) {
    return;
  }
  *(uint *)&this_ptr->field_0x24 = 0x40000000;
  return;
}
