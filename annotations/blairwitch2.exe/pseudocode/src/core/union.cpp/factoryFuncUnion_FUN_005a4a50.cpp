// Name: core_union.cpp_factoryFuncUnion_FUN_005a4a50
// Address: 005a4a50
// Address Range: [[005a4a50, 005a4a6b]]
// Convention: __cdecl
// Signature: CUnion * __cdecl core_union_cpp_factoryFuncUnion_FUN_005a4a50(void)

#include "nocturne.h"

CUnion * __cdecl core_union_cpp_factoryFuncUnion_FUN_005a4a50(void)

{
  CUnion *pCVar1;
  
  pCVar1 = (CUnion *)operator_new(0x11864);
  if (pCVar1 == (CUnion *)0x0) {
    return (CUnion *)0x0;
  }
  pCVar1 = core_union_cpp_CUnion_ctor_FUN_005a4a80(pCVar1);
  return pCVar1;
}
