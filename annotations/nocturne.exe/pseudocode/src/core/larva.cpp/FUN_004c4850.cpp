// Name: core_larva.cpp_FUN_004c4850
// Address: 004c4850
// Address Range: [[004c4850, 004c486b]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_004c4850(void)

#include "nocturne.h"

void core_larva_cpp_FUN_004c4850(void)

{
  CLarva *this_ptr;
  
  this_ptr = (CLarva *)FUN_0056497c(0xbd30);
  if (this_ptr == (CLarva *)0x0) {
    return;
  }
  core_larva_cpp_CLarva_ctor_FUN_004c4880(this_ptr);
  return;
}
