// Name: core_cow.cpp_factoryFunc_FUN_00444100
// Address: 00444100
// MANUAL RECONSTRUCTION
// Address Range: [[00444100, 00444122]]
// Convention: __cdecl
// Signature: CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_00444100(void)

#include "nocturne.h"

CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_00444100(void)

{
  CZombieCow *pCVar1;
  
  pCVar1 = (CZombieCow *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CZombieCow),"..\\core\\cow.cpp",54);
  if (pCVar1 == (CZombieCow *)0x0) {
    return (CZombieCow *)0x0;
  }
  pCVar1 = core_cow_cpp_CZombieCow_ctor_FUN_00444140(pCVar1);
  return pCVar1;
}
