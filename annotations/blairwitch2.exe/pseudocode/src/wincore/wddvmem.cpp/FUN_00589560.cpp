// Name: FUN_00589560
// Address: 00589560
// Address Range: [[00589560, 005897ad]]
// Convention: unknown
// Signature: void FUN_00589560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589560(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  int iVar12;
  byte bVar13;
  uint local_8c [4];
  int local_7c;
  ulonglong *local_68;
  ulonglong *local_20;
  uint local_1c;
  ulonglong *local_18;
  int local_14;
  
  iVar12 = _DAT_02661af4;
  puVar11 = DAT_00622010;
  bVar13 = 0;
  if (DAT_0061e98c != 0) {
    if (_DAT_01c37788 != 0) {
      FUN_0055ff40(0);
      _DAT_02661af4 = 0;
      FUN_0058f270();
      return;
    }
    if (_DAT_02661af4 == 0) {
      if (_DAT_02661afc == 0) {
        local_20 = DAT_00622010;
        local_1c = DAT_006141b8 *
                   ((int)((DAT_006141c0 + (DAT_006141c0 >> 0x1f) * -8) -
                         (uint)((DAT_006141c0 >> 0x1f) << 2 < 0)) >> 3);
        FUN_005b77c0(local_8c,0,0x6c);
        local_8c[0] = 0x6c;
        iVar6 = (**(code **)(*_DAT_02661ae4 + 100))(_DAT_02661ae4,0,local_8c,1,0);
        local_18 = local_68;
        if ((iVar6 == 0) && (local_68 != (ulonglong *)0x0)) {
          local_14 = iVar12;
          if (0 < DAT_006141bc) {
            do {
              uVar8 = local_1c;
              puVar11 = local_20;
              puVar10 = local_18;
              if (_DAT_01c38b40 == 0) {
                for (uVar8 = local_1c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(uint *)puVar10 = *(uint *)puVar11;
                  puVar11 = (ulonglong *)((int)puVar11 + (uint)bVar13 * -8 + 4);
                  puVar10 = (ulonglong *)((int)puVar10 + (uint)bVar13 * -8 + 4);
                }
                for (uVar8 = local_1c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(byte *)puVar10 = *(byte *)puVar11;
                  puVar11 = (ulonglong *)((int)puVar11 + (uint)bVar13 * -2 + 1);
                  puVar10 = (ulonglong *)((int)puVar10 + (uint)bVar13 * -2 + 1);
                }
              }
              else {
                do {
                  uVar1 = puVar11[1];
                  uVar2 = puVar11[2];
                  uVar3 = puVar11[3];
                  *puVar10 = *puVar11;
                  puVar10[1] = uVar1;
                  puVar10[2] = uVar2;
                  puVar10[3] = uVar3;
                  uVar7 = uVar8 - 0x20;
                  bVar4 = 0x1f < (int)uVar8;
                  uVar8 = uVar7;
                  puVar11 = puVar11 + 4;
                  puVar10 = puVar10 + 4;
                } while (uVar7 != 0 && bVar4);
              }
              local_20 = (ulonglong *)((int)local_20 + local_1c);
              local_18 = (ulonglong *)((int)local_18 + local_7c);
              local_14 = local_14 + 1;
            } while (local_14 < DAT_006141bc);
          }
          iVar12 = (**(code **)(*_DAT_02661ae4 + 0x80))(_DAT_02661ae4,0);
          if (iVar12 != 0) {
            _DAT_01d046a0 = "..\\wincore\\wddvmem.cpp";
            _DAT_01d046a4 = 0x356;
            FUN_004e4500("Unable to unlock front buffer");
            _DAT_02661af4 = 0;
            FUN_0058f270();
            return;
          }
        }
        goto LAB_00589632;
      }
      _DAT_02661afc = _DAT_01c37788;
      FUN_005890c0();
      iVar12 = 0;
      if (0 < DAT_006141bc) {
        iVar6 = 0;
        do {
          puVar5 = *(byte **)(&DAT_01c2a38c + iVar6);
          iVar9 = 0;
          puVar10 = puVar11;
          if (0 < DAT_006141b8) {
            do {
              *puVar5 = *(byte *)puVar10;
              puVar11 = (ulonglong *)((int)puVar10 + 4);
              puVar5[1] = *(byte *)((int)puVar10 + 1);
              iVar9 = iVar9 + 1;
              puVar5[2] = *(byte *)((int)puVar10 + 2);
              puVar5 = puVar5 + 3;
              puVar10 = puVar11;
            } while (iVar9 < DAT_006141b8);
          }
          iVar12 = iVar12 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar12 < DAT_006141bc);
      }
      FUN_00589170();
      _DAT_02661afc = 1;
    }
    if (((_DAT_02661ae4 != (int *)0x0) &&
        (iVar12 = (**(code **)(*_DAT_02661ae4 + 0x2c))(_DAT_02661ae4,0,1), iVar12 != 0)) &&
       (iVar12 == -0x7789fe3e)) {
      FUN_005897e0();
    }
  }
LAB_00589632:
  _DAT_02661af4 = 0;
  FUN_0058f270();
  return;
}
