// Name: core_shotgun.cpp_factoryFuncShadowsc_FUN_00546290
// Address: 00546290
// Address Range: [[00546290, 005462ab]]
// Convention: __cdecl
// Signature: CShadowsc * __cdecl core_shotgun_cpp_factoryFuncShadowsc_FUN_00546290(void)

#include "nocturne.h"

CShadowsc * __cdecl core_shotgun_cpp_factoryFuncShadowsc_FUN_00546290(void)

{
  CShadowsc *pCVar1;
  
  pCVar1 = (CShadowsc *)operator_new(0xd06c);
  if (pCVar1 == (CShadowsc *)0x0) {
    return (CShadowsc *)0x0;
  }
  pCVar1 = core_shotgun_cpp_CShadowsc_ctor_FUN_005462c0(pCVar1);
  return pCVar1;
}
