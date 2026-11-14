// Name: core_vessel.cpp_factoryFuncCryptVessel_FUN_005a8ad0
// Address: 005a8ad0
// Address Range: [[005a8ad0, 005a8aeb]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_005a8ad0(void)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_005a8ad0(void)

{
  CCryptVessel *pCVar1;
  
  pCVar1 = (CCryptVessel *)operator_new(0x7f4);
  if (pCVar1 == (CCryptVessel *)0x0) {
    return (CCryptVessel *)0x0;
  }
  pCVar1 = core_vessel_cpp_CCryptVessel_ctor_FUN_005a8b00(pCVar1);
  return pCVar1;
}
