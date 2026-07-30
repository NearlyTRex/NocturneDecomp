// Name: core_colonel.cpp_factoryFunc_FUN_00439d00
// Address: 00439d00
// Address Range: [[00439d00, 00439d1b]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_00439d00(void)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_00439d00(void)

{
  int iVar1;
  CColonel *pCVar2;
  
  iVar1 = FUN_0056497c(0x1fa54);
  if (iVar1 == 0) {
    return (CColonel *)0x0;
  }
  pCVar2 = (CColonel *)core_colonel_cpp_FUN_00439d30(iVar1);
  return pCVar2;
}
