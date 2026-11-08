// Name: FUN_004b0a20
// Address: 004b0a20
// Address Range: [[004b0a20, 004b0ca2]]
// Convention: unknown
// Signature: int FUN_004b0a20(int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b0a20(int param_1,char *param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint extraout_ECX;
  char *pcVar5;
  float10 fVar6;
  
  if ((*(int *)(param_1 + 0x420c) != 0) && (_DAT_01c6cee8 != 0)) {
    if (*(int *)(param_1 + 0x4210) == 0) {
      iVar2 = FUN_004b33d0(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar2 = FUN_00509bc0(*(uint *)(param_1 + 0x4214),param_2,param_3,param_4,param_5,param_6
                          );
    }
    return iVar2;
  }
  pcVar4 = param_2;
  if (*(int *)(param_1 + 0x4210) == 0) {
    iVar2 = param_3;
    if (*(int *)(param_1 + 0x420c) != 0) {
      fVar6 = (float10)_DAT_01d76c40 * (float10)_DAT_005c2074;
      FUN_005a3120();
      *(uint *)(param_1 + 0x1de0) = extraout_ECX | (int)ROUND(fVar6) << 0x18;
    }
    while (cVar1 = *param_2, cVar1 != '\0') {
      if (cVar1 == '\r') {
        param_2 = param_2 + 1;
      }
      else if (cVar1 == '\n') {
        param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
        param_2 = param_2 + 1;
        iVar2 = param_3;
      }
      else {
        iVar3 = FUN_004b1460(param_1,cVar1,iVar2,param_4,param_5,param_6);
        param_2 = param_2 + 1;
        iVar2 = iVar2 + iVar3;
      }
    }
    return iVar2 - param_3;
  }
  do {
    pcVar5 = param_2;
    if (*param_2 == '\n') goto LAB_004b0ac4;
    if (*param_2 == '\0') goto LAB_004b0ac2;
    pcVar5 = param_2 + 1;
    if (*pcVar5 == '\n') goto LAB_004b0ac4;
    param_2 = param_2 + 2;
    if (*pcVar5 == '\0') {
LAB_004b0ac2:
      pcVar5 = (char *)0x0;
LAB_004b0ac4:
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      FUN_00509bc0(*(uint *)(param_1 + 0x4214),pcVar4,param_3,param_4,param_5,param_6);
      FUN_00509d90(*(uint *)(param_1 + 0x4214));
      if (pcVar5 == (char *)0x0) {
        return 0;
      }
      *pcVar5 = '\n';
      param_2 = pcVar5 + 1;
      param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
      pcVar4 = param_2;
    }
  } while( true );
}
