// Name: core_gore.cpp_CBloodSplat_processAge_FUN_004e4f70
// Address: 004e4f70
// Address Range: [[004e4f70, 004e4f9d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004e4f70(CBloodSplat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004e4f70(CBloodSplat *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)_DAT_005e404d) {
    return;
  }
  this_ptr->age = 2.0;
  return;
}
