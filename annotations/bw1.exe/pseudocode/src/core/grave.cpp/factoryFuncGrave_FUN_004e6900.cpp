// Name: core_grave.cpp_factoryFuncGrave_FUN_004e6900
// Address: 004e6900
// Address Range: [[004e6900, 004e691b]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004e6900(void)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_factoryFuncGrave_FUN_004e6900(void)

{
  CGrave *pCVar1;
  
  pCVar1 = (CGrave *)operator_new(0x3b0);
  if (pCVar1 == (CGrave *)0x0) {
    return (CGrave *)0x0;
  }
  pCVar1 = core_grave_cpp_CGrave_ctor_FUN_004e6930(pCVar1);
  return pCVar1;
}
