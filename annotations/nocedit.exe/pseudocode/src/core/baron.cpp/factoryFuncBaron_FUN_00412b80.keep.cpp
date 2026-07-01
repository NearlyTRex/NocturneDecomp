// Name: core_baron.cpp_factoryFuncBaron_FUN_00412b80
// Address: 00412b80
// MANUAL RECONSTRUCTION
// Address Range: [[00412b80, 00412ba2]]
// Convention: __cdecl
// Signature: CBaron * __cdecl core_baron_cpp_factoryFuncBaron_FUN_00412b80(void)

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_factoryFuncBaron_FUN_00412b80(void)

{
  CBaron *pCVar1;
  
  pCVar1 = (CBaron *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBaron),"..\\core\\baron.cpp",0x52);
  if (pCVar1 == (CBaron *)0x0) {
    return (CBaron *)0x0;
  }
  pCVar1 = core_baron_cpp_CBaron_ctor_FUN_00412bc0(pCVar1);
  return pCVar1;
}
