// Name: core_ammobox.cpp_FUN_00411ab0
// Address: 00411ab0
// Address Range: [[00411ab0, 00411b25]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_FUN_00411ab0()

#include "nocturne.h"

uint core_ammobox_cpp_FUN_00411ab0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CAmmoBoxClassInfo.name_hash);
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
    pCVar1[2].field6_0x68 = 0;
    return 1;
  }
  return 1;
}
