// Name: core_shotgun.cpp_factoryFunc_FUN_00515cf0
// Address: 00515cf0
// Address Range: [[00515cf0, 00515d0b]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00515cf0(void)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00515cf0(void)

{
  int iVar1;
  CShotgun *pCVar2;
  
  iVar1 = FUN_0056497c(0x57c);
  if (iVar1 == 0) {
    return (CShotgun *)0x0;
  }
  pCVar2 = (CShotgun *)core_shotgun_cpp_FUN_00515d20(iVar1);
  return pCVar2;
}
