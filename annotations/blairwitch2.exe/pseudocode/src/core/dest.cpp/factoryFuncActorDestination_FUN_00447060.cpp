// Name: core_dest.cpp_factoryFuncActorDestination_FUN_00447060
// Address: 00447060
// Address Range: [[00447060, 0044707b]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_factoryFuncActorDestination_FUN_00447060(void)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_factoryFuncActorDestination_FUN_00447060(void)

{
  CActorDestination *pCVar1;
  
  pCVar1 = (CActorDestination *)operator_new(0x350);
  if (pCVar1 == (CActorDestination *)0x0) {
    return (CActorDestination *)0x0;
  }
  pCVar1 = core_dest_cpp_CActorDestination_ctor_FUN_00447090(pCVar1);
  return pCVar1;
}
