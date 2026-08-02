// Name: core_stairs.cpp_factoryFunc_FUN_00534780
// Address: 00534780
// Address Range: [[00534780, 0053479b]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_00534780(void)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_00534780(void)

{
  CStairs *pCVar1;
  
  pCVar1 = (CStairs *)FUN_0056497c(0xa2c);
  if (pCVar1 == (CStairs *)0x0) {
    return (CStairs *)0x0;
  }
  pCVar1 = core_stairs_cpp_CStairs_ctor_FUN_005347b0(pCVar1);
  return pCVar1;
}
