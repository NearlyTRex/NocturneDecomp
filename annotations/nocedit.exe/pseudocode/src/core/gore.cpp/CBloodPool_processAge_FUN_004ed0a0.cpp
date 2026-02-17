// Name: core_gore.cpp_CBloodPool_processAge_FUN_004ed0a0
// Address: 004ed0a0
// Address Range: [[004ed0a0, 004ed0cd]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004ed0a0(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004ed0a0(CBloodPool *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)3.625) {
    return;
  }
  this_ptr->age = 3.625;
  return;
}
