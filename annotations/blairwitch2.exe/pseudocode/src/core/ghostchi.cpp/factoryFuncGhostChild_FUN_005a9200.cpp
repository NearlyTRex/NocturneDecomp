// Name: core_ghostchi.cpp_factoryFuncGhostChild_FUN_005a9200
// Address: 005a9200
// Address Range: [[005a9200, 005a921b]]
// Convention: __cdecl
// Signature: CGhostChild * __cdecl core_ghostchi_cpp_factoryFuncGhostChild_FUN_005a9200(void)

#include "nocturne.h"

CGhostChild * __cdecl core_ghostchi_cpp_factoryFuncGhostChild_FUN_005a9200(void)

{
  CGhostChild *pCVar1;
  
  pCVar1 = (CGhostChild *)operator_new(0x11868);
  if (pCVar1 == (CGhostChild *)0x0) {
    return (CGhostChild *)0x0;
  }
  pCVar1 = core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(pCVar1);
  return pCVar1;
}
