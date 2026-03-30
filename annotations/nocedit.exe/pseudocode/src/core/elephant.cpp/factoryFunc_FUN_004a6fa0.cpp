// Name: core_elephant.cpp_factoryFunc_FUN_004a6fa0
// Address: 004a6fa0
// Address Range: [[004a6fa0, 004a6fc2]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004a6fa0(void)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004a6fa0(void)

{
  CElephantGun *pCVar1;
  
  pCVar1 = (CElephantGun *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x584,"..\\core\\elephant.cpp",0x2e)
  ;
  if (pCVar1 == (CElephantGun *)0x0) {
    return (CElephantGun *)0x0;
  }
  pCVar1 = core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(pCVar1);
  return pCVar1;
}
