// Name: core_gore.cpp_CBloodSplat_processAge_FUN_004ecad0
// Address: 004ecad0
// Address Range: [[004ecad0, 004ecafd]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004ecad0(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004ecad0(CBloodSplat *this_ptr)

{
  this_ptr->age = g_CGamePtr->delta_time_float + this_ptr->age;
  if (this_ptr->age <= (float)2) {
    return;
  }
  this_ptr->age = 2.0;
  return;
}
