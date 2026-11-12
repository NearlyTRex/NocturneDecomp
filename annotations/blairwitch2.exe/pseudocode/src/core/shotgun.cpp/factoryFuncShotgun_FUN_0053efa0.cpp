// Name: core_shotgun.cpp_factoryFuncShotgun_FUN_0053efa0
// Address: 0053efa0
// Address Range: [[0053efa0, 0053efbb]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_factoryFuncShotgun_FUN_0053efa0(void)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_factoryFuncShotgun_FUN_0053efa0(void)

{
  CShotgun *pCVar1;
  
  pCVar1 = (CShotgun *)operator_new(0x6e0);
  if (pCVar1 == (CShotgun *)0x0) {
    return (CShotgun *)0x0;
  }
  pCVar1 = core_shotgun_cpp_CShotgun_ctor_FUN_0053efd0(pCVar1);
  return pCVar1;
}
