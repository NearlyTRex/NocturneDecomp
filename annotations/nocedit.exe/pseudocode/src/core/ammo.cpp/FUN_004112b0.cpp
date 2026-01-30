// Name: core_ammo.cpp_FUN_004112b0
// Address: 004112b0
// Address Range: [[004112b0, 00411355]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_FUN_004112b0(void)

#include "nocturne.h"

int __cdecl core_ammo_cpp_FUN_004112b0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CAmmoClassInfo.name_hash)
  ;
  switch(pCVar1[2].validation_magic) {
  case 0:
    pCVar1[2].validation_magic = 1;
    break;
  case 1:
    pCVar1[2].validation_magic = 2;
    return 1;
  case 2:
    pCVar1[2].validation_magic = 3;
    return 1;
  case 3:
    pCVar1[2].validation_magic = 4;
    return 1;
  case 4:
    pCVar1[2].validation_magic = 5;
    return 1;
  case 5:
    pCVar1[2].validation_magic = 7;
    return 1;
  case 7:
    pCVar1[2].validation_magic = 8;
    return 1;
  case 8:
    pCVar1[2].validation_magic = 0;
    return 1;
  }
  return 1;
}
