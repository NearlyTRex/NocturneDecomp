// Name: core_boxactor.cpp_FUN_004216c0
// Address: 004216c0
// Address Range: [[004216c0, 004216e2]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004216c0()

#include "nocturne.h"

void core_boxactor_cpp_FUN_004216c0(void)

{
  CBoxActor *this_ptr;
  
  this_ptr = (CBoxActor *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\boxactor.cpp",0x39);
  if (this_ptr == (CBoxActor *)0x0) {
    return;
  }
  core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(this_ptr);
  return;
}
