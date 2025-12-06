// Name: core_passngr.cpp_FUN_00545af0
// Address: 00545af0
// Address Range: [[00545af0, 00545b12]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00545af0()

#include "nocturne.h"

void core_passngr_cpp_FUN_00545af0(void)

{
  CPassenger *this_ptr;
  
  this_ptr = (CPassenger *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x20448,"..\\core\\passngr.cpp",0x43);
  if (this_ptr == (CPassenger *)0x0) {
    return;
  }
  core_passngr_cpp_CPassenger_ctor_FUN_00545b30(this_ptr);
  return;
}
