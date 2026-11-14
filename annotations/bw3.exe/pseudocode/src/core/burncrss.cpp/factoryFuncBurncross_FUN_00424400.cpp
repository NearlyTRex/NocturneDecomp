// Name: core_burncrss.cpp_factoryFuncBurncross_FUN_00424400
// Address: 00424400
// Address Range: [[00424400, 0042441b]]
// Convention: __cdecl
// Signature: CBurncross * __cdecl core_burncrss_cpp_factoryFuncBurncross_FUN_00424400(void)

#include "nocturne.h"

CBurncross * __cdecl core_burncrss_cpp_factoryFuncBurncross_FUN_00424400(void)

{
  CBurncross *pCVar1;
  
  pCVar1 = (CBurncross *)operator_new(0x1acc);
  if (pCVar1 == (CBurncross *)0x0) {
    return (CBurncross *)0x0;
  }
  pCVar1 = core_burncrss_cpp_CBurncross_ctor_FUN_00424430(pCVar1);
  return pCVar1;
}
