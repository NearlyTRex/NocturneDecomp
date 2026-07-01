// Name: core_gasmask.cpp_factoryFunc_FUN_004e5cc0
// Address: 004e5cc0
// MANUAL RECONSTRUCTION
// Address Range: [[004e5cc0, 004e5ce2]]
// Convention: __cdecl
// Signature: CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004e5cc0(void)

#include "nocturne.h"

CGasMask * __cdecl core_gasmask_cpp_factoryFunc_FUN_004e5cc0(void)

{
  CGasMask *pCVar1;
  
  pCVar1 = (CGasMask *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CGasMask),"..\\core\\gasmask.cpp",0x1e);
  if (pCVar1 == (CGasMask *)0x0) {
    return (CGasMask *)0x0;
  }
  pCVar1 = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(pCVar1);
  return pCVar1;
}
