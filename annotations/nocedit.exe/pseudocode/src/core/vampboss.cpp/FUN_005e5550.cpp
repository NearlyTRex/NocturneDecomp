// Name: core_vampboss.cpp_FUN_005e5550
// Address: 005e5550
// Address Range: [[005e5550, 005e5572]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e5550()

#include "nocturne.h"

void core_vampboss_cpp_FUN_005e5550(void)

{
  CVampireBoss *this_ptr;
  
  this_ptr = (CVampireBoss *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xce920,"..\\core\\vampboss.cpp",0x60);
  if (this_ptr == (CVampireBoss *)0x0) {
    return;
  }
  core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(this_ptr);
  return;
}
