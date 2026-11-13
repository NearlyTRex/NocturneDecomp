// Name: core_yow.cpp_factoryFuncYow_FUN_005b8130
// Address: 005b8130
// Address Range: [[005b8130, 005b814b]]
// Convention: __cdecl
// Signature: CYow * __cdecl core_yow_cpp_factoryFuncYow_FUN_005b8130(void)

#include "nocturne.h"

CYow * __cdecl core_yow_cpp_factoryFuncYow_FUN_005b8130(void)

{
  CYow *pCVar1;
  
  pCVar1 = (CYow *)operator_new(0xc2b8);
  if (pCVar1 == (CYow *)0x0) {
    return (CYow *)0x0;
  }
  pCVar1 = core_yow_cpp_CYow_ctor_FUN_005b8160(pCVar1);
  return pCVar1;
}
