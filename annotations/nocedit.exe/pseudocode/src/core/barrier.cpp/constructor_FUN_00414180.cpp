// Name: core_barrier.cpp_constructor_FUN_00414180
// Address: 00414180
// Address Range: [[00414180, 004141a2]]
// Convention: unknown
// Signature: undefined core_barrier.cpp_constructor_FUN_00414180()

#include "nocturne.h"

void core_barrier_cpp_constructor_FUN_00414180(void)

{
  CBarrier *this_ptr;
  
  this_ptr = (CBarrier *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x230,"..\\core\\barrier.cpp",0x26);
  if (this_ptr == (CBarrier *)0x0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_004141c0(this_ptr);
  return;
}
