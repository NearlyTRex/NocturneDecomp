// Name: core_shotgun.cpp_factoryFunc_FUN_00587ea0
// Address: 00587ea0
// MANUAL RECONSTRUCTION
// Address Range: [[00587ea0, 00587ec2]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00587ea0(void)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_factoryFunc_FUN_00587ea0(void)

{
  CShotgun *pCVar1;
  
  pCVar1 = (CShotgun *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CShotgun),"..\\core\\shotgun.cpp",0x2e);
  if (pCVar1 == (CShotgun *)0x0) {
    return (CShotgun *)0x0;
  }
  pCVar1 = core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0(pCVar1);
  return pCVar1;
}
