// Name: core_hecaitmx.cpp_factoryFuncHecaitomix_FUN_00597dc0
// Address: 00597dc0
// Address Range: [[00597dc0, 00597ddb]]
// Convention: __cdecl
// Signature: CHecaitomix * __cdecl core_hecaitmx_cpp_factoryFuncHecaitomix_FUN_00597dc0(void)

#include "nocturne.h"

CHecaitomix * __cdecl core_hecaitmx_cpp_factoryFuncHecaitomix_FUN_00597dc0(void)

{
  CHecaitomix *pCVar1;
  
  pCVar1 = (CHecaitomix *)operator_new(0xd07c);
  if (pCVar1 == (CHecaitomix *)0x0) {
    return (CHecaitomix *)0x0;
  }
  pCVar1 = core_hecaitmx_cpp_CHecaitomix_ctor_FUN_00597df0(pCVar1);
  return pCVar1;
}
