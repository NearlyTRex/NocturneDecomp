// Name: core_shovel.cpp_factoryFunc_FUN_00588b60
// Address: 00588b60
// Address Range: [[00588b60, 00588b82]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_00588b60(void)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_factoryFunc_FUN_00588b60(void)

{
  CShovel *pCVar1;
  
  pCVar1 = (CShovel *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x578,"..\\core\\shovel.cpp",32);
  if (pCVar1 == (CShovel *)0x0) {
    return (CShovel *)0x0;
  }
  pCVar1 = core_shovel_cpp_CShovel_ctor_FUN_00588ba0(pCVar1);
  return pCVar1;
}
