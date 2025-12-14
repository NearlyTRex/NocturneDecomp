// Name: core_gasmask.cpp_FUN_004e5cc0
// Address: 004e5cc0
// Address Range: [[004e5cc0, 004e5ce2]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_FUN_004e5cc0()

#include "nocturne.h"

void core_gasmask_cpp_FUN_004e5cc0(void)

{
  CGasMask *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\gasmask.cpp",0x1e);
  if (this_ptr == (CGasMask *)0x0) {
    return;
  }
  core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr);
  return;
}
