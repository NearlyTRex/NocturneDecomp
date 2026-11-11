// Name: core_npc.cpp_factoryFuncNPC_FUN_00531640
// Address: 00531640
// Address Range: [[00531640, 0053165b]]
// Convention: unknown
// Signature: void core_npc_cpp_factoryFuncNPC_FUN_00531640(void)

#include "nocturne.h"

void core_npc_cpp_factoryFuncNPC_FUN_00531640(void)

{
  CNPC *this_ptr;
  
  this_ptr = (CNPC *)operator_new(0x1fab8);
  if (this_ptr == (CNPC *)0x0) {
    return;
  }
  core_npc_cpp_CNPC_ctor_FUN_00531670(this_ptr);
  return;
}
