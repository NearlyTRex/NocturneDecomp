// Name: core_passngr.cpp_factoryFunc_FUN_004ef4b0
// Address: 004ef4b0
// Address Range: [[004ef4b0, 004ef4cb]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_factoryFunc_FUN_004ef4b0(void)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_factoryFunc_FUN_004ef4b0(void)

{
  CPassenger *pCVar1;
  
  pCVar1 = operator_new(0x202b0);
  if (pCVar1 == (CPassenger *)0x0) {
    return (CPassenger *)0x0;
  }
  pCVar1 = core_passngr_cpp_CPassenger_ctor_FUN_004ef4e0(pCVar1);
  return pCVar1;
}
