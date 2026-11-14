// Name: core_moocow.cpp_factoryFuncMooCow_FUN_005212d0
// Address: 005212d0
// Address Range: [[005212d0, 005212eb]]
// Convention: __cdecl
// Signature: CMooCow * __cdecl core_moocow_cpp_factoryFuncMooCow_FUN_005212d0(void)

#include "nocturne.h"

CMooCow * __cdecl core_moocow_cpp_factoryFuncMooCow_FUN_005212d0(void)

{
  CMooCow *pCVar1;
  
  pCVar1 = (CMooCow *)operator_new(0xc1f4);
  if (pCVar1 == (CMooCow *)0x0) {
    return (CMooCow *)0x0;
  }
  pCVar1 = core_moocow_cpp_CMooCow_ctor_FUN_00521300(pCVar1);
  return pCVar1;
}
