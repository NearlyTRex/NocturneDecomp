// Name: core_schngeis.cpp_factoryFuncSchnellGeist_FUN_005a2f80
// Address: 005a2f80
// Address Range: [[005a2f80, 005a2f9b]]
// Convention: __cdecl
// Signature: CSchnellGeist * __cdecl core_schngeis_cpp_factoryFuncSchnellGeist_FUN_005a2f80(void)

#include "nocturne.h"

CSchnellGeist * __cdecl core_schngeis_cpp_factoryFuncSchnellGeist_FUN_005a2f80(void)

{
  CSchnellGeist *pCVar1;
  
  pCVar1 = (CSchnellGeist *)operator_new(0x11870);
  if (pCVar1 == (CSchnellGeist *)0x0) {
    return (CSchnellGeist *)0x0;
  }
  pCVar1 = core_schngeis_cpp_CSchnellGeist_ctor_FUN_005a2fb0(pCVar1);
  return pCVar1;
}
