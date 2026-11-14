// Name: core_vessel.cpp_factoryFuncCryptVessel_FUN_00584ea0
// Address: 00584ea0
// Address Range: [[00584ea0, 00584ebb]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_00584ea0(void)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_00584ea0(void)

{
  CCryptVessel *pCVar1;
  
  pCVar1 = (CCryptVessel *)operator_new(0xaac);
  if (pCVar1 == (CCryptVessel *)0x0) {
    return (CCryptVessel *)0x0;
  }
  pCVar1 = core_vessel_cpp_CCryptVessel_ctor_FUN_00584ed0(pCVar1);
  return pCVar1;
}
