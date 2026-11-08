// Name: FUN_00460c70
// Address: 00460c70
// Address Range: [[00460c70, 00460d2c]]
// Convention: unknown
// Signature: int FUN_00460c70(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

int FUN_00460c70(int param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  
  FUN_00460910(local_220,param_1,param_2);
  cVar2 = *param_3;
  pcVar4 = param_3;
  while (cVar2 != '\0') {
    iVar3 = FUN_005b8e40(*pcVar4);
    if (iVar3 == 0x57) {
      if (param_1 != 0) {
        FUN_004613b0(param_1);
      }
      iVar3 = FUN_005b910c(local_220,param_3);
      return iVar3;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = FUN_00460980(local_220);
  if ((iVar3 != 0) && (iVar3 = FUN_005b910c(local_120,param_3), iVar3 != 0)) {
    if (local_20 != 0) {
      FUN_005b929c(iVar3,local_20,0);
    }
    return iVar3;
  }
  return 0;
}
