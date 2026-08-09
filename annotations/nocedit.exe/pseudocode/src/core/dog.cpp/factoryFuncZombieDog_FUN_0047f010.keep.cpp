// Name: core_dog.cpp_factoryFuncZombieDog_FUN_0047f010
// Address: 0047f010
// MANUAL RECONSTRUCTION
// Address Range: [[0047f010, 0047f032]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_0047f010(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFuncZombieDog_FUN_0047f010(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = (CZombieDog *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CZombieDog),"..\\core\\dog.cpp",55);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_0047f050(pCVar1);
  return pCVar1;
}
