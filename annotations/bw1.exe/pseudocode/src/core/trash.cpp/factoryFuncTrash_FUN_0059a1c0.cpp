// Name: core_trash.cpp_factoryFuncTrash_FUN_0059a1c0
// Address: 0059a1c0
// Address Range: [[0059a1c0, 0059a1db]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_0059a1c0(void)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_0059a1c0(void)

{
  CTrash *pCVar1;
  
  pCVar1 = (CTrash *)operator_new(0x328);
  if (pCVar1 == (CTrash *)0x0) {
    return (CTrash *)0x0;
  }
  pCVar1 = core_trash_cpp_CTrash_ctor_FUN_0059a1f0(pCVar1);
  return pCVar1;
}
