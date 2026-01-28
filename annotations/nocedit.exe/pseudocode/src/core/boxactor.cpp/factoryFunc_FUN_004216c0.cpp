// Name: core_boxactor.cpp_factoryFunc_FUN_004216c0
// Address: 004216c0
// Address Range: [[004216c0, 004216e2]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_004216c0(void)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_004216c0(void)

{
  CBoxActor *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x66c,"..\\core\\boxactor.cpp",0x39);
  if (pCVar1 == (CBoxActor *)0x0) {
    return (CBoxActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_00421700(pCVar1);
  return pCVar1;
}
