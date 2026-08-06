// Name: core_shotgun.cpp_factoryFunc_FUN_00515cf0
// Address: 00515cf0
// Address Range: [[00515cf0, 00515d0b]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00515cf0(void)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00515cf0(void)

{
  CShotgun *pCVar1;
  
  pCVar1 = operator_new(0x57c);
  if (pCVar1 == (CShotgun *)0x0) {
    return (CShotgun *)0x0;
  }
  pCVar1 = core_shotgun_cpp_CShotgun_ctor_FUN_00515d20(pCVar1);
  return pCVar1;
}
