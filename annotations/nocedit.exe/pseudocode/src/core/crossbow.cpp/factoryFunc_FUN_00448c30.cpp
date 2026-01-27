// Name: core_crossbow.cpp_factoryFunc_FUN_00448c30
// Address: 00448c30
// Address Range: [[00448c30, 00448c52]]
// Convention: __cdecl
// Signature: CCrossbow * core_crossbow.cpp_factoryFunc_FUN_00448c30(void)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_factoryFunc_FUN_00448c30(void)

{
  CCrossbow *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x820,"..\\core\\crossbow.cpp",0x2f);
  if (pCVar1 == (CCrossbow *)0x0) {
    return (CCrossbow *)0x0;
  }
  pCVar1 = core_crossbow_cpp_CCrossbow_ctor_FUN_00448c70(pCVar1);
  return pCVar1;
}
