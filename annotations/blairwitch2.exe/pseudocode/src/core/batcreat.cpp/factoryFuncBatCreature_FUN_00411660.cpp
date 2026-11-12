// Name: core_batcreat.cpp_factoryFuncBatCreature_FUN_00411660
// Address: 00411660
// Address Range: [[00411660, 0041167b]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_factoryFuncBatCreature_FUN_00411660(void)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_factoryFuncBatCreature_FUN_00411660(void)

{
  CBatCreature *pCVar1;
  
  pCVar1 = (CBatCreature *)operator_new(0x10b40);
  if (pCVar1 == (CBatCreature *)0x0) {
    return (CBatCreature *)0x0;
  }
  pCVar1 = core_batcreat_cpp_CBatCreature_ctor_FUN_00411690(pCVar1);
  return pCVar1;
}
