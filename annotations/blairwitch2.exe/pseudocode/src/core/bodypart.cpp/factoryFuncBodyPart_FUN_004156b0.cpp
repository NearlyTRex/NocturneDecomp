// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_004156b0
// Address: 004156b0
// Address Range: [[004156b0, 004156cb]]
// Convention: unknown
// Signature: void core_bodypart_cpp_factoryFuncBodyPart_FUN_004156b0(void)

#include "nocturne.h"

void core_bodypart_cpp_factoryFuncBodyPart_FUN_004156b0(void)

{
  CBodyPart *this_ptr;
  
  this_ptr = (CBodyPart *)operator_new(0x1344);
  if (this_ptr == (CBodyPart *)0x0) {
    return;
  }
  core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(this_ptr);
  return;
}
