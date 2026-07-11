// Name: FUN_00569468
// Address: 00569468
// Address Range: [[00569468, 005695ca]]
// Convention: unknown
// Signature: byte * FUN_00569468(undefined4 param_1,int *param_2,int param_3)

#include "nocturne.h"

byte * FUN_00569468(uint param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  *(byte *)(param_3 + 0x16) = 0x20;
  pbVar4 = (byte *)FUN_005695cc(param_1,param_3);
  *(uint *)(param_3 + 4) = 0;
  if (*pbVar4 == 0x2a) {
    piVar2 = (int *)*param_2;
    *param_2 = (int)(piVar2 + 1);
    iVar3 = *piVar2;
    *(int *)(param_3 + 4) = iVar3;
    if (iVar3 < 0) {
      *(int *)(param_3 + 4) = -iVar3;
      *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) | 8;
    }
    pbVar4 = pbVar4 + 1;
  }
  else {
    for (; (0x2f < *pbVar4 && (*pbVar4 < 0x3a)); pbVar4 = pbVar4 + 1) {
      *(uint *)(param_3 + 4) = *(int *)(param_3 + 4) * 10 + (*pbVar4 - 0x30);
    }
  }
  *(uint *)(param_3 + 8) = 0xffffffff;
  if (*pbVar4 == 0x2e) {
    *(uint *)(param_3 + 8) = 0;
    if (pbVar4[1] == 0x2a) {
      piVar2 = (int *)*param_2;
      *param_2 = (int)(piVar2 + 1);
      iVar3 = *piVar2;
      *(int *)(param_3 + 8) = iVar3;
      if (iVar3 < 0) {
        *(uint *)(param_3 + 8) = 0xffffffff;
      }
      pbVar4 = pbVar4 + 2;
    }
    else {
      while( true ) {
        pbVar4 = pbVar4 + 1;
        if ((*pbVar4 < 0x30) || (0x39 < *pbVar4)) break;
        *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) * 10 + (*pbVar4 - 0x30);
      }
    }
    if (*(int *)(param_3 + 8) != -1) {
      *(byte *)(param_3 + 0x16) = 0x20;
    }
  }
  bVar1 = *pbVar4;
  pbVar5 = pbVar4 + 1;
  if (bVar1 < 0x4e) {
    if (bVar1 < 0x49) {
      if (bVar1 == 0x46) {
        *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) | 0x80;
        return pbVar5;
      }
      return pbVar4;
    }
    if (0x49 < bVar1) {
      if (bVar1 == 0x4c) {
        *(byte *)(param_3 + 0x1f) = *(byte *)(param_3 + 0x1f) | 1;
        return pbVar5;
      }
      return pbVar4;
    }
    pbVar5 = pbVar4;
    if ((pbVar4[1] == 0x36) && (pbVar4[2] == 0x34)) {
      *(byte *)(param_3 + 0x1f) = *(byte *)(param_3 + 0x1f) | 1;
      return pbVar4 + 3;
    }
  }
  else if (bVar1 < 0x4f) {
    *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) | 0x40;
  }
  else {
    if (0x6b < bVar1) {
      if ((0x6c < bVar1) && (bVar1 != 0x77)) {
        return pbVar4;
      }
      *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) | 0x20;
      return pbVar4 + 1;
    }
    if (bVar1 != 0x68) {
      return pbVar4;
    }
    *(byte *)(param_3 + 0x1e) = *(byte *)(param_3 + 0x1e) | 0x10;
  }
  return pbVar5;
}
