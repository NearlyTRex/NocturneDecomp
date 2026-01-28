// Name: core_platfrm.cpp_FUN_0054e480
// Address: 0054e480
// Address Range: [[0054e480, 0054e4df]]
// Convention: unknown
// Signature: undefined4 core_platfrm_cpp_FUN_0054e480(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e480(uint param_1) */

uint core_platfrm_cpp_FUN_0054e480(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  switch(pCVar1[5].unk1) {
  case 0:
    pCVar1[5].unk1 = 1;
    break;
  case 1:
    pCVar1[5].unk1 = 2;
    break;
  case 2:
    pCVar1[5].unk1 = 3;
    break;
  default:
    pCVar1[5].unk1 = 0;
    return 1;
  }
  return 1;
}
