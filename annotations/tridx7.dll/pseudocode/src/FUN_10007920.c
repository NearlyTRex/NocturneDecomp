// Name: FUN_10007920
// Address: 10007920
// Address Range: [[10007920, 10007af9]]
// Convention: unknown
// Signature: void FUN_10007920(void)

#include "nocturne.h"

void FUN_10007920(void)

{
  uint *puVar1;
  DWORD DVar2;
  HANDLE hFile;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  _STARTUPINFOA local_44;
  
  puVar1 = (uint *)FUN_10008830(0x480);
  if (puVar1 == (uint *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10241970 = 0x20;
  DAT_10241870 = puVar1;
  if (puVar1 < puVar1 + 0x120) {
    do {
      *(byte *)(puVar1 + 1) = 0;
      puVar5 = puVar1 + 9;
      *puVar1 = 0xffffffff;
      *(byte *)((int)puVar1 + 5) = 10;
      puVar1[2] = 0;
      puVar1 = puVar5;
    } while (puVar5 < DAT_10241870 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((int *)local_44.lpReserved2 != (int *)0x0)) {
    iVar4 = *(int *)local_44.lpReserved2;
    pbVar8 = (byte *)((int)local_44.lpReserved2 + 4);
    pbVar3 = pbVar8 + iVar4;
    if (0x7ff < iVar4) {
      iVar4 = 0x800;
    }
    iVar9 = iVar4;
    if (DAT_10241970 < iVar4) {
      piVar6 = &DAT_10241874;
      do {
        puVar1 = (uint *)FUN_10008830(0x480);
        iVar9 = DAT_10241970;
        if (puVar1 == (uint *)0x0) break;
        *piVar6 = (int)puVar1;
        DAT_10241970 = DAT_10241970 + 0x20;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(byte *)(puVar1 + 1) = 0;
            puVar5 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(byte *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar5;
          } while (puVar5 < (uint *)(*piVar6 + 0x480));
        }
        piVar6 = piVar6 + 1;
        iVar9 = iVar4;
      } while (DAT_10241970 < iVar4);
    }
    uVar7 = 0;
    if (0 < iVar9) {
      do {
        if (((*(HANDLE *)pbVar3 != (HANDLE)0xffffffff) && ((*pbVar8 & 1) != 0)) &&
           (DVar2 = GetFileType(*(HANDLE *)pbVar3), DVar2 != 0)) {
          puVar1 = (uint *)
                   ((uVar7 & 0x1f) * 0x24 +
                   *(int *)((int)&DAT_10241870 + ((int)(uVar7 & 0xffffffe7) >> 3)));
          *puVar1 = *(uint *)pbVar3;
          *(byte *)(puVar1 + 1) = *pbVar8;
        }
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 1;
        pbVar3 = pbVar3 + 4;
      } while ((int)uVar7 < iVar9);
    }
  }
  iVar4 = 0;
  iVar9 = 0;
  do {
    piVar6 = (int *)((int)DAT_10241870 + iVar4);
    if (*piVar6 == -1) {
      DVar2 = 0xfffffff6;
      *(byte *)(piVar6 + 1) = 0x81;
      if (iVar4 != 0) {
        DVar2 = (iVar9 == 1) - 0xc;
      }
      hFile = GetStdHandle(DVar2);
      if ((hFile == (HANDLE)0xffffffff) || (DVar2 = GetFileType(hFile), DVar2 == 0)) {
        *(byte *)(piVar6 + 1) = *(byte *)(piVar6 + 1) | 0x40;
      }
      else {
        *piVar6 = (int)hFile;
        if ((DVar2 & 0xff) == 2) {
          *(byte *)(piVar6 + 1) = *(byte *)(piVar6 + 1) | 0x40;
        }
        else if ((DVar2 & 0xff) == 3) {
          *(byte *)(piVar6 + 1) = *(byte *)(piVar6 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar6 + 1) = *(byte *)(piVar6 + 1) | 0x80;
    }
    iVar4 = iVar4 + 0x24;
    iVar9 = iVar9 + 1;
  } while (iVar4 < 0x6c);
  SetHandleCount(DAT_10241970);
  return;
}
