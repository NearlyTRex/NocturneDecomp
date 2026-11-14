// Name: core_storm.cpp_factoryFuncStorm_FUN_00568a80
// Address: 00568a80
// Address Range: [[00568a80, 00568a9b]]
// Convention: __cdecl
// Signature: CStorm * __cdecl core_storm_cpp_factoryFuncStorm_FUN_00568a80(void)

#include "nocturne.h"

CStorm * __cdecl core_storm_cpp_factoryFuncStorm_FUN_00568a80(void)

{
  CStorm *pCVar1;
  
  pCVar1 = (CStorm *)operator_new(0x594);
  if (pCVar1 == (CStorm *)0x0) {
    return (CStorm *)0x0;
  }
  pCVar1 = core_storm_cpp_CStorm_ctor_FUN_00568ab0(pCVar1);
  return pCVar1;
}
