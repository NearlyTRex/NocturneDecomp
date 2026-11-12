// Name: core_crate.cpp_factoryFuncCrate_FUN_00439d30
// Address: 00439d30
// Address Range: [[00439d30, 00439d4b]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_factoryFuncCrate_FUN_00439d30(void)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_factoryFuncCrate_FUN_00439d30(void)

{
  CCrate *pCVar1;
  
  pCVar1 = (CCrate *)operator_new(0x458);
  if (pCVar1 == (CCrate *)0x0) {
    return (CCrate *)0x0;
  }
  pCVar1 = core_crate_cpp_CCrate_ctor_FUN_00439d60(pCVar1);
  return pCVar1;
}
