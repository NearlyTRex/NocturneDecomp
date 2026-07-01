// Name: core_sentinel.cpp_factoryFunc_FUN_00567d70
// Address: 00567d70
// Address Range: [[00567d70, 00567d92]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_00567d70(void)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_00567d70(void)

{
  CSentinel *pCVar1;
  
  pCVar1 = (CSentinel *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (0xbec4,"..\\core\\sentinel.cpp",95);
  if (pCVar1 == (CSentinel *)0x0) {
    return (CSentinel *)0x0;
  }
  pCVar1 = core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(pCVar1);
  return pCVar1;
}
