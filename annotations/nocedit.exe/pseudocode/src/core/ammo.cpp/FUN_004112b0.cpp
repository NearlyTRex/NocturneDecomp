// Name: core_ammo.cpp_FUN_004112b0
// Address: 004112b0
// Address Range: [[004112b0, 00411355]]
// Convention: unknown
// Signature: undefined core_ammo.cpp_FUN_004112b0()

#include "nocturne.h"

uint core_ammo_cpp_FUN_004112b0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CAmmoClassInfo.name_hash)
  ;
  switch(pCVar1[2].field6_0x68) {
  case 0:
    pCVar1[2].field6_0x68 = 1;
    break;
  case 1:
    pCVar1[2].field6_0x68 = 2;
    return 1;
  case 2:
    pCVar1[2].field6_0x68 = 3;
    return 1;
  case 3:
    pCVar1[2].field6_0x68 = 4;
    return 1;
  case 4:
    pCVar1[2].field6_0x68 = 5;
    return 1;
  case 5:
    pCVar1[2].field6_0x68 = 7;
    return 1;
  case 7:
    pCVar1[2].field6_0x68 = 8;
    return 1;
  case 8:
    pCVar1[2].field6_0x68 = 0;
    return 1;
  }
  return 1;
}
