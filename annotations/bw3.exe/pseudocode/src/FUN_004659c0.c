// Name: FUN_004659c0
// Address: 004659c0
// Address Range: [[004659c0, 00465a7c]]
// Convention: unknown
// Signature: int FUN_004659c0(int param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

int FUN_004659c0(int param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  
  FUN_00465660(local_220,param_1,param_2);
  cVar2 = *param_3;
  pcVar4 = param_3;
  while (cVar2 != '\0') {
    iVar3 = FUN_005a4120(*pcVar4);
    if (iVar3 == 0x57) {
      if (param_1 != 0) {
        FUN_00466190(param_1);
      }
      iVar3 = FUN_005a43ec(local_220,param_3);
      return iVar3;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = FUN_004656d0(local_220);
  if ((iVar3 != 0) && (iVar3 = FUN_005a43ec(local_120,param_3), iVar3 != 0)) {
    if (local_20 != 0) {
      FUN_005a457c(iVar3,local_20,0);
    }
    return iVar3;
  }
  return 0;
}
