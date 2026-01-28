// Name: core_event.cpp_FUN_004b1b5c
// Address: 004b1b5c
// Address Range: [[004b1b5c, 004b1bcc] [004b1bd0, 004b1bde] [004b1be0, 004b1be9] [004b1bec, 004b1bfe]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004b1b5c(undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4)

#include "nocturne.h"

void core_event_cpp_FUN_004b1b5c(uint param_1,uint *param_2,uint param_3,uint *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  cVar2 = (char)*param_2;
  for (; ((uint)param_4 & 7) != 0; param_4 = (uint *)((int)param_4 + 1)) {
    *(char *)param_4 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = *(char *)((int)param_2 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  }
  while( true ) {
    lVar1 = *(longlong *)param_2;
    uVar3 = *param_2;
    if ((uVar3 & 0xff) == 0) {
      *(char *)param_4 = (char)uVar3;
      return;
    }
    if ((uVar3 & 0xff00) == 0) break;
    if ((uVar3 & 0xff0000) == 0) {
      *(byte *)((int)param_4 + 2) = 0;
      break;
    }
    if ((uVar3 & 0xff000000) == 0) {
LAB_004b1be3:
      *param_4 = uVar3;
      return;
    }
    uVar4 = param_2[1];
    param_2 = param_2 + 2;
    if ((uVar4 & 0xff) == 0) {
      *(char *)(param_4 + 1) = (char)uVar4;
      goto LAB_004b1be3;
    }
    if ((uVar4 & 0xff00) == 0) {
LAB_004b1bd4:
      *(short *)(param_4 + 1) = (short)uVar4;
      *param_4 = uVar3;
      return;
    }
    if ((uVar4 & 0xff0000) == 0) {
      *(byte *)((int)param_4 + 6) = 0;
      goto LAB_004b1bd4;
    }
    if ((uVar4 & 0xff000000) == 0) {
      *(longlong *)param_4 = (longlong)ROUND((float10)lVar1);
      return;
    }
    *(longlong *)param_4 = (longlong)ROUND((float10)lVar1);
    param_4 = param_4 + 2;
  }
  *(short *)param_4 = (short)uVar3;
  return;
}
