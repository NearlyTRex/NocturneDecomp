// Name: core_npc.cpp_factoryFuncNPC_FUN_00508f10
// Address: 00508f10
// Address Range: [[00508f10, 00508f2b]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00508f10(void)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00508f10(void)

{
  CNPC *pCVar1;
  
  pCVar1 = (CNPC *)operator_new(0x206c8);
  if (pCVar1 == (CNPC *)0x0) {
    return (CNPC *)0x0;
  }
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_00508f40(pCVar1);
  return pCVar1;
}
