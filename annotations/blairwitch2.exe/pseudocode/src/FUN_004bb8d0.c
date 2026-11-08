// Name: FUN_004bb8d0
// Address: 004bb8d0
// Address Range: [[004bb8d0, 004bb9ac]]
// Convention: unknown
// Signature: void FUN_004bb8d0(int param_1,char *param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void FUN_004bb8d0(int param_1,char *param_2,uint param_3,float param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (((0.0 < param_4) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    iVar3 = 0;
    iVar4 = param_1 + 0x3b0;
    if (0 < *(int *)(param_1 + 0x3ac)) {
      do {
        iVar2 = FUN_005b8130(iVar4,param_2);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x8b0 + iVar3 * 4) = param_3;
          *(float *)(param_1 + 0x8c4 + iVar3 * 4) = param_4;
          return;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x100;
      } while (iVar3 < *(int *)(param_1 + 0x3ac));
    }
    if (*(int *)(param_1 + 0x3ac) < 5) {
      pcVar5 = (char *)(*(int *)(param_1 + 0x3ac) * 0x100 + param_1 + 0x3b0);
      do {
        cVar1 = *param_2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x8b0 + *(int *)(param_1 + 0x3ac) * 4) = param_3;
      *(float *)(param_1 + 0x8c4 + *(int *)(param_1 + 0x3ac) * 4) = param_4;
      *(int *)(param_1 + 0x3ac) = *(int *)(param_1 + 0x3ac) + 1;
      return;
    }
  }
  return;
}
