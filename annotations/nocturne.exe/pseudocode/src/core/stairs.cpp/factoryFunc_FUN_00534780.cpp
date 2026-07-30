// Name: core_stairs.cpp_factoryFunc_FUN_00534780
// Address: 00534780
// Address Range: [[00534780, 0053479b]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_00534780(void)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_00534780(void)

{
  int iVar1;
  CStairs *pCVar2;
  
  iVar1 = FUN_0056497c(0xa2c);
  if (iVar1 == 0) {
    return (CStairs *)0x0;
  }
  pCVar2 = (CStairs *)core_stairs_cpp_FUN_005347b0(iVar1);
  return pCVar2;
}
