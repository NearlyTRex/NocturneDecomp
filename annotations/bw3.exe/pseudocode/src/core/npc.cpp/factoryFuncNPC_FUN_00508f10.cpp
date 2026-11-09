// Name: core_npc.cpp_factoryFuncNPC_FUN_00508f10
// Address: 00508f10
// Address Range: [[00508f10, 00508f2b]]
// Convention: unknown
// Signature: void core_npc_cpp_factoryFuncNPC_FUN_00508f10(void)

#include "nocturne.h"

void core_npc_cpp_factoryFuncNPC_FUN_00508f10(void)

{
  CNPC *this_ptr;
  
  this_ptr = (CNPC *)FUN_005a3cb2(0x206c8);
  if (this_ptr == (CNPC *)0x0) {
    return;
  }
  core_npc_cpp_CNPC_ctor_FUN_00508f40(this_ptr);
  return;
}
