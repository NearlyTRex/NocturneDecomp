// Name: core_dog.cpp_factoryFunc_FUN_0047f010
// Address: 0047f010
// Address Range: [[0047f010, 0047f032]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_0047f010(void)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_factoryFunc_FUN_0047f010(void)

{
  CZombieDog *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbec8,"..\\core\\dog.cpp",0x37);
  if (pCVar1 == (CZombieDog *)0x0) {
    return (CZombieDog *)0x0;
  }
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_0047f050(pCVar1);
  return pCVar1;
}
