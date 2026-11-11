// Name: core_construc.cpp_FUN_004445d0
// Address: 004445d0
// Address Range: [[004445d0, 004445eb]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_004445d0(void)

#include "nocturne.h"

void core_construc_cpp_FUN_004445d0(void)

{
  CConstructRed *this_ptr;
  
  this_ptr = (CConstructRed *)operator_new(0xd860);
  if (this_ptr == (CConstructRed *)0x0) {
    return;
  }
  core_construc_cpp_CConstructRed_ctor_FUN_00444600(this_ptr);
  return;
}
