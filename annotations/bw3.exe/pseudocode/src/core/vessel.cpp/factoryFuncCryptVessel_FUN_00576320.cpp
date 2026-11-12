// Name: core_vessel.cpp_factoryFuncCryptVessel_FUN_00576320
// Address: 00576320
// Address Range: [[00576320, 0057633b]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_00576320(void)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_factoryFuncCryptVessel_FUN_00576320(void)

{
  CCryptVessel *pCVar1;
  
  pCVar1 = (CCryptVessel *)operator_new(0x7f4);
  if (pCVar1 == (CCryptVessel *)0x0) {
    return (CCryptVessel *)0x0;
  }
  pCVar1 = core_vessel_cpp_CCryptVessel_ctor_FUN_00576350(pCVar1);
  return pCVar1;
}
