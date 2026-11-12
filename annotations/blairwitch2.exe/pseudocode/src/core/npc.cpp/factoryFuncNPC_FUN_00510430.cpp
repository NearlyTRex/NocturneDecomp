// Name: core_npc.cpp_factoryFuncNPC_FUN_00510430
// Address: 00510430
// Address Range: [[00510430, 0051044b]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00510430(void)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00510430(void)

{
  CNPC *pCVar1;
  
  pCVar1 = (CNPC *)operator_new(0x24348);
  if (pCVar1 == (CNPC *)0x0) {
    return (CNPC *)0x0;
  }
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_00510460(pCVar1);
  return pCVar1;
}
