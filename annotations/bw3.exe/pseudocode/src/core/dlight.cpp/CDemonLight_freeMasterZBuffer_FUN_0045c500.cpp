// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500
// Address: 0045c500
// Address Range: [[0045c500, 0045c522]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500(CDemonLight *this_ptr)

{
  if (this_ptr->master_zbuffer == (void *)0x0) {
    return;
  }
  (this_ptr->base).zbuffer_raw = (void *)0x0;
  this_ptr->master_zbuffer = (void *)0x0;
  return;
}
