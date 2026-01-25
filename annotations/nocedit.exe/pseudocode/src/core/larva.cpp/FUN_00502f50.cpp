// Name: core_larva.cpp_FUN_00502f50
// Address: 00502f50
// Address Range: [[00502f50, 00502f72]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00502f50()

#include "nocturne.h"

void core_larva_cpp_FUN_00502f50(void)

{
  CLarva *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbec8,"..\\core\\larva.cpp",0x36);
  if (this_ptr == (CLarva *)0x0) {
    return;
  }
  core_larva_cpp_CLarva_ctor_FUN_00502f90(this_ptr);
  return;
}
