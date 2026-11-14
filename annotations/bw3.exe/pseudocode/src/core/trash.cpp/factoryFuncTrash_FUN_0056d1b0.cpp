// Name: core_trash.cpp_factoryFuncTrash_FUN_0056d1b0
// Address: 0056d1b0
// Address Range: [[0056d1b0, 0056d1cb]]
// Convention: __cdecl
// Signature: CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_0056d1b0(void)

#include "nocturne.h"

CTrash * __cdecl core_trash_cpp_factoryFuncTrash_FUN_0056d1b0(void)

{
  CTrash *pCVar1;
  
  pCVar1 = (CTrash *)operator_new(0x328);
  if (pCVar1 == (CTrash *)0x0) {
    return (CTrash *)0x0;
  }
  pCVar1 = core_trash_cpp_CTrash_ctor_FUN_0056d1e0(pCVar1);
  return pCVar1;
}
