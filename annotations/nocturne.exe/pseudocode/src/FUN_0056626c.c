// Name: FUN_0056626c
// Address: 0056626c
// Address Range: [[0056626c, 0056643f]]
// Convention: unknown
// Signature: void FUN_0056626c(byte *param_1,byte *param_2,char *param_3,char *param_4,byte *param_5)

#include "nocturne.h"

void FUN_0056626c(byte *param_1,byte *param_2,char *param_3,char *param_4,byte *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint local_18;
  byte *local_14;
  
  local_14 = param_1;
  local_18 = 0;
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    if ((*param_2 == 0x5c) && (pbVar4 = param_2, pbVar6 = param_1, param_2[1] == 0x5c)) {
      do {
        bVar1 = *pbVar4;
        *pbVar6 = bVar1;
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        pbVar6[1] = bVar1;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar1 = *param_2;
        param_2 = param_2 + 1;
      } while (bVar1 != 0);
      param_1 = param_1 + (~uVar5 - 1);
    }
    else {
      *param_1 = *param_2;
      param_1[1] = 0x3a;
      param_1 = param_1 + 2;
    }
  }
  *param_1 = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    do {
      uVar2 = FUN_0056d9f0(param_3,&local_18);
      uVar2 = FUN_00566250(uVar2);
      FUN_0056da30(uVar2,param_1);
      iVar3 = FUN_0056da50(param_1);
      param_1[iVar3] = 0;
      param_1 = (byte *)FUN_0056da80(param_1);
      param_3 = (char *)FUN_0056da80(param_3);
    } while (*param_3 != '\0');
    if (local_18 == 0) {
      local_18 = 0x5c;
    }
    pbVar4 = (byte *)FUN_0056dab0(local_14,param_1);
    if (*pbVar4 == local_18) {
      param_1 = param_1 + -1;
    }
    else {
      *param_1 = (byte)local_18;
    }
  }
  if (local_18 == 0) {
    local_18 = 0x5c;
  }
  if (param_4 == (char *)0x0) {
    if (*param_1 == local_18) {
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar2 = FUN_0056d9f0(param_4);
    uVar5 = FUN_00566250(uVar2,&local_18);
    if ((uVar5 != local_18) && (*param_1 == local_18)) {
      param_1 = param_1 + 1;
    }
    for (; *param_4 != '\0'; param_4 = (char *)FUN_0056da80(param_4)) {
      uVar2 = FUN_0056d9f0(param_4,&local_18);
      uVar2 = FUN_00566250(uVar2);
      FUN_0056da30(uVar2,param_1);
      iVar3 = FUN_0056da50(param_1);
      param_1[iVar3] = 0;
      param_1 = (byte *)FUN_0056da80(param_1);
    }
  }
  if ((param_5 != (byte *)0x0) && (*param_5 != 0)) {
    if (*param_5 != 0x2e) {
      *param_1 = 0x2e;
      param_1 = param_1 + 1;
    }
    for (; *param_5 != 0; param_5 = param_5 + 1) {
      *param_1 = *param_5;
      param_1 = param_1 + 1;
    }
  }
  *param_1 = 0;
  return;
}
