// Name: core_dest.cpp_factoryFunc_FUN_0046f8c0
// Address: 0046f8c0
// MANUAL RECONSTRUCTION
// Address Range: [[0046f8c0, 0046f8e2]]
// Convention: __cdecl
// Signature: CActorDestination * __cdecl core_dest_cpp_factoryFunc_FUN_0046f8c0(void)

#include "nocturne.h"

CActorDestination * __cdecl core_dest_cpp_factoryFunc_FUN_0046f8c0(void)

{
  CActorDestination *pCVar1;
  
  pCVar1 = (CActorDestination *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CActorDestination),"..\\core\\dest.cpp",0x29);
  if (pCVar1 == (CActorDestination *)0x0) {
    return (CActorDestination *)0x0;
  }
  pCVar1 = core_dest_cpp_CActorDestination_ctor_FUN_0046f900(pCVar1);
  return pCVar1;
}
