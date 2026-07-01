// Name: core_keyactor.cpp_factoryFunc_FUN_00501650
// Address: 00501650
// Address Range: [[00501650, 00501672]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_00501650(CKeyActor *__return_storage_ptr__)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_factoryFunc_FUN_00501650(CKeyActor *__return_storage_ptr__)

{
  CKeyActor *pCVar1;
  
  pCVar1 = (CKeyActor *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x31c,"..\\core\\keyactor.cpp",36)
  ;
  if (pCVar1 == (CKeyActor *)0x0) {
    return (CKeyActor *)0x0;
  }
  pCVar1 = core_keyactor_cpp_CKeyActor_ctor_FUN_00501690(pCVar1);
  return pCVar1;
}
