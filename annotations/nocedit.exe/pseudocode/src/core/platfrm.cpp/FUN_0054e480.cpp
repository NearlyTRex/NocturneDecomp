// Name: core_platfrm.cpp_FUN_0054e480
// Address: 0054e480
// Address Range: [[0054e480, 0054e4df]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e480()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e480(uint param_1) */

uint core_platfrm_cpp_FUN_0054e480(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  switch(pCVar1[5].field7_0x6c) {
  case 0:
    pCVar1[5].field7_0x6c = 1;
    break;
  case 1:
    pCVar1[5].field7_0x6c = 2;
    break;
  case 2:
    pCVar1[5].field7_0x6c = 3;
    break;
  default:
    pCVar1[5].field7_0x6c = 0;
    return 1;
  }
  return 1;
}
