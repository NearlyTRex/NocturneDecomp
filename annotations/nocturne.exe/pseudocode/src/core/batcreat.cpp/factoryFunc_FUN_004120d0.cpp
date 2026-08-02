// Name: core_batcreat.cpp_factoryFunc_FUN_004120d0
// Address: 004120d0
// Address Range: [[004120d0, 004120eb]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004120d0(void)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004120d0(void)

{
  CBatCreature *pCVar1;
  
  pCVar1 = (CBatCreature *)FUN_0056497c(0xbd6c);
  if (pCVar1 == (CBatCreature *)0x0) {
    return (CBatCreature *)0x0;
  }
  pCVar1 = core_batcreat_cpp_CBatCreature_ctor_FUN_00412100(pCVar1);
  return pCVar1;
}
