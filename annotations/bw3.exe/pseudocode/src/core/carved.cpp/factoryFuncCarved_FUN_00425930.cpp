// Name: core_carved.cpp_factoryFuncCarved_FUN_00425930
// Address: 00425930
// Address Range: [[00425930, 0042594b]]
// Convention: __cdecl
// Signature: CCarved * __cdecl core_carved_cpp_factoryFuncCarved_FUN_00425930(void)

#include "nocturne.h"

CCarved * __cdecl core_carved_cpp_factoryFuncCarved_FUN_00425930(void)

{
  CCarved *pCVar1;
  
  pCVar1 = (CCarved *)operator_new(0xd0dc);
  if (pCVar1 == (CCarved *)0x0) {
    return (CCarved *)0x0;
  }
  pCVar1 = core_carved_cpp_CCarved_ctor_FUN_00425960(pCVar1);
  return pCVar1;
}
