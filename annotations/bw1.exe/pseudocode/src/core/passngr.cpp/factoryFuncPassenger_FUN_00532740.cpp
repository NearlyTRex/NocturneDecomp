// Name: core_passngr.cpp_factoryFuncPassenger_FUN_00532740
// Address: 00532740
// Address Range: [[00532740, 0053275b]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_00532740(void)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_factoryFuncPassenger_FUN_00532740(void)

{
  CPassenger *pCVar1;
  
  pCVar1 = (CPassenger *)operator_new(0x207f8);
  if (pCVar1 == (CPassenger *)0x0) {
    return (CPassenger *)0x0;
  }
  pCVar1 = core_passngr_cpp_CPassenger_ctor_FUN_00532770(pCVar1);
  return pCVar1;
}
