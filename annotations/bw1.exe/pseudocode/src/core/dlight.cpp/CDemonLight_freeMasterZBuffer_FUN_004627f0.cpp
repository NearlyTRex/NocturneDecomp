// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0
// Address: 004627f0
// Address Range: [[004627f0, 00462812]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0(CDemonLight *this_ptr)

{
  if (this_ptr->master_zbuffer == (void *)0x0) {
    return;
  }
  (this_ptr->base).zbuffer_raw = (void *)0x0;
  this_ptr->master_zbuffer = (void *)0x0;
  return;
}
