// Name: core_dest.cpp_factoryFuncActorDestination_FUN_0045d1c0
// Address: 0045d1c0
// Address Range: [[0045d1c0, 0045d1db]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_factoryFuncActorDestination_FUN_0045d1c0(void)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_factoryFuncActorDestination_FUN_0045d1c0(void)

{
  CActorDestination *pCVar1;
  
  pCVar1 = (CActorDestination *)operator_new(500);
  if (pCVar1 == (CActorDestination *)0x0) {
    return (CActorDestination *)0x0;
  }
  pCVar1 = core_dest_cpp_CActorDestination_ctor_FUN_0045d1f0(pCVar1);
  return pCVar1;
}
