// Name: core_ghoul.cpp_FUN_004a8c70
// Address: 004a8c70
// Address Range: [[004a8c70, 004a8c8b]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004a8c70(void)

#include "nocturne.h"

void core_ghoul_cpp_FUN_004a8c70(void)

{
  CGhoul *this_ptr;
  
  this_ptr = (CGhoul *)FUN_0056497c(0xbda0);
  if (this_ptr == (CGhoul *)0x0) {
    return;
  }
  core_ghoul_cpp_CGhoul_ctor_FUN_004a8ca0(this_ptr);
  return;
}
