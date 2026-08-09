// Name: core_moloch.cpp_factoryFuncMoloch_FUN_004dd900
// Address: 004dd900
// Address Range: [[004dd900, 004dd91b]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_004dd900(void)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_factoryFuncMoloch_FUN_004dd900(void)

{
  CMoloch *pCVar1;
  
  pCVar1 = operator_new(0x22a00);
  if (pCVar1 == (CMoloch *)0x0) {
    return (CMoloch *)0x0;
  }
  pCVar1 = core_moloch_cpp_CMoloch_ctor_FUN_004dd930(pCVar1);
  return pCVar1;
}
