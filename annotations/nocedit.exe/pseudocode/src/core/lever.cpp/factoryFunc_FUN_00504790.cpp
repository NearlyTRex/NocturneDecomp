// Name: core_lever.cpp_factoryFunc_FUN_00504790
// Address: 00504790
// Address Range: [[00504790, 005047b2]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_factoryFunc_FUN_00504790(void)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_factoryFunc_FUN_00504790(void)

{
  CLever *pCVar1;
  
  pCVar1 = (CLever *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x814,"..\\core\\lever.cpp",41);
  if (pCVar1 == (CLever *)0x0) {
    return (CLever *)0x0;
  }
  pCVar1 = core_lever_cpp_CLever_ctor_FUN_005047d0(pCVar1);
  return pCVar1;
}
