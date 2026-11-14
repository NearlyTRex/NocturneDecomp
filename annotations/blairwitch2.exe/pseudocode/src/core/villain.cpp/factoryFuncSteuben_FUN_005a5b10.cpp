// Name: core_villain.cpp_factoryFuncSteuben_FUN_005a5b10
// Address: 005a5b10
// Address Range: [[005a5b10, 005a5b2b]]
// Convention: __cdecl
// Signature: CSteuben * __cdecl core_villain_cpp_factoryFuncSteuben_FUN_005a5b10(void)

#include "nocturne.h"

CSteuben * __cdecl core_villain_cpp_factoryFuncSteuben_FUN_005a5b10(void)

{
  CSteuben *pCVar1;
  
  pCVar1 = (CSteuben *)operator_new(0x11850);
  if (pCVar1 == (CSteuben *)0x0) {
    return (CSteuben *)0x0;
  }
  pCVar1 = core_villain_cpp_CSteuben_ctor_FUN_005a5b40(pCVar1);
  return pCVar1;
}
