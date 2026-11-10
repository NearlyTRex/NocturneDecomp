// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_00418b10
// Address: 00418b10
// Address Range: [[00418b10, 00418b2b]]
// Convention: unknown
// Signature: void core_bodypart_cpp_factoryFuncBodyPart_FUN_00418b10(void)

#include "nocturne.h"

void core_bodypart_cpp_factoryFuncBodyPart_FUN_00418b10(void)

{
  CBodyPart *this_ptr;
  
  this_ptr = (CBodyPart *)debugAllocTracked1(0xf34);
  if (this_ptr == (CBodyPart *)0x0) {
    return;
  }
  core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(this_ptr);
  return;
}
