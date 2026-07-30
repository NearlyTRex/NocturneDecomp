// Name: core_vessel.cpp_factoryFunc_FUN_0054f8f0
// Address: 0054f8f0
// Address Range: [[0054f8f0, 0054f90b]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_factoryFunc_FUN_0054f8f0(void)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_factoryFunc_FUN_0054f8f0(void)

{
  CCryptVessel *pCVar1;
  
  pCVar1 = (CCryptVessel *)FUN_0056497c(0x7e4);
  if (pCVar1 == (CCryptVessel *)0x0) {
    return (CCryptVessel *)0x0;
  }
  pCVar1 = core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(pCVar1);
  return pCVar1;
}
