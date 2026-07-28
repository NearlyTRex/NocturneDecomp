// Name: core_bodypart.cpp_FUN_00415cf0
// Address: 00415cf0
// Address Range: [[00415cf0, 00415d0b]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00415cf0(void)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00415cf0(void)

{
  CBodyPart *this_ptr;
  
  this_ptr = (CBodyPart *)FUN_0056497c(0xf18);
  if (this_ptr == (CBodyPart *)0x0) {
    return;
  }
  core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(this_ptr);
  return;
}
