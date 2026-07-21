// Name: core_stranger.cpp_CStranger_getDeathState_FUN_00540890
// Address: 00540890
// Address Range: [[00540890, 005408b8]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_CStranger_getDeathState_FUN_00540890(undefined4 param_1)

#include "nocturne.h"

uint core_stranger_cpp_CStranger_getDeathState_FUN_00540890(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(param_1);
  return uVar2;
}
