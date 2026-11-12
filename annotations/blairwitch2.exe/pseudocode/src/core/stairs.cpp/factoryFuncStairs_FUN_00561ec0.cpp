// Name: core_stairs.cpp_factoryFuncStairs_FUN_00561ec0
// Address: 00561ec0
// Address Range: [[00561ec0, 00561edb]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00561ec0(void)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_factoryFuncStairs_FUN_00561ec0(void)

{
  CStairs *pCVar1;
  
  pCVar1 = (CStairs *)operator_new(0xb90);
  if (pCVar1 == (CStairs *)0x0) {
    return (CStairs *)0x0;
  }
  pCVar1 = core_stairs_cpp_CStairs_ctor_FUN_00561ef0(pCVar1);
  return pCVar1;
}
