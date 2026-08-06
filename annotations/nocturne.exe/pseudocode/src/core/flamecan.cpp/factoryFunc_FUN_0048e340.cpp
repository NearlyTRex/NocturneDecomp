// Name: core_flamecan.cpp_factoryFunc_FUN_0048e340
// Address: 0048e340
// Address Range: [[0048e340, 0048e35b]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_factoryFunc_FUN_0048e340(void)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_factoryFunc_FUN_0048e340(void)

{
  CFlameCan *pCVar1;
  
  pCVar1 = operator_new(0x5d8);
  if (pCVar1 == (CFlameCan *)0x0) {
    return (CFlameCan *)0x0;
  }
  pCVar1 = core_flamecan_cpp_CFlameCan_ctor_FUN_0048e370(pCVar1);
  return pCVar1;
}
