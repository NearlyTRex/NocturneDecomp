// Name: core_goggles.cpp_factoryFuncGoggles_FUN_004e3b00
// Address: 004e3b00
// Address Range: [[004e3b00, 004e3b1b]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_004e3b00(void)

#include "nocturne.h"

CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_004e3b00(void)

{
  CGoggles *pCVar1;
  
  pCVar1 = (CGoggles *)operator_new(0x2d8);
  if (pCVar1 == (CGoggles *)0x0) {
    return (CGoggles *)0x0;
  }
  pCVar1 = core_goggles_cpp_CGoggles_ctor_FUN_004e3b30(pCVar1);
  return pCVar1;
}
