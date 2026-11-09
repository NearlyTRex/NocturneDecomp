// Name: core_stranger.cpp_FUN_0056f100
// Address: 0056f100
// Address Range: [[0056f100, 0056f128]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_0056f100(undefined4 param_1)

#include "nocturne.h"

uint core_stranger_cpp_FUN_0056f100(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = core_charactr_cpp_FUN_004281d0(param_1);
  return uVar2;
}
