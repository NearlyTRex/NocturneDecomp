// Name: FUN_004a8df0
// Address: 004a8df0
// Address Range: [[004a8df0, 004a90a3]]
// Convention: unknown
// Signature: int FUN_004a8df0(int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a8df0(int param_1,char *param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint extraout_ECX;
  char *pcVar4;
  float10 fVar5;
  char *local_14;
  
  if ((*(int *)(param_1 + 0x420c) != 0) && (_DAT_01c37788 != 0)) {
    if (*(int *)(param_1 + 0x4210) == 0) {
      iVar2 = FUN_004ab840(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar2 = FUN_00510cd0(*(uint *)(param_1 + 0x4214),param_2,param_3,param_4,param_5,param_6
                          );
    }
    return iVar2;
  }
  if (*(int *)(param_1 + 0x4210) == 0) {
    iVar2 = param_3;
    if (*(int *)(param_1 + 0x420c) != 0) {
      fVar5 = (float10)_DAT_01d09860 * (float10)_DAT_005d69dd;
      FUN_005b7ff0();
      *(uint *)(param_1 + 0x1de0) = extraout_ECX | (int)ROUND(fVar5) << 0x18;
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
        iVar3 = FUN_004a9870(param_1,cVar1,iVar2,param_4,param_5,param_6);
        param_2 = param_2 + 1;
        iVar2 = iVar2 + iVar3;
      }
    }
    return iVar2 - param_3;
  }
  local_14 = param_2;
  do {
    pcVar4 = param_2;
    if (*param_2 == '\n') goto LAB_004a8e88;
    if (*param_2 == '\0') goto LAB_004a8e86;
    pcVar4 = param_2 + 1;
    if (*pcVar4 == '\n') goto LAB_004a8e88;
    param_2 = param_2 + 2;
    if (*pcVar4 == '\0') {
LAB_004a8e86:
      pcVar4 = (char *)0x0;
LAB_004a8e88:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4214) + 0x6a44) + 4))
                        (*(int *)(param_1 + 0x4214),local_14,param_3,param_4,param_5,param_6);
      if (iVar2 == -1) {
        *(uint *)(param_1 + 0x4210) = 0;
        iVar2 = FUN_004a8df0(param_1,local_14,param_3,param_4,param_5,param_6);
        *(uint *)(param_1 + 0x4210) = 1;
      }
      if (pcVar4 == (char *)0x0) {
        return iVar2;
      }
      param_2 = pcVar4 + 1;
      *pcVar4 = '\n';
      param_4 = param_4 + *(int *)(param_1 + 0x41f0) + *(int *)(param_1 + 0x41f8);
      local_14 = param_2;
    }
  } while( true );
}
