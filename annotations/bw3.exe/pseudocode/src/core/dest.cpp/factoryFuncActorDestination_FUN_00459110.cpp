// Name: core_dest.cpp_factoryFuncActorDestination_FUN_00459110
// Address: 00459110
// Address Range: [[00459110, 0045912b]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_factoryFuncActorDestination_FUN_00459110(void)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_factoryFuncActorDestination_FUN_00459110(void)

{
  CActorDestination *pCVar1;
  
  pCVar1 = (CActorDestination *)operator_new(500);
  if (pCVar1 == (CActorDestination *)0x0) {
    return (CActorDestination *)0x0;
  }
  pCVar1 = core_dest_cpp_CActorDestination_ctor_FUN_00459140(pCVar1);
  return pCVar1;
}
