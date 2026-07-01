// Name: core_flamecan.cpp_factoryFunc_FUN_004cb120
// Address: 004cb120
// MANUAL RECONSTRUCTION
// Address Range: [[004cb120, 004cb142]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_factoryFunc_FUN_004cb120(void)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_factoryFunc_FUN_004cb120(void)

{
  CFlameCan *pCVar1;
  
  pCVar1 = (CFlameCan *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CFlameCan),"..\\core\\flamecan.cpp",0x22)
  ;
  if (pCVar1 == (CFlameCan *)0x0) {
    return (CFlameCan *)0x0;
  }
  pCVar1 = core_flamecan_cpp_CFlameCan_ctor_FUN_004cb160(pCVar1);
  return pCVar1;
}
