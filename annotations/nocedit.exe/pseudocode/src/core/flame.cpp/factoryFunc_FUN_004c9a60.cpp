// Name: core_flame.cpp_factoryFunc_FUN_004c9a60
// Address: 004c9a60
// Address Range: [[004c9a60, 004c9a82]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_factoryFunc_FUN_004c9a60(void)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_factoryFunc_FUN_004c9a60(void)

{
  CFlame *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2a4,"..\\core\\flame.cpp",0x75);
  if (pCVar1 == (CFlame *)0x0) {
    return (CFlame *)0x0;
  }
  pCVar1 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0(pCVar1);
  return pCVar1;
}
