// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_00414720
// Address: 00414720
// Address Range: [[00414720, 0041473b]]
// Convention: unknown
// Signature: void core_bodypart_cpp_factoryFuncBodyPart_FUN_00414720(void)

#include "nocturne.h"

void core_bodypart_cpp_factoryFuncBodyPart_FUN_00414720(void)

{
  CBodyPart *this_ptr;
  
  this_ptr = (CBodyPart *)debugAllocTracked1(0xf34);
  if (this_ptr == (CBodyPart *)0x0) {
    return;
  }
  core_bodypart_cpp_CBodyPart_ctor_FUN_00414750(this_ptr);
  return;
}
