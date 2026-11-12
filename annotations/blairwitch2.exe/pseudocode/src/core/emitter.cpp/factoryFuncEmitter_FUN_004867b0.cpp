// Name: core_emitter.cpp_factoryFuncEmitter_FUN_004867b0
// Address: 004867b0
// Address Range: [[004867b0, 004867cb]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_004867b0(void)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_004867b0(void)

{
  CEmitter *pCVar1;
  
  pCVar1 = (CEmitter *)operator_new(0x61c);
  if (pCVar1 == (CEmitter *)0x0) {
    return (CEmitter *)0x0;
  }
  pCVar1 = core_emitter_cpp_CEmitter_ctor_FUN_004867e0(pCVar1);
  return pCVar1;
}
