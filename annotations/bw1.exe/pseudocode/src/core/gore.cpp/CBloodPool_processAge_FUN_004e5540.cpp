// Name: core_gore.cpp_CBloodPool_processAge_FUN_004e5540
// Address: 004e5540
// Address Range: [[004e5540, 004e556d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004e5540(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004e5540(CBloodPool *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)3.625) {
    return;
  }
  this_ptr->age = 3.625;
  return;
}
