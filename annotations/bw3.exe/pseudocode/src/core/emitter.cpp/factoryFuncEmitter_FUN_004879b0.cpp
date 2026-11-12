// Name: core_emitter.cpp_factoryFuncEmitter_FUN_004879b0
// Address: 004879b0
// Address Range: [[004879b0, 004879cb]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_004879b0(void)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_004879b0(void)

{
  CEmitter *pCVar1;
  
  pCVar1 = (CEmitter *)operator_new(0x4c0);
  if (pCVar1 == (CEmitter *)0x0) {
    return (CEmitter *)0x0;
  }
  pCVar1 = core_emitter_cpp_CEmitter_ctor_FUN_004879e0(pCVar1);
  return pCVar1;
}
