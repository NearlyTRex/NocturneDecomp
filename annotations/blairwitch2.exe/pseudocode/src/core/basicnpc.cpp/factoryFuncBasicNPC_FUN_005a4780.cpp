// Name: core_basicnpc.cpp_factoryFuncBasicNPC_FUN_005a4780
// Address: 005a4780
// Address Range: [[005a4780, 005a479b]]
// Convention: __cdecl
// Signature: CBasicNPC * __cdecl core_basicnpc_cpp_factoryFuncBasicNPC_FUN_005a4780(void)

#include "nocturne.h"

CBasicNPC * __cdecl core_basicnpc_cpp_factoryFuncBasicNPC_FUN_005a4780(void)

{
  CBasicNPC *pCVar1;
  
  pCVar1 = (CBasicNPC *)operator_new(0x11850);
  if (pCVar1 == (CBasicNPC *)0x0) {
    return (CBasicNPC *)0x0;
  }
  pCVar1 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(pCVar1);
  return pCVar1;
}
