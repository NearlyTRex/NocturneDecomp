// Name: core_grave.cpp_factoryFuncGrave_FUN_004cf290
// Address: 004cf290
// Address Range: [[004cf290, 004cf2ab]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004cf290(void)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004cf290(void)

{
  CGrave *pCVar1;
  
  pCVar1 = (CGrave *)operator_new(0x3b0);
  if (pCVar1 == (CGrave *)0x0) {
    return (CGrave *)0x0;
  }
  pCVar1 = core_grave_cpp_CGrave_ctor_FUN_004cf2c0(pCVar1);
  return pCVar1;
}
