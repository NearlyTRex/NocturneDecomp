// Name: core_hotdemon.cpp_FUN_004d6360
// Address: 004d6360
// Address Range: [[004d6360, 004d637b]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d6360(void)

#include "nocturne.h"

void core_hotdemon_cpp_FUN_004d6360(void)

{
  CAngelSpirit *this_ptr;
  
  this_ptr = (CAngelSpirit *)FUN_005a3cb2(0xd088);
  if (this_ptr == (CAngelSpirit *)0x0) {
    return;
  }
  core_hotdemon_cpp_CAngelSpirit_ctor_FUN_004d6390(this_ptr);
  return;
}
