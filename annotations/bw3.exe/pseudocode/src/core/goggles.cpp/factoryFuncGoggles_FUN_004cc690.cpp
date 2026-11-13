// Name: core_goggles.cpp_factoryFuncGoggles_FUN_004cc690
// Address: 004cc690
// Address Range: [[004cc690, 004cc6ab]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_004cc690(void)

#include "nocturne.h"

CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_004cc690(void)

{
  CGoggles *pCVar1;
  
  pCVar1 = (CGoggles *)operator_new(0x2d8);
  if (pCVar1 == (CGoggles *)0x0) {
    return (CGoggles *)0x0;
  }
  pCVar1 = core_goggles_cpp_CGoggles_ctor_FUN_004cc6c0(pCVar1);
  return pCVar1;
}
