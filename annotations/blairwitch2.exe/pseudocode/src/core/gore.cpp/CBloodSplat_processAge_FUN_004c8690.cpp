// Name: core_gore.cpp_CBloodSplat_processAge_FUN_004c8690
// Address: 004c8690
// Address Range: [[004c8690, 004c86bd]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004c8690(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004c8690(CBloodSplat *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)_DAT_005d946a) {
    return;
  }
  this_ptr->age = 2.0;
  return;
}
