// Name: core_emitter.cpp_factoryFunc_FUN_004a7c60
// Address: 004a7c60
// MANUAL RECONSTRUCTION
// Address Range: [[004a7c60, 004a7c82]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_factoryFunc_FUN_004a7c60(void)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_factoryFunc_FUN_004a7c60(void)

{
  CEmitter *pCVar1;
  
  pCVar1 = (CEmitter *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CEmitter),"..\\core\\emitter.cpp",0x3a);
  if (pCVar1 == (CEmitter *)0x0) {
    return (CEmitter *)0x0;
  }
  pCVar1 = core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(pCVar1);
  return pCVar1;
}
