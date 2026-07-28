// Name: core_chain.cpp_FUN_0042b720
// Address: 0042b720
// Address Range: [[0042b720, 0042b73b]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_0042b720(void)

#include "nocturne.h"

void core_chain_cpp_FUN_0042b720(void)

{
  CChain *this_ptr;
  
  this_ptr = (CChain *)FUN_0056497c(0x570);
  if (this_ptr == (CChain *)0x0) {
    return;
  }
  core_chain_cpp_CChain_ctor_FUN_0042b750(this_ptr);
  return;
}
