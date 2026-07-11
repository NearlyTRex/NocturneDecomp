// Name: FUN_004a3ab0
// Address: 004a3ab0
// Address Range: [[004a3ab0, 004a3b8c]]
// Convention: unknown
// Signature: void FUN_004a3ab0(int param_1,char *param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void FUN_004a3ab0(int param_1,char *param_2,uint param_3,float param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (((0.0 < param_4) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    iVar3 = 0;
    iVar4 = param_1 + 0x38c;
    if (0 < *(int *)(param_1 + 0x388)) {
      do {
        iVar2 = FUN_00564520(iVar4,param_2);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x88c + iVar3 * 4) = param_3;
          *(float *)(param_1 + 0x8a0 + iVar3 * 4) = param_4;
          return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x100;
      } while (iVar3 < *(int *)(param_1 + 0x388));
    }
    if (*(int *)(param_1 + 0x388) < 5) {
      pcVar5 = (char *)(*(int *)(param_1 + 0x388) * 0x100 + param_1 + 0x38c);
      do {
        cVar1 = *param_2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x88c + *(int *)(param_1 + 0x388) * 4) = param_3;
      *(float *)(param_1 + 0x8a0 + *(int *)(param_1 + 0x388) * 4) = param_4;
      *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + 1;
      return;
    }
  }
  return;
}
