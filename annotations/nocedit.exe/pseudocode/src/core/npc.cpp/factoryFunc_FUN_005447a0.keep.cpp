// Name: core_npc.cpp_factoryFunc_FUN_005447a0
// Address: 005447a0
// MANUAL RECONSTRUCTION
// Address Range: [[005447a0, 005447c2]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_factoryFunc_FUN_005447a0(void)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_factoryFunc_FUN_005447a0(void)

{
  CNPC *pCVar1;
  
  pCVar1 = (CNPC *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CNPC),"..\\core\\npc.cpp",0x2d);
  if (pCVar1 == (CNPC *)0x0) {
    return (CNPC *)0x0;
  }
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_005447e0(pCVar1);
  return pCVar1;
}
