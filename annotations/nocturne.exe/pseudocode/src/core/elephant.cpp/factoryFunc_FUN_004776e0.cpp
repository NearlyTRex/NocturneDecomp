// Name: core_elephant.cpp_factoryFunc_FUN_004776e0
// Address: 004776e0
// Address Range: [[004776e0, 004776fb]]
// Convention: __cdecl
// Signature: CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004776e0(void)

#include "nocturne.h"

CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004776e0(void)

{
  int iVar1;
  CElephantGun *pCVar2;
  
  iVar1 = FUN_0056497c(0x57c);
  if (iVar1 == 0) {
    return (CElephantGun *)0x0;
  }
  pCVar2 = (CElephantGun *)core_elephant_cpp_FUN_00477710(iVar1);
  return pCVar2;
}
