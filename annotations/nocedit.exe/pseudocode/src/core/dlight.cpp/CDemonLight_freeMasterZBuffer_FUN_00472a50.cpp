// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
// Address: 00472a50
// Address Range: [[00472a50, 00472a72]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight *this_ptr)

{
  if (this_ptr->restore_memory_size == 0) {
    return;
  }
  (this_ptr->base).zbuffer_raw = (void *)0x0;
  this_ptr->restore_memory_size = 0;
  return;
}
