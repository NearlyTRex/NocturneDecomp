// Name: core_batcreat.cpp_factoryFunc_FUN_004120d0
// Address: 004120d0
// Address Range: [[004120d0, 004120eb]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004120d0(void)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_factoryFunc_FUN_004120d0(void)

{
  int iVar1;
  CBatCreature *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd6c);
  if (iVar1 == 0) {
    return (CBatCreature *)0x0;
  }
  pCVar2 = (CBatCreature *)core_batcreat_cpp_FUN_00412100(iVar1);
  return pCVar2;
}
