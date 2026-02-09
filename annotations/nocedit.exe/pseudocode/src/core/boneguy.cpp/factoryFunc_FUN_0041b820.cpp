// Name: core_boneguy.cpp_factoryFunc_FUN_0041b820
// Address: 0041b820
// Address Range: [[0041b820, 0041b842]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_factoryFunc_FUN_0041b820(void)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_factoryFunc_FUN_0041b820(void)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = (CBoneGuy *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc4e4,"..\\core\\boneguy.cpp",0x74);
  if (pCVar1 == (CBoneGuy *)0x0) {
    return (CBoneGuy *)0x0;
  }
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(pCVar1);
  return pCVar1;
}
