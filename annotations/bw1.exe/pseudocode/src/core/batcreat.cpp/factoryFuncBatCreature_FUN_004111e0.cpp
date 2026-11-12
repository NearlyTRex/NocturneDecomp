// Name: core_batcreat.cpp_factoryFuncBatCreature_FUN_004111e0
// Address: 004111e0
// Address Range: [[004111e0, 004111fb]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0(void)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0(void)

{
  CBatCreature *pCVar1;
  
  pCVar1 = (CBatCreature *)operator_new(0xc2b4);
  if (pCVar1 == (CBatCreature *)0x0) {
    return (CBatCreature *)0x0;
  }
  pCVar1 = core_batcreat_cpp_CBatCreature_ctor_FUN_00411210(pCVar1);
  return pCVar1;
}
