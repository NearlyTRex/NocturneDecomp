// Name: core_elephant.cpp_factoryFunc_FUN_004776e0
// Address: 004776e0
// Address Range: [[004776e0, 004776fb]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004776e0(void)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004776e0(void)

{
  CElephantGun *pCVar1;
  
  pCVar1 = (CElephantGun *)FUN_0056497c(0x57c);
  if (pCVar1 == (CElephantGun *)0x0) {
    return (CElephantGun *)0x0;
  }
  pCVar1 = core_elephant_cpp_CElephantGun_ctor_FUN_00477710(pCVar1);
  return pCVar1;
}
