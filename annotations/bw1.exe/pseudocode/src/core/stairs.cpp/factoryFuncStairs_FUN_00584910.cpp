// Name: core_stairs.cpp_factoryFuncStairs_FUN_00584910
// Address: 00584910
// Address Range: [[00584910, 0058492b]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00584910(void)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00584910(void)

{
  CStairs *pCVar1;
  
  pCVar1 = (CStairs *)operator_new(0xa34);
  if (pCVar1 == (CStairs *)0x0) {
    return (CStairs *)0x0;
  }
  pCVar1 = core_stairs_cpp_CStairs_ctor_FUN_00584940(pCVar1);
  return pCVar1;
}
