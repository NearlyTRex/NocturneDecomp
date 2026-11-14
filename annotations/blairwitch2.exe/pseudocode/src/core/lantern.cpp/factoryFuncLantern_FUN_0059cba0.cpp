// Name: core_lantern.cpp_factoryFuncLantern_FUN_0059cba0
// Address: 0059cba0
// Address Range: [[0059cba0, 0059cbbb]]
// Convention: __cdecl
// Signature: CLantern * __cdecl core_lantern_cpp_factoryFuncLantern_FUN_0059cba0(void)

#include "nocturne.h"

CLantern * __cdecl core_lantern_cpp_factoryFuncLantern_FUN_0059cba0(void)

{
  CLantern *pCVar1;
  
  pCVar1 = (CLantern *)operator_new(0x708);
  if (pCVar1 == (CLantern *)0x0) {
    return (CLantern *)0x0;
  }
  pCVar1 = core_lantern_cpp_CLantern_ctor_FUN_0059cbd0(pCVar1);
  return pCVar1;
}
