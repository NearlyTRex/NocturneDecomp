// Name: core_crate.cpp_factoryFuncCrate_FUN_00448fe0
// Address: 00448fe0
// Address Range: [[00448fe0, 00448ffb]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_factoryFuncCrate_FUN_00448fe0(void)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_factoryFuncCrate_FUN_00448fe0(void)

{
  CCrate *pCVar1;
  
  pCVar1 = (CCrate *)operator_new(0x2fc);
  if (pCVar1 == (CCrate *)0x0) {
    return (CCrate *)0x0;
  }
  pCVar1 = core_crate_cpp_CCrate_ctor_FUN_00449010(pCVar1);
  return pCVar1;
}
