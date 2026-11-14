// Name: core_yow.cpp_factoryFuncYow_FUN_00586310
// Address: 00586310
// Address Range: [[00586310, 0058632b]]
// Convention: __cdecl
// Signature: CYow * __cdecl core_yow_cpp_factoryFuncYow_FUN_00586310(void)

#include "nocturne.h"

CYow * __cdecl core_yow_cpp_factoryFuncYow_FUN_00586310(void)

{
  CYow *pCVar1;
  
  pCVar1 = (CYow *)operator_new(0xd078);
  if (pCVar1 == (CYow *)0x0) {
    return (CYow *)0x0;
  }
  pCVar1 = core_yow_cpp_CYow_ctor_FUN_00586340(pCVar1);
  return pCVar1;
}
