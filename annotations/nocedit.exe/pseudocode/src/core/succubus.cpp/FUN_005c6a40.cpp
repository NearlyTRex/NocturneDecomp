// Name: core_succubus.cpp_FUN_005c6a40
// Address: 005c6a40
// Address Range: [[005c6a40, 005c6a62]]
// Convention: unknown
// Signature: undefined core_succubus.cpp_FUN_005c6a40()

#include "nocturne.h"

void core_succubus_cpp_FUN_005c6a40(void)

{
  CSuccubus *this_ptr;
  
  this_ptr = (CSuccubus *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xef68,"..\\core\\succubus.cpp",0x4b);
  if (this_ptr == (CSuccubus *)0x0) {
    return;
  }
  core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(this_ptr);
  return;
}
