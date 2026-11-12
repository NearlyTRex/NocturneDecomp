// Name: core_npc.cpp_factoryFuncNPC_FUN_00531640
// Address: 00531640
// Address Range: [[00531640, 0053165b]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00531640(void)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00531640(void)

{
  CNPC *pCVar1;
  
  pCVar1 = (CNPC *)operator_new(0x1fab8);
  if (pCVar1 == (CNPC *)0x0) {
    return (CNPC *)0x0;
  }
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_00531670(pCVar1);
  return pCVar1;
}
