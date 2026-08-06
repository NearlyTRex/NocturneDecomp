// Name: core_grave.cpp_factoryFunc_FUN_004b0b10
// Address: 004b0b10
// Address Range: [[004b0b10, 004b0b2b]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_factoryFunc_FUN_004b0b10(void)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_factoryFunc_FUN_004b0b10(void)

{
  CGrave *pCVar1;
  
  pCVar1 = operator_new(0x3a8);
  if (pCVar1 == (CGrave *)0x0) {
    return (CGrave *)0x0;
  }
  pCVar1 = core_grave_cpp_CGrave_ctor_FUN_004b0b40(pCVar1);
  return pCVar1;
}
