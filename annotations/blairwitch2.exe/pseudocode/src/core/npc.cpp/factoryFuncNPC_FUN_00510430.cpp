// Name: core_npc.cpp_factoryFuncNPC_FUN_00510430
// Address: 00510430
// Address Range: [[00510430, 0051044b]]
// Convention: unknown
// Signature: void core_npc_cpp_factoryFuncNPC_FUN_00510430(void)

#include "nocturne.h"

void core_npc_cpp_factoryFuncNPC_FUN_00510430(void)

{
  CNPC *this_ptr;
  
  this_ptr = (CNPC *)FUN_005b8be2(0x24348);
  if (this_ptr == (CNPC *)0x0) {
    return;
  }
  core_npc_cpp_CNPC_ctor_FUN_00510460(this_ptr);
  return;
}
