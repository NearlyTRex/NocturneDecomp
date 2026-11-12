// Name: core_stairs.cpp_factoryFuncStairs_FUN_00568380
// Address: 00568380
// Address Range: [[00568380, 0056839b]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00568380(void)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00568380(void)

{
  CStairs *pCVar1;
  
  pCVar1 = (CStairs *)operator_new(0xa34);
  if (pCVar1 == (CStairs *)0x0) {
    return (CStairs *)0x0;
  }
  pCVar1 = core_stairs_cpp_CStairs_ctor_FUN_005683b0(pCVar1);
  return pCVar1;
}
