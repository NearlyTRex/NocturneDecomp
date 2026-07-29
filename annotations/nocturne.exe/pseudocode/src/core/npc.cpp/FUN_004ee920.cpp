// Name: core_npc.cpp_FUN_004ee920
// Address: 004ee920
// Address Range: [[004ee920, 004ee93b]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_004ee920(void)

#include "nocturne.h"

void core_npc_cpp_FUN_004ee920(void)

{
  CNPC *this_ptr;
  
  this_ptr = (CNPC *)FUN_0056497c(0x1f570);
  if (this_ptr == (CNPC *)0x0) {
    return;
  }
  core_npc_cpp_FUN_004ee950(this_ptr);
  return;
}
