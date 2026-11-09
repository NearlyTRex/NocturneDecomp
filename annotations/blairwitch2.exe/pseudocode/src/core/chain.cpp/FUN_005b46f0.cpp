// Name: core_chain.cpp_FUN_005b46f0
// Address: 005b46f0
// Address Range: [[005b46f0, 005b470b]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_005b46f0(void)

#include "nocturne.h"

void core_chain_cpp_FUN_005b46f0(void)

{
  CChain *this_ptr;
  
  this_ptr = (CChain *)FUN_005b8be2(0x578);
  if (this_ptr == (CChain *)0x0) {
    return;
  }
  core_chain_cpp_CChain_ctor_FUN_005b4720(this_ptr);
  return;
}
