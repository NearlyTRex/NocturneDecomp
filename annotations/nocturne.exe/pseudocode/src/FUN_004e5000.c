// Name: FUN_004e5000
// Address: 004e5000
// Address Range: [[004e5000, 004e51fa]]
// Convention: unknown
// Signature: void FUN_004e5000(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_004e5000(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar4;
  
  iVar10 = param_3 + param_5 * 0xa0 + 0x18 + param_4 * 0x48;
  iVar7 = 0;
  FUN_004e4c70(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((*(int *)(iVar10 + 0x10) != 0) && (*(int *)(iVar10 + 0x14) == 2)) {
    puVar9 = (uint *)(param_2 + param_5 * 0xf8);
    if (*(int *)(iVar10 + 0x18) != 0) {
      puVar5 = puVar9;
      iVar10 = param_1;
      do {
        puVar2 = puVar5 + 1;
        puVar1 = (uint *)(iVar10 + 0x7358);
        iVar10 = iVar10 + 4;
        iVar7 = iVar7 + 1;
        *puVar5 = *puVar1;
        puVar5 = puVar2;
      } while (puVar2 != puVar9 + 8);
      iVar8 = 0xa8;
      iVar10 = param_2 + param_5 * 0xf8;
      iVar11 = 3;
      do {
        iVar6 = iVar7 * 4 + param_1;
        iVar4 = iVar11 * 4 + iVar10;
        do {
          iVar3 = iVar4 + 0x34;
          puVar9 = (uint *)(iVar6 + 0x7358);
          iVar6 = iVar6 + 4;
          iVar7 = iVar7 + 1;
          *(uint *)(iVar4 + 0x5c) = *puVar9;
          iVar4 = iVar3;
        } while (iVar3 != iVar10 + iVar8);
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar11 < 0xc);
      param_2 = param_2 + param_5 * 0xf8;
      iVar7 = param_2 + 0x30;
      do {
        iVar10 = iVar7 + 0x34;
        *(uint *)(iVar7 + 0x5c) = 0;
        iVar7 = iVar10;
      } while (iVar10 != param_2 + 0xcc);
      return;
    }
    iVar10 = 0x9c;
    iVar8 = 0;
    do {
      iVar11 = iVar7 * 4 + param_1;
      puVar5 = puVar9 + iVar8;
      do {
        puVar2 = puVar5 + 0xd;
        puVar1 = (uint *)(iVar11 + 0x7358);
        iVar11 = iVar11 + 4;
        iVar7 = iVar7 + 1;
        puVar5[0x17] = *puVar1;
        puVar5 = puVar2;
      } while (puVar2 != (uint *)((int)puVar9 + iVar10));
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < 0xc);
    param_2 = param_2 + param_5 * 0xf8;
    iVar7 = param_2 + 0x30;
    do {
      iVar10 = iVar7 + 0x34;
      *(uint *)(iVar7 + 0x5c) = 0;
      iVar7 = iVar10;
    } while (iVar10 != param_2 + 0xcc);
    return;
  }
  iVar7 = 0;
  param_2 = param_5 * 0xf8 + param_2;
  do {
    puVar9 = (uint *)(param_1 + 0x7358);
    puVar5 = (uint *)(param_2 + iVar7);
    param_1 = param_1 + 4;
    iVar7 = iVar7 + 4;
    *puVar5 = *puVar9;
  } while (iVar7 != 0x54);
  *(uint *)(param_2 + 0x58) = 0;
  return;
}
