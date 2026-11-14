// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0
// Address: 00449ff0
// Address Range: [[00449ff0, 0044a012]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00449ff0(CDemonLight *this_ptr)

{
  if (this_ptr->master_zbuffer == (void *)0x0) {
    return;
  }
  (this_ptr->base).zbuffer_raw = (void *)0x0;
  this_ptr->master_zbuffer = (void *)0x0;
  return;
}
