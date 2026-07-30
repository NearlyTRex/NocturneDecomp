// Name: core_imp.cpp_factoryFunc_FUN_004bb730
// Address: 004bb730
// Address Range: [[004bb730, 004bb74b]]
// Convention: __cdecl
// Signature: CImp * __cdecl core_imp_cpp_factoryFunc_FUN_004bb730(void)

#include "nocturne.h"

CImp * __cdecl core_imp_cpp_factoryFunc_FUN_004bb730(void)

{
  int iVar1;
  CImp *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd5c);
  if (iVar1 == 0) {
    return (CImp *)0x0;
  }
  pCVar2 = (CImp *)core_imp_cpp_FUN_004bb760(iVar1);
  return pCVar2;
}
