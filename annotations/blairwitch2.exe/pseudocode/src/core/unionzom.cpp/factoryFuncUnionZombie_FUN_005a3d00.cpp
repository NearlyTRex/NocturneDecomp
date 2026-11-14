// Name: core_unionzom.cpp_factoryFuncUnionZombie_FUN_005a3d00
// Address: 005a3d00
// Address Range: [[005a3d00, 005a3d1b]]
// Convention: __cdecl
// Signature: CUnionZombie * __cdecl core_unionzom_cpp_factoryFuncUnionZombie_FUN_005a3d00(void)

#include "nocturne.h"

CUnionZombie * __cdecl core_unionzom_cpp_factoryFuncUnionZombie_FUN_005a3d00(void)

{
  CUnionZombie *pCVar1;
  
  pCVar1 = (CUnionZombie *)operator_new(0x1185c);
  if (pCVar1 == (CUnionZombie *)0x0) {
    return (CUnionZombie *)0x0;
  }
  pCVar1 = core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(pCVar1);
  return pCVar1;
}
