// Name: core_shotgun.cpp_factoryFuncShotgun_FUN_00561590
// Address: 00561590
// Address Range: [[00561590, 005615ab]]
// Convention: __cdecl
// Signature: CShotgun * __cdecl core_shotgun_cpp_factoryFuncShotgun_FUN_00561590(void)

#include "nocturne.h"

CShotgun * __cdecl core_shotgun_cpp_factoryFuncShotgun_FUN_00561590(void)

{
  CShotgun *pCVar1;
  
  pCVar1 = (CShotgun *)operator_new(0x584);
  if (pCVar1 == (CShotgun *)0x0) {
    return (CShotgun *)0x0;
  }
  pCVar1 = core_shotgun_cpp_CShotgun_ctor_FUN_005615c0(pCVar1);
  return pCVar1;
}
