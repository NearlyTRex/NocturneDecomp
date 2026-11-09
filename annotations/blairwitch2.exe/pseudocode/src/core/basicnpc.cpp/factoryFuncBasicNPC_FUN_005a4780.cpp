// Name: core_basicnpc.cpp_factoryFuncBasicNPC_FUN_005a4780
// Address: 005a4780
// Address Range: [[005a4780, 005a479b]]
// Convention: unknown
// Signature: void core_basicnpc_cpp_factoryFuncBasicNPC_FUN_005a4780(void)

#include "nocturne.h"

void core_basicnpc_cpp_factoryFuncBasicNPC_FUN_005a4780(void)

{
  CBasicNPC *this_ptr;
  
  this_ptr = (CBasicNPC *)FUN_005b8be2(0x11850);
  if (this_ptr == (CBasicNPC *)0x0) {
    return;
  }
  core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(this_ptr);
  return;
}
