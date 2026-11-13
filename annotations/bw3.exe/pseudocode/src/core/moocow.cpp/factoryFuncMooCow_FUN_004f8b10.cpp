// Name: core_moocow.cpp_factoryFuncMooCow_FUN_004f8b10
// Address: 004f8b10
// Address Range: [[004f8b10, 004f8b2b]]
// Convention: __cdecl
// Signature: CMooCow * __cdecl core_moocow_cpp_factoryFuncMooCow_FUN_004f8b10(void)

#include "nocturne.h"

CMooCow * __cdecl core_moocow_cpp_factoryFuncMooCow_FUN_004f8b10(void)

{
  CMooCow *pCVar1;
  
  pCVar1 = (CMooCow *)operator_new(0xcdf0);
  if (pCVar1 == (CMooCow *)0x0) {
    return (CMooCow *)0x0;
  }
  pCVar1 = core_moocow_cpp_CMooCow_ctor_FUN_004f8b40(pCVar1);
  return pCVar1;
}
