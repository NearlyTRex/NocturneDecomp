// Name: core_ladder.cpp_factoryFunc_FUN_00502500
// Address: 00502500
// MANUAL RECONSTRUCTION
// Address Range: [[00502500, 00502522]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_factoryFunc_FUN_00502500(void)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_factoryFunc_FUN_00502500(void)

{
  CLadder *pCVar1;
  
  pCVar1 = (CLadder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CLadder),"..\\core\\ladder.cpp",45);
  if (pCVar1 == (CLadder *)0x0) {
    return (CLadder *)0x0;
  }
  pCVar1 = core_ladder_cpp_CLadder_ctor_FUN_00502540(pCVar1);
  return pCVar1;
}
