// Name: core_hotdemon.cpp_FUN_004d62e0
// Address: 004d62e0
// Address Range: [[004d62e0, 004d62fb]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d62e0(void)

#include "nocturne.h"

void core_hotdemon_cpp_FUN_004d62e0(void)

{
  CAngelForest *this_ptr;
  
  this_ptr = (CAngelForest *)FUN_005a3cb2(0xd088);
  if (this_ptr == (CAngelForest *)0x0) {
    return;
  }
  core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(this_ptr);
  return;
}
