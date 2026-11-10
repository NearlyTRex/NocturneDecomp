// Name: core_gore.cpp_CBloodPool_processAge_FUN_004cdfc0
// Address: 004cdfc0
// Address Range: [[004cdfc0, 004cdfed]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004cdfc0(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004cdfc0(CBloodPool *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)_DAT_005c46e1) {
    return;
  }
  this_ptr->age = 3.625;
  return;
}
