// Name: core_beast.cpp_factoryFunc_FUN_004181e0
// Address: 004181e0
// MANUAL RECONSTRUCTION
// Address Range: [[004181e0, 00418202]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_004181e0(void)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_004181e0(void)

{
  CBeast *pCVar1;
  
  pCVar1 = (CBeast *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CBeast),"..\\core\\beast.cpp",45);
  if (pCVar1 == (CBeast *)0x0) {
    return (CBeast *)0x0;
  }
  pCVar1 = core_beast_cpp_CBeast_ctor_FUN_00418220(pCVar1);
  return pCVar1;
}
