// Name: core_grave.cpp_factoryFuncGrave_FUN_004ca0f0
// Address: 004ca0f0
// Address Range: [[004ca0f0, 004ca10b]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004ca0f0(void)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004ca0f0(void)

{
  CGrave *pCVar1;
  
  pCVar1 = (CGrave *)operator_new(0x50c);
  if (pCVar1 == (CGrave *)0x0) {
    return (CGrave *)0x0;
  }
  pCVar1 = core_grave_cpp_CGrave_ctor_FUN_004ca120(pCVar1);
  return pCVar1;
}
