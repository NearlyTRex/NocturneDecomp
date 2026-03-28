// Name: core_wateract.cpp_factoryFunc_FUN_005ea860
// Address: 005ea860
// Address Range: [[005ea860, 005ea882]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_factoryFunc_FUN_005ea860(void)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_factoryFunc_FUN_005ea860(void)

{
  CWaterActor *pCVar1;
  
  pCVar1 = (CWaterActor *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0
                     (0x2b238,"..\\core\\wateract.cpp",0x55);
  if (pCVar1 == (CWaterActor *)0x0) {
    return (CWaterActor *)0x0;
  }
  pCVar1 = core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(pCVar1);
  return pCVar1;
}
