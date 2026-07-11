// Name: FUN_00567d88
// Address: 00567d88
// Address Range: [[00567d88, 0056808a]]
// Convention: unknown
// Signature: int FUN_00567d88(int param_1,int *param_2)

#include "nocturne.h"

int FUN_00567d88(int param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined6 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char local_80;
  char local_7f [79];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  ushort local_18;
  byte uStack_16;
  byte uStack_15;
  
  pcVar9 = &local_80;
  iVar10 = 0;
  local_24 = 0;
  while( true ) {
    iVar5 = FUN_00567540(param_1);
    if (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 2) == 0) break;
    local_24 = local_24 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) goto LAB_00567fbd;
  iVar11 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar11 + -1;
  pcVar9 = &local_80;
  if (iVar11 != 0) {
    if ((iVar5 == 0x2b) || (pcVar9 = &local_80, iVar5 == 0x2d)) {
      local_24 = local_24 + 1;
      pcVar9 = local_7f;
      local_80 = (char)iVar5;
      iVar5 = FUN_00568528(param_1);
      if (iVar5 == -1) goto LAB_00567fbd;
    }
    if ((((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) != 0) || (iVar5 == 0x2e)) {
      local_1c._0_2_ = 0;
      local_1c._2_2_ = 0;
      local_28 = 0;
      if (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) != 0) {
        local_28 = 1;
        do {
          *pcVar9 = (char)iVar5;
          pcVar9 = pcVar9 + 1;
          if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
            local_1c._2_2_ = (short)iVar5 + local_1c._2_2_ * 10 + -0x30;
          }
          iVar10 = iVar10 + 1;
          iVar5 = FUN_00568528(param_1);
          if (iVar5 == -1) goto LAB_00567fbd;
        } while (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) != 0);
      }
      pcVar7 = pcVar9;
      iVar11 = iVar10;
      if (iVar5 == 0x2e) {
        *pcVar9 = '.';
        pcVar9 = pcVar9 + 1;
        iVar5 = FUN_00568528(param_1);
        if (iVar5 == -1) goto LAB_00567fbd;
        if ((local_28 == 0) && (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) == 0))
        goto LAB_00567fb3;
        iVar10 = iVar10 + 1;
        do {
          if (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) == 0) break;
          iVar10 = iVar10 + 1;
          *pcVar9 = (char)iVar5;
          pcVar9 = pcVar9 + 1;
          iVar5 = FUN_00568528(param_1);
        } while (iVar5 != -1);
        if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
          local_18 = 0;
          uStack_16 = 0;
          pcVar7 = pcVar9;
          while( true ) {
            uStack_15 = 0;
            pcVar1 = pcVar7 + -1;
            pcVar7 = pcVar7 + -1;
            if (*pcVar1 == '.') break;
            local_20 = 10;
            uVar6 = CONCAT12(*pcVar1 + -0x30,local_18) / 10;
            local_18 = (ushort)uVar6;
            uStack_16 = (byte)(uVar6 >> 0x10);
          }
          local_1c._0_2_ = local_18;
        }
        pcVar7 = pcVar9;
        iVar11 = iVar10;
        if (iVar5 == -1) goto LAB_00567fbd;
      }
      pcVar9 = pcVar7;
      iVar10 = iVar11;
      if (((*(byte *)(param_1 + 0x10) & 0x10) == 0) && ((iVar5 == 0x65 || (iVar5 == 0x45)))) {
        iVar10 = iVar11 + 1;
        *pcVar7 = (char)iVar5;
        pcVar9 = pcVar7 + 1;
        iVar5 = FUN_00568528(param_1);
        if (iVar5 == -1) goto LAB_00567fbd;
        if ((iVar5 == 0x2b) || (iVar5 == 0x2d)) {
          iVar10 = iVar11 + 2;
          *pcVar9 = (char)iVar5;
          pcVar9 = pcVar7 + 2;
          iVar5 = FUN_00568528(param_1);
          if (iVar5 == -1) goto LAB_00567fbd;
        }
        if (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) == 0) {
          iVar10 = 0;
        }
        else {
          do {
            iVar10 = iVar10 + 1;
            *pcVar9 = (char)iVar5;
            pcVar9 = pcVar9 + 1;
            iVar5 = FUN_00568528(param_1);
            if (iVar5 == -1) goto LAB_00567fbd;
          } while (((&DAT_005c168c)[(byte)((char)iVar5 + 1)] & 0x20) != 0);
        }
      }
    }
  }
LAB_00567fb3:
  FUN_0056754c(iVar5,param_1);
LAB_00567fbd:
  if ((0 < iVar10) && (iVar10 = iVar10 + local_24, (*(byte *)(param_1 + 0x10) & 1) != 0)) {
    *pcVar9 = '\0';
    iVar5 = CONCAT22(local_1c._2_2_,(ushort)local_1c);
    if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
      (*(code *)PTR_FUN_005c1f8c)(&local_80,&local_30);
      iVar5 = CONCAT22(local_1c._2_2_,(ushort)local_1c);
    }
    else if (local_80 == '-') {
      iVar5 = -CONCAT22(local_1c._2_2_,(ushort)local_1c);
    }
    if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
      if ((*(byte *)(param_1 + 0x10) & 8) == 0) {
        puVar4 = (uint *)*param_2;
        *param_2 = (int)(puVar4 + 1);
        piVar8 = (int *)*puVar4;
      }
      else {
        puVar4 = (uint *)*param_2;
        *param_2 = (int)(puVar4 + 1);
        piVar8 = (int *)*puVar4;
      }
    }
    else {
      puVar3 = (undefined6 *)*param_2;
      *param_2 = (int)(puVar3 + 1);
      piVar8 = (int *)*puVar3;
    }
    bVar2 = *(byte *)(param_1 + 0x10);
    if ((bVar2 & 0x10) == 0) {
      if (((bVar2 & 0x20) != 0) || ((bVar2 & 0x40) != 0)) {
        *piVar8 = local_30;
        piVar8[1] = local_2c;
        return iVar10;
      }
      local_1c = iVar5;
      iVar5 = FUN_0056f100();
    }
    *piVar8 = iVar5;
  }
  return iVar10;
}
