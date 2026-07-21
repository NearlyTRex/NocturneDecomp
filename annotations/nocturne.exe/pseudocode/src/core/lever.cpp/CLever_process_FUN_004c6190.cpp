// Name: core_lever.cpp_CLever_process_FUN_004c6190
// Address: 004c6190
// Address Range: [[004c6190, 004c638c]]
// Convention: unknown
// Signature: void core_lever_cpp_CLever_process_FUN_004c6190(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lever_cpp_CLever_process_FUN_004c6190(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x410) == 0) goto LAB_004c6314;
  if (*(float *)(param_1 + 0x414) <= *(float *)(param_1 + 0x2d4)) {
    fVar1 = *(float *)(param_1 + 0x2d4) - param_2 * (float)_DAT_00587925;
    *(float *)(param_1 + 0x2d4) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x414)) {
      *(uint *)(param_1 + 0x410) = 0;
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x414);
      if ((*(int *)(param_1 + 0x404) != 0) && (*(float *)(param_1 + 0x2d4) < (float)_DAT_0058792d))
      {
        iVar3 = param_1 + 0x33c;
        goto LAB_004c621d;
      }
    }
  }
  else {
    fVar1 = param_2 * (float)_DAT_00587925 + *(float *)(param_1 + 0x2d4);
    *(float *)(param_1 + 0x2d4) = fVar1;
    if (*(float *)(param_1 + 0x414) < fVar1) {
      *(uint *)(param_1 + 0x410) = 0;
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x414);
      if ((*(int *)(param_1 + 0x404) != 0) && ((float)_DAT_00587935 < *(float *)(param_1 + 0x2d4)))
      {
        iVar3 = param_1 + 0x2d8;
LAB_004c621d:
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,iVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x408) != 0) {
    core_lever_cpp_CLever_setState_FUN_004c6390
              (*(int *)(param_1 + 0x408),*(uint *)(param_1 + 0x2d4));
  }
  iVar3 = 0;
  iVar4 = 0;
  while (iVar4 < *(int *)(0x01E57284 + 0x14cd6c)) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),_DAT_01cc3660);
    if ((iVar2 == 0) || (param_1 != *(int *)(iVar2 + 0x408))) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
    else {
      core_lever_cpp_CLever_setState_FUN_004c6390
                (iVar2,*(uint *)(*(int *)(iVar2 + 0x408) + 0x2d4));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
  }
LAB_004c6314:
  if (*(int *)(param_1 + 0x404) == 0) {
    if ((*(float *)(param_1 + 0x2d4) < (float)_DAT_0058792d) && (*(char *)(param_1 + 0x33c) != '\0')
       ) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x33c);
    }
    if (((float)_DAT_00587935 < *(float *)(param_1 + 0x2d4)) && (*(char *)(param_1 + 0x2d8) != '\0')
       ) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x2d8);
      return;
    }
  }
  return;
}
