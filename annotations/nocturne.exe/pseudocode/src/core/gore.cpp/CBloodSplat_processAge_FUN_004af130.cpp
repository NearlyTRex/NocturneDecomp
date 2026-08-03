// Name: core_gore.cpp_CBloodSplat_processAge_FUN_004af130
// Address: 004af130
// Address Range: [[004af130, 004af15d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(CBloodSplat *this_ptr)

{
  this_ptr->age = g_CGame_PTR_005b9354->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)2) {
    return;
  }
  this_ptr->age = 2.0;
  return;
}
