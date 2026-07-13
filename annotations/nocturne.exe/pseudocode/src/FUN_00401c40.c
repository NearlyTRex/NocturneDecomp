// Name: FUN_00401c40
// Address: 00401c40
// Address Range: [[00401c40, 00401d96]]
// Convention: unknown
// Signature: int FUN_00401c40(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00401c40(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  
  iVar5 = (param_1 + -0x20) * 0x91;
  uVar10 = (uint)(byte)(&DAT_005a4b80)[iVar5];
  if ((((param_2 < _DAT_01c00c58) || (param_3 < _DAT_01c00c5c)) ||
      ((int)((_DAT_01c00c60 + 1) - uVar10) < param_2)) || (_DAT_01c00c64 + -10 < param_3)) {
    iVar5 = 0;
  }
  else {
    param_3 = param_3 * 4;
    pbVar2 = &DAT_005a4b81 + iVar5;
    iVar5 = param_3 + 0x2c;
    if (DAT_005b7624 == 8) {
      do {
        iVar11 = 0;
        pbVar6 = (byte *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_2);
        pbVar7 = pbVar6;
        if (uVar10 != 0) {
          do {
            pbVar6 = pbVar7 + 1;
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            iVar11 = iVar11 + 1;
            *pbVar7 = bVar1;
            pbVar7 = pbVar6;
          } while (iVar11 < (int)uVar10);
        }
        param_3 = param_3 + 4;
        *pbVar6 = 0;
      } while (param_3 != iVar5);
    }
    else if (DAT_005b7624 == 0x10) {
      do {
        iVar11 = 0;
        puVar3 = (ushort *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_2 * 2);
        puVar4 = puVar3;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar3 = puVar4 + 1;
            iVar11 = iVar11 + 1;
            *puVar4 = *(ushort *)(&DAT_01bff720 + (uint)bVar1 * 2);
            puVar4 = puVar3;
          } while (iVar11 < (int)uVar10);
        }
        param_3 = param_3 + 4;
        *puVar3 = 0;
      } while (param_3 != iVar5);
    }
    else {
      do {
        iVar11 = 0;
        puVar8 = (uint *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_2 * 4);
        puVar9 = puVar8;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar8 = puVar9 + 1;
            iVar11 = iVar11 + 1;
            *puVar9 = *(uint *)((uint)bVar1 * 4 + 0x1bff920);
            puVar9 = puVar8;
          } while (iVar11 < (int)uVar10);
        }
        param_3 = param_3 + 4;
        *puVar8 = 0;
      } while (param_3 != iVar5);
    }
    iVar5 = uVar10 + 1;
  }
  return iVar5;
}
