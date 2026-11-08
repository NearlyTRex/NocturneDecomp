// Name: FUN_005143b0
// Address: 005143b0
// Address Range: [[005143b0, 005144ac]]
// Convention: unknown
// Signature: undefined4 FUN_005143b0(int *param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint FUN_005143b0(int *param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = FUN_005a3cb2(0x42c);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_00512f00(iVar2);
  }
  if (iVar4 == 0) {
    pcVar5 = (char *)FUN_00508960("Out of memory");
    do {
      cVar1 = *pcVar5;
      *param_3 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = FUN_00512fb0(iVar4,param_2,param_3);
    if (iVar2 != 0) {
      (**(code **)(param_1[0x65] + 0x10))(param_1,param_2);
      if (*param_1 < 100) {
        param_1[*param_1 + 1] = iVar4;
        *param_1 = *param_1 + 1;
        return 1;
      }
      if (iVar4 != 0) {
        uVar3 = FUN_00512f70(iVar4,0);
        FUN_005a30c4(uVar3);
      }
      pcVar5 = (char *)FUN_00508960("Too many PODs already mounted");
      do {
        cVar1 = *pcVar5;
        *param_3 = cVar1;
        if (cVar1 == '\0') {
          return 0;
        }
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        param_3[1] = cVar1;
        param_3 = param_3 + 2;
      } while (cVar1 != '\0');
      return 0;
    }
    if (iVar4 != 0) {
      uVar3 = FUN_00512f70(iVar4,0);
      FUN_005a30c4(uVar3);
    }
  }
  return 0;
}
