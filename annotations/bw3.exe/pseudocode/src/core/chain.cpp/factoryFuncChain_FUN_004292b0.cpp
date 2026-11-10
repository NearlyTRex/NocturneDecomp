// Name: core_chain.cpp_factoryFuncChain_FUN_004292b0
// Address: 004292b0
// Address Range: [[004292b0, 004292cb]]
// Convention: unknown
// Signature: void core_chain_cpp_factoryFuncChain_FUN_004292b0(void)

#include "nocturne.h"

void core_chain_cpp_factoryFuncChain_FUN_004292b0(void)

{
  CChain *this_ptr;
  
  this_ptr = (CChain *)debugAllocTracked1(0x578);
  if (this_ptr == (CChain *)0x0) {
    return;
  }
  core_chain_cpp_CChain_ctor_FUN_004292e0(this_ptr);
  return;
}
