// Name: core_dest.cpp_factoryFunc_FUN_0044b770
// Address: 0044b770
// Address Range: [[0044b770, 0044b78b]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_factoryFunc_FUN_0044b770(void)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_factoryFunc_FUN_0044b770(void)

{
  CActorDestination *pCVar1;
  
  pCVar1 = operator_new(0x1ec);
  if (pCVar1 == (CActorDestination *)0x0) {
    return (CActorDestination *)0x0;
  }
  pCVar1 = core_dest_cpp_CActorDestination_ctor_FUN_0044b7a0(pCVar1);
  return pCVar1;
}
