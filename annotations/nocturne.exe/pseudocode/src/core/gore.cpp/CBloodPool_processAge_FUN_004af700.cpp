// Name: core_gore.cpp_CBloodPool_processAge_FUN_004af700
// Address: 004af700
// Address Range: [[004af700, 004af72d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004af700(CBloodPool *this_ptr)

{
  this_ptr->age = g_CGame_PTR_005b9354->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)3.625) {
    return;
  }
  this_ptr->age = 3.625;
  return;
}
