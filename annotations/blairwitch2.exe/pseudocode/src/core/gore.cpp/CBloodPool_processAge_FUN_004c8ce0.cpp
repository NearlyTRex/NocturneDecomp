// Name: core_gore.cpp_CBloodPool_processAge_FUN_004c8ce0
// Address: 004c8ce0
// Address Range: [[004c8ce0, 004c8d0d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004c8ce0(CBloodPool *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004c8ce0(CBloodPool *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)_DAT_005d94e2) {
    return;
  }
  this_ptr->age = 3.625;
  return;
}
