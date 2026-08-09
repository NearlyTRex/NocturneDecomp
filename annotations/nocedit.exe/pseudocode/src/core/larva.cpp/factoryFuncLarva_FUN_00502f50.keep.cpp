// Name: core_larva.cpp_factoryFuncLarva_FUN_00502f50
// Address: 00502f50
// MANUAL RECONSTRUCTION
// Address Range: [[00502f50, 00502f72]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_factoryFuncLarva_FUN_00502f50(void)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_factoryFuncLarva_FUN_00502f50(void)

{
  CLarva *pCVar1;
  
  pCVar1 = (CLarva *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CLarva),"..\\core\\larva.cpp",54);
  if (pCVar1 == (CLarva *)0x0) {
    return (CLarva *)0x0;
  }
  pCVar1 = core_larva_cpp_CLarva_ctor_FUN_00502f90(pCVar1);
  return pCVar1;
}
