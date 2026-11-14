// Name: core_construc.cpp_factoryFuncConstruct_FUN_00436ad0
// Address: 00436ad0
// Address Range: [[00436ad0, 00436aeb]]
// Convention: __cdecl
// Signature: CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_00436ad0(void)

#include "nocturne.h"

CConstruct * __cdecl core_construc_cpp_factoryFuncConstruct_FUN_00436ad0(void)

{
  CConstruct *pCVar1;
  
  pCVar1 = (CConstruct *)operator_new(0x112e4);
  if (pCVar1 == (CConstruct *)0x0) {
    return (CConstruct *)0x0;
  }
  pCVar1 = core_construc_cpp_CConstruct_ctor_FUN_00436b00(pCVar1);
  return pCVar1;
}
