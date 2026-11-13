// Name: core_goggles.cpp_factoryFuncGoggles_FUN_0059c030
// Address: 0059c030
// Address Range: [[0059c030, 0059c04b]]
// Convention: __cdecl
// Signature: CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_0059c030(void)

#include "nocturne.h"

CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_0059c030(void)

{
  CGoggles *pCVar1;
  
  pCVar1 = (CGoggles *)operator_new(0x434);
  if (pCVar1 == (CGoggles *)0x0) {
    return (CGoggles *)0x0;
  }
  pCVar1 = core_goggles_cpp_CGoggles_ctor_FUN_0059c060(pCVar1);
  return pCVar1;
}
