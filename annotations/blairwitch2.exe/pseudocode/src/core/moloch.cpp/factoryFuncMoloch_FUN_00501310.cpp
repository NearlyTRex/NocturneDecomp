// Name: core_moloch.cpp_factoryFuncMoloch_FUN_00501310
// Address: 00501310
// Address Range: [[00501310, 0050132b]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_00501310(void)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_00501310(void)

{
  CMoloch *pCVar1;
  
  pCVar1 = (CMoloch *)operator_new(0x28604);
  if (pCVar1 == (CMoloch *)0x0) {
    return (CMoloch *)0x0;
  }
  pCVar1 = core_moloch_cpp_CMoloch_ctor_FUN_00501340(pCVar1);
  return pCVar1;
}
