// Name: core_hellhag.cpp_factoryFuncHag_FUN_005aa5d0
// Address: 005aa5d0
// Address Range: [[005aa5d0, 005aa5eb]]
// Convention: __cdecl
// Signature: CHag * __cdecl core_hellhag_cpp_factoryFuncHag_FUN_005aa5d0(void)

#include "nocturne.h"

CHag * __cdecl core_hellhag_cpp_factoryFuncHag_FUN_005aa5d0(void)

{
  CHag *pCVar1;
  
  pCVar1 = (CHag *)operator_new(0x11860);
  if (pCVar1 == (CHag *)0x0) {
    return (CHag *)0x0;
  }
  pCVar1 = core_hellhag_cpp_CHag_ctor_FUN_005aa600(pCVar1);
  return pCVar1;
}
