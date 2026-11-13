// Name: core_kedward.cpp_factoryFuncKedward_FUN_0058fd40
// Address: 0058fd40
// Address Range: [[0058fd40, 0058fd5b]]
// Convention: __cdecl
// Signature: CKedward * __cdecl core_kedward_cpp_factoryFuncKedward_FUN_0058fd40(void)

#include "nocturne.h"

CKedward * __cdecl core_kedward_cpp_factoryFuncKedward_FUN_0058fd40(void)

{
  CKedward *pCVar1;
  
  pCVar1 = (CKedward *)operator_new(0xd0d8);
  if (pCVar1 == (CKedward *)0x0) {
    return (CKedward *)0x0;
  }
  pCVar1 = core_kedward_cpp_CKedward_ctor_FUN_0058fd70(pCVar1);
  return pCVar1;
}
