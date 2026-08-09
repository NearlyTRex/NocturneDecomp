// Name: core_npc.cpp_factoryFuncNPC_FUN_004ee920
// Address: 004ee920
// Address Range: [[004ee920, 004ee93b]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_004ee920(void)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_004ee920(void)

{
  CNPC *pCVar1;
  
  pCVar1 = operator_new(0x1f570);
  if (pCVar1 == (CNPC *)0x0) {
    return (CNPC *)0x0;
  }
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_004ee950(pCVar1);
  return pCVar1;
}
