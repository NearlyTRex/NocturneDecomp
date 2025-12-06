// Name: core_stranger.cpp_CStranger_FUN_005c67c0
// Address: 005c67c0
// Address Range: [[005c67c0, 005c67e8]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c67c0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c67c0(uint param_1) */

int core_stranger_cpp_CStranger_FUN_005c67c0(void)

{
  int iVar1;
  CCharacter *in_stack_00000008;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042c580(in_stack_00000008);
  return iVar1;
}
