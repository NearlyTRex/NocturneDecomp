// Name: core_shadow.cpp_factoryFuncDemonShadow_FUN_00545f90
// Address: 00545f90
// Address Range: [[00545f90, 00545fab]]
// Convention: __cdecl
// Signature: CDemonShadow * __cdecl core_shadow_cpp_factoryFuncDemonShadow_FUN_00545f90(void)

#include "nocturne.h"

CDemonShadow * __cdecl core_shadow_cpp_factoryFuncDemonShadow_FUN_00545f90(void)

{
  CDemonShadow *pCVar1;
  
  pCVar1 = operator_new(0xd0e8);
  if (pCVar1 == (CDemonShadow *)0x0) {
    return (CDemonShadow *)0x0;
  }
  pCVar1 = core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(pCVar1);
  return pCVar1;
}
