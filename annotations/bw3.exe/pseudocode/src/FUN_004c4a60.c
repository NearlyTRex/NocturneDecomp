// Name: FUN_004c4a60
// Address: 004c4a60
// Address Range: [[004c4a60, 004c4bbb]]
// Convention: unknown
// Signature: void FUN_004c4a60(int param_1,char *param_2,int param_3,uint param_4)

#include "nocturne.h"

void FUN_004c4a60(int param_1,char *param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  
  iVar2 = FUN_005a3260(param_2,param_1 + 0x298);
  if (((iVar2 != 0) || (*(int *)(param_1 + 0x2fc) == 0)) ||
     (iVar2 = FUN_00556700(*(int *)(param_1 + 0x2fc)), iVar2 == 0)) {
    bVar4 = *(int *)(param_1 + 0x2fc) != 0;
    if (bVar4) {
      FUN_00556c10(*(int *)(param_1 + 0x2fc),0,0x40800000,1);
      *(uint *)(param_1 + 0x2fc) = 0;
    }
    pcVar3 = (char *)(param_1 + 0x298);
    do {
      cVar1 = *param_2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    if ((*(char *)(param_1 + 0x298) != '\0') && (iVar2 = FUN_00556e30(1), iVar2 != 0)) {
      FUN_00555fd0();
      FUN_00555e90(1);
      if (((param_4 & 0x7fffffff) != 0) || (param_3 != 0)) {
        FUN_00555f60(param_3,param_4,1);
      }
      if (bVar4) {
        uVar5 = 0x3c23d70a;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x308);
      }
      FUN_00555df0(uVar5);
      FUN_00555f20(1);
      uVar5 = FUN_005609b0(0x02CF5680,param_1,param_1 + 0x298);
      *(uint *)(param_1 + 0x2fc) = uVar5;
      if (bVar4) {
        FUN_00556c10(uVar5,*(uint *)(param_1 + 0x308),0x40800000,0);
      }
      FUN_00556050();
      *(uint *)(param_1 + 0x300) = 0;
      *(uint *)(param_1 + 0x304) = 0;
      return;
    }
  }
  return;
}
