// Name: core_stairs.cpp_factoryFunc_FUN_005b9b30
// Address: 005b9b30
// Address Range: [[005b9b30, 005b9b52]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_005b9b30(void)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_005b9b30(void)

{
  CStairs *pCVar1;
  
  pCVar1 = (CStairs *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xa34,"..\\core\\stairs.cpp",0x6f);
  if (pCVar1 == (CStairs *)0x0) {
    return (CStairs *)0x0;
  }
  pCVar1 = core_stairs_cpp_CStairs_ctor_FUN_005b9b70(pCVar1);
  return pCVar1;
}
