// Name: core_spawner.cpp_factoryFuncSpawner_FUN_00563870
// Address: 00563870
// Address Range: [[00563870, 0056388b]]
// Convention: __cdecl
// Signature: CSpawner * __cdecl core_spawner_cpp_factoryFuncSpawner_FUN_00563870(void)

#include "nocturne.h"

CSpawner * __cdecl core_spawner_cpp_factoryFuncSpawner_FUN_00563870(void)

{
  CSpawner *pCVar1;
  
  pCVar1 = (CSpawner *)operator_new(0x2574);
  if (pCVar1 == (CSpawner *)0x0) {
    return (CSpawner *)0x0;
  }
  pCVar1 = core_spawner_cpp_CSpawner_ctor_FUN_005638a0(pCVar1);
  return pCVar1;
}
