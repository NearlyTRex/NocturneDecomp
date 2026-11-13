// Name: core_sps.cpp_factoryFuncSps_FUN_005681e0
// Address: 005681e0
// Address Range: [[005681e0, 005681fb]]
// Convention: __cdecl
// Signature: CSps * __cdecl core_sps_cpp_factoryFuncSps_FUN_005681e0(void)

#include "nocturne.h"

CSps * __cdecl core_sps_cpp_factoryFuncSps_FUN_005681e0(void)

{
  CSps *pCVar1;
  
  pCVar1 = (CSps *)operator_new(0x594);
  if (pCVar1 == (CSps *)0x0) {
    return (CSps *)0x0;
  }
  pCVar1 = core_sps_cpp_CSps_ctor_FUN_00568210(pCVar1);
  return pCVar1;
}
