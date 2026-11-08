// Name: FUN_00538280
// Address: 00538280
// Address Range: [[00538280, 0053847b]]
// Convention: unknown
// Signature: undefined8 FUN_00538280(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00538280(int param_1,uint param_2,int param_3)

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
  FUN_00537550(param_1);
  do {
    iVar3 = FUN_005c0b10(abStack_2c,0x1c,1,param_2);
    if (iVar3 != 1) goto LAB_0053830e;
    iVar6 = 4;
    bVar9 = false;
    iVar3 = 0;
    bVar10 = true;
    pbVar7 = abStack_2c;
    pbVar8 = (byte *)0x62281c;
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
          (*(int *)(param_1 + 0x1c) + -1 != iStack_14)))) goto LAB_005382ca;
      iVar3 = FUN_005c1268((*(int *)(param_1 + 0x1c) + 1) * 4);
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_005c0b10(*(uint *)(param_1 + 0x20),(*(int *)(param_1 + 0x1c) + 1) * 4,1,
                             param_2);
        if (iVar3 == 1) {
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1c) + 1; iVar3 = iVar3 + 1) {
          }
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x1c)) {
            piVar4 = *(int **)(param_1 + 0x20);
            do {
              if (piVar4[1] < *piVar4) goto LAB_005382ca;
              iVar3 = iVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x1c));
          }
          uVar2 = *(uint *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
          if (param_3 != 0) {
            uVar12 = FUN_005c170c(param_2,uVar2,1);
            return uVar12;
          }
          iVar3 = FUN_005c08d0(uVar2);
          *(int *)(param_1 + 0x14) = iVar3;
          if (iVar3 == 0) goto LAB_005382ed;
          iVar3 = FUN_005c0b10(iVar3,uVar2,1,param_2);
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
LAB_0053830e:
        _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
        _DAT_01d1d404 = 0x4b1;
        FUN_005030e0("IO error reading PBM (possibly corrupt file).");
        goto LAB_005382ca;
      }
    }
    else {
LAB_005382ca:
      _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d1d404 = 0x4b2;
      FUN_005030e0("Corrupt data detected reading PBM.");
    }
LAB_005382ed:
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d1d404 = 0x4b3;
    FUN_005030e0("Out of memory reading PBM");
  } while( true );
}
