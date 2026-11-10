// Name: core_chain.cpp_factoryFuncChain_FUN_00435630
// Address: 00435630
// Address Range: [[00435630, 0043564b]]
// Convention: unknown
// Signature: void core_chain_cpp_factoryFuncChain_FUN_00435630(void)

#include "nocturne.h"

void core_chain_cpp_factoryFuncChain_FUN_00435630(void)

{
  CChain *this_ptr;
  
  this_ptr = (CChain *)debugAllocTracked1(0x578);
  if (this_ptr == (CChain *)0x0) {
    return;
  }
  core_chain_cpp_CChain_ctor_FUN_00435660(this_ptr);
  return;
}
