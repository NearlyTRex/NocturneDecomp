// Name: core_bat.cpp_factoryFunc_FUN_00414790
// Address: 00414790
// Address Range: [[00414790, 004147b2]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_factoryFunc_FUN_00414790(void)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_factoryFunc_FUN_00414790(void)

{
  CBat *pCVar1;
  
  pCVar1 = (CBat *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x388,"..\\core\\bat.cpp",0x5c);
  if (pCVar1 == (CBat *)0x0) {
    return (CBat *)0x0;
  }
  pCVar1 = core_bat_cpp_CBat_ctor_FUN_004147d0(pCVar1);
  return pCVar1;
}
