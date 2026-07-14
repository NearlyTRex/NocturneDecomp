// Name: FUN_1000ac10
// Address: 1000ac10
// Address Range: [[1000ac10, 1000aed2]]
// Convention: unknown
// Signature: undefined4 FUN_1000ac10(int param_1,char *param_2)

#include "nocturne.h"

uint FUN_1000ac10(int param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  size_t _Count;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  byte **ppuVar11;
  char *pcVar12;
  bool bVar13;
  byte bVar14;
  int iStack_8c;
  int iStack_88;
  byte abStack_84 [132];
  
  bVar14 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
    return 0;
  }
  __lock(0x13);
  DAT_10240854 = DAT_10240854 + 1;
  while (DAT_10240858 != 0) {
    Sleep(1);
  }
  if (param_1 != 0) {
    if (param_2 == (char *)0x0) {
      uVar3 = (&DAT_10017794)[param_1 * 3];
    }
    else {
      uVar3 = FUN_1000aee0(param_1,param_2);
    }
    goto LAB_1000aea9;
  }
  bVar2 = true;
  iStack_8c = 0;
  if (param_2 != (char *)0x0) {
    if (((*param_2 == 'L') && (param_2[1] == 'C')) && (param_2[2] == '_')) {
      do {
        pcVar4 = (char *)FUN_1000e310(param_2,&DAT_10012758);
        if (((pcVar4 == (char *)0x0) || (iVar9 = (int)pcVar4 - (int)param_2, iVar9 == 0)) ||
           (*pcVar4 == ';')) {
          FUN_10005a10(0x13);
          DAT_10240854 = DAT_10240854 + -1;
          return 0;
        }
        iStack_88 = 1;
        ppuVar11 = &PTR_s_LC_COLLATE_1001779c;
        do {
          iVar5 = FUN_1000e2d0(*ppuVar11,param_2,iVar9);
          if (iVar5 == 0) {
            uVar6 = 0xffffffff;
            pcVar12 = *ppuVar11;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
            } while (cVar1 != '\0');
            if (~uVar6 - 1 == iVar9) break;
          }
          ppuVar11 = ppuVar11 + 3;
          iStack_88 = iStack_88 + 1;
        } while (ppuVar11 < (byte **)((int)&PTR_s_LC_TIME_100177cc + 1));
        pcVar4 = pcVar4 + 1;
        _Count = FUN_1000e290(pcVar4,&DAT_10012754);
        if ((_Count == 0) && (*pcVar4 != ';')) {
          FUN_10005a10(0x13);
          DAT_10240854 = DAT_10240854 + -1;
          return 0;
        }
        if (iStack_88 < 6) {
          _strncpy((char *)abStack_84,pcVar4,_Count);
          abStack_84[_Count] = 0;
          iVar9 = FUN_1000aee0(iStack_88,abStack_84);
          if (iVar9 != 0) {
            iStack_8c = iStack_8c + 1;
          }
        }
      } while ((pcVar4[_Count] != '\0') && (param_2 = pcVar4 + _Count + 1, *param_2 != '\0'));
      if (iStack_8c == 0) {
        uVar3 = 0;
        goto LAB_1000aea9;
      }
    }
    else {
      iVar9 = FUN_1000b150(param_2,abStack_84,0,0,0);
      uVar3 = 0;
      if (iVar9 == 0) goto LAB_1000aea9;
      iVar9 = 0;
      puVar10 = &DAT_10017794;
      do {
        if (puVar10 != &DAT_10017794) {
          pbVar7 = abStack_84;
          pbVar8 = (byte *)*puVar10;
          do {
            bVar14 = *pbVar7;
            bVar13 = bVar14 < *pbVar8;
            if (bVar14 != *pbVar8) {
LAB_1000ae43:
              iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_1000ae48;
            }
            if (bVar14 == 0) break;
            bVar14 = pbVar7[1];
            bVar13 = bVar14 < pbVar8[1];
            if (bVar14 != pbVar8[1]) goto LAB_1000ae43;
            pbVar7 = pbVar7 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar14 != 0);
          iVar5 = 0;
LAB_1000ae48:
          if ((iVar5 == 0) || (iVar5 = FUN_1000aee0(iVar9,abStack_84), iVar5 != 0)) {
            iStack_8c = iStack_8c + 1;
          }
          else {
            bVar2 = false;
          }
        }
        puVar10 = puVar10 + 3;
        iVar9 = iVar9 + 1;
      } while (puVar10 < (uint *)((int)&PTR_DAT_100177d0 + 1));
      if (bVar2) {
        uVar3 = FUN_1000b060();
        FUN_10005b30(DAT_10017794);
        DAT_10017794 = 0;
        goto LAB_1000aea9;
      }
      if (iStack_8c == 0) {
        uVar3 = 0;
        goto LAB_1000aea9;
      }
    }
  }
  uVar3 = FUN_1000b060();
LAB_1000aea9:
  FUN_10005a10(0x13);
  DAT_10240854 = DAT_10240854 + -1;
  return uVar3;
}
