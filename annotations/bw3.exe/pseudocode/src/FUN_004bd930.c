// Name: FUN_004bd930
// Address: 004bd930
// Address Range: [[004bd930, 004bda0c]]
// Convention: unknown
// Signature: void FUN_004bd930(int param_1,char *param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void FUN_004bd930(int param_1,char *param_2,uint param_3,float param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (((0.0 < param_4) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    iVar3 = 0;
    iVar4 = param_1 + 0x440;
    if (0 < *(int *)(param_1 + 0x43c)) {
      do {
        iVar2 = FUN_005a3260(iVar4,param_2);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x940 + iVar3 * 4) = param_3;
          *(float *)(param_1 + 0x954 + iVar3 * 4) = param_4;
          return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x100;
      } while (iVar3 < *(int *)(param_1 + 0x43c));
    }
    if (*(int *)(param_1 + 0x43c) < 5) {
      pcVar5 = (char *)(*(int *)(param_1 + 0x43c) * 0x100 + param_1 + 0x440);
      do {
        cVar1 = *param_2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x940 + *(int *)(param_1 + 0x43c) * 4) = param_3;
      *(float *)(param_1 + 0x954 + *(int *)(param_1 + 0x43c) * 4) = param_4;
      *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + 1;
      return;
    }
  }
  return;
}
