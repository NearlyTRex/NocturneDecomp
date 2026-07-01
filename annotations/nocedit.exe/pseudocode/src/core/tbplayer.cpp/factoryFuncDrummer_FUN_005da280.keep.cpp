// Name: core_tbplayer.cpp_factoryFuncDrummer_FUN_005da280
// Address: 005da280
// MANUAL RECONSTRUCTION
// Address Range: [[005da280, 005da2a2]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_005da280(void)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_factoryFuncDrummer_FUN_005da280(void)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CDrummer),"..\\core\\tbplayer.cpp",122);
  if (pCVar1 == (CDrummer *)0x0) {
    return (CDrummer *)0x0;
  }
  pCVar1 = core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(pCVar1);
  return pCVar1;
}
