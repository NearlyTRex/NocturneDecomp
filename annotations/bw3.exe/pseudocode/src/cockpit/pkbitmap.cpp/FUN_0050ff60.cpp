// Name: FUN_0050ff60
// Address: 0050ff60
// Address Range: [[0050ff60, 0051015b]]
// Convention: unknown
// Signature: undefined8 FUN_0050ff60(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0050ff60(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  ulonglong uVar12;
  byte abStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  FUN_0050f230(param_1);
  do {
    iVar3 = FUN_005a3890(abStack_2c,0x1c,1,param_2);
    if (iVar3 != 1) goto LAB_0050ffee;
    iVar6 = 4;
    bVar9 = false;
    iVar3 = 0;
    bVar10 = true;
    pbVar7 = abStack_2c;
    pbVar8 = (byte *)0x6036f8;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *pbVar7 < *pbVar8;
      bVar10 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (uint)bVar11 * -2 + 1;
      pbVar8 = pbVar8 + (uint)bVar11 * -2 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (((iVar3 == 0) && (iStack_28 != 0)) && (iStack_24 != 0)) {
      *(int *)(param_1 + 0x18) = iStack_28;
      *(int *)(param_1 + 0x1c) = iStack_24;
      if (((iStack_20 != 0) || (iStack_1c != 0)) ||
         ((*(int *)(param_1 + 0x18) + -1 != iStack_18 ||
          (*(int *)(param_1 + 0x1c) + -1 != iStack_14)))) goto LAB_0050ffaa;
      iVar3 = FUN_005a40df((*(int *)(param_1 + 0x1c) + 1) * 4);
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_005a3890(*(uint *)(param_1 + 0x20),(*(int *)(param_1 + 0x1c) + 1) * 4,1,
                             param_2);
        if (iVar3 == 1) {
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1c) + 1; iVar3 = iVar3 + 1) {
          }
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x1c)) {
            piVar4 = *(int **)(param_1 + 0x20);
            do {
              if (piVar4[1] < *piVar4) goto LAB_0050ffaa;
              iVar3 = iVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x1c));
          }
          uVar2 = *(uint *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
          if (param_3 != 0) {
            uVar12 = FUN_005a457c(param_2,uVar2,1);
            return uVar12;
          }
          iVar3 = FUN_005a3650(uVar2);
          *(int *)(param_1 + 0x14) = iVar3;
          if (iVar3 == 0) goto LAB_0050ffcd;
          iVar3 = FUN_005a3890(iVar3,uVar2,1,param_2);
          if (iVar3 == 1) {
            piVar4 = *(int **)(param_1 + 0x20);
            piVar1 = piVar4 + *(int *)(param_1 + 0x1c);
            for (uVar5 = *piVar4 + *(int *)(param_1 + 0x14);
                uVar5 < (uint)(*(int *)(param_1 + 0x14) + *piVar1);
                uVar5 = (*(ushort *)(uVar5 + 2) + 3 & 0xfffffffc) + (int)piVar4) {
              piVar4 = (int *)(uVar5 + 4);
            }
            return CONCAT44(piVar4,uVar5);
          }
        }
LAB_0050ffee:
        _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
        _DAT_01d71de4 = 0x4b1;
        FUN_004e4330("IO error reading PBM (possibly corrupt file).");
        goto LAB_0050ffaa;
      }
    }
    else {
LAB_0050ffaa:
      _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d71de4 = 0x4b2;
      FUN_004e4330("Corrupt data detected reading PBM.");
    }
LAB_0050ffcd:
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d71de4 = 0x4b3;
    FUN_004e4330("Out of memory reading PBM");
  } while( true );
}
