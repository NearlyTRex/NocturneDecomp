// Name: core_hpriest.cpp_factoryFunc_FUN_004f7b30
// Address: 004f7b30
// Address Range: [[004f7b30, 004f7b52]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004f7b30(void)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_factoryFunc_FUN_004f7b30(void)

{
  CHighPriestOfGardath *pCVar1;
  
  pCVar1 = (CHighPriestOfGardath *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f76c,"..\\core\\hpriest.cpp",0x1d);
  if (pCVar1 == (CHighPriestOfGardath *)0x0) {
    return (CHighPriestOfGardath *)0x0;
  }
  pCVar1 = core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(pCVar1);
  return pCVar1;
}
