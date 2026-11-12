// Name: core_emitter.cpp_factoryFuncEmitter_FUN_0049ee10
// Address: 0049ee10
// Address Range: [[0049ee10, 0049ee2b]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_0049ee10(void)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_0049ee10(void)

{
  CEmitter *pCVar1;
  
  pCVar1 = (CEmitter *)operator_new(0x4c0);
  if (pCVar1 == (CEmitter *)0x0) {
    return (CEmitter *)0x0;
  }
  pCVar1 = core_emitter_cpp_CEmitter_ctor_FUN_0049ee40(pCVar1);
  return pCVar1;
}
