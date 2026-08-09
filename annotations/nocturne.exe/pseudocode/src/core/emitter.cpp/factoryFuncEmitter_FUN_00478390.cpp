// Name: core_emitter.cpp_factoryFuncEmitter_FUN_00478390
// Address: 00478390
// Address Range: [[00478390, 004783ab]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_00478390(void)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_factoryFuncEmitter_FUN_00478390(void)

{
  CEmitter *pCVar1;
  
  pCVar1 = operator_new(0x48c);
  if (pCVar1 == (CEmitter *)0x0) {
    return (CEmitter *)0x0;
  }
  pCVar1 = core_emitter_cpp_CEmitter_ctor_FUN_004783c0(pCVar1);
  return pCVar1;
}
