// Name: core_moloch.cpp_factoryFuncMoloch_FUN_005202c0
// Address: 005202c0
// Address Range: [[005202c0, 005202db]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_005202c0(void)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_005202c0(void)

{
  CMoloch *pCVar1;
  
  pCVar1 = (CMoloch *)operator_new(0x23060);
  if (pCVar1 == (CMoloch *)0x0) {
    return (CMoloch *)0x0;
  }
  pCVar1 = core_moloch_cpp_CMoloch_ctor_FUN_005202f0(pCVar1);
  return pCVar1;
}
