// Name: FUN_1000b150
// Address: 1000b150
// Address Range: [[1000b150, 1000b319]]
// Convention: unknown
// Signature: char * FUN_1000b150(byte *param_1,char *param_2,undefined4 *param_3,uint *param_4)

#include "nocturne.h"

char * FUN_1000b150(byte *param_1,char *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  byte local_88 [136];
  
  bVar11 = 0;
  if (param_1 == (byte *)0x0) {
    return (char *)0x0;
  }
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    *param_2 = 'C';
    param_2[1] = '\0';
    if (param_3 != (uint *)0x0) {
      *(ushort *)param_3 = 0;
      *(ushort *)((int)param_3 + 2) = 0;
      *(ushort *)(param_3 + 1) = 0;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
      return param_2;
    }
  }
  else {
    pbVar3 = &DAT_10017870;
    pbVar5 = param_1;
    do {
      bVar2 = *pbVar3;
      bVar10 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_1000b1e2:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_1000b1e7;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar10 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_1000b1e2;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1000b1e7:
    if (iVar4 != 0) {
      pbVar3 = &DAT_100177e8;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar3;
        bVar10 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_1000b216:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_1000b21b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar10 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_1000b216;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_1000b21b:
      if (iVar4 != 0) {
        iVar4 = FUN_1000b380(local_88,param_1);
        if (iVar4 != 0) {
          return (char *)0x0;
        }
        iVar4 = FUN_1000e350(local_88,&DAT_100177d8,local_88);
        if (iVar4 == 0) {
          return (char *)0x0;
        }
        DAT_100177e0 = (uint)DAT_100177dc;
        FUN_1000b480(&DAT_10017870,local_88);
        if (*param_1 == 0) {
          param_1 = &DAT_10017870;
        }
        uVar6 = 0xffffffff;
        do {
          pbVar5 = param_1;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar5 = param_1 + (uint)bVar11 * -2 + 1;
          bVar2 = *param_1;
          param_1 = pbVar5;
        } while (bVar2 != 0);
        uVar6 = ~uVar6;
        pbVar5 = pbVar5 + -uVar6;
        pbVar3 = &DAT_100177e8;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(uint *)pbVar3 = *(uint *)pbVar5;
          pbVar5 = pbVar5 + ((uint)bVar11 * -2 + 1) * 4;
          pbVar3 = pbVar3 + ((uint)bVar11 * -2 + 1) * 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar3 = *pbVar5;
          pbVar5 = pbVar5 + (uint)bVar11 * -2 + 1;
          pbVar3 = pbVar3 + (uint)bVar11 * -2 + 1;
        }
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = DAT_100177d8;
      *(ushort *)(param_3 + 1) = DAT_100177dc;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = DAT_100177e0;
    }
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_10017870;
    do {
      pcVar9 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar9 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(uint *)param_2 = *(uint *)pcVar8;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      param_2 = param_2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
      param_2 = param_2 + (uint)bVar11 * -2 + 1;
    }
    param_2 = &DAT_10017870;
  }
  return param_2;
}
