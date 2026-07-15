// Name: crt_io.c__ioinit_FUN_10007920
// Address: 10007920
// Address Range: [[10007920, 10007af9]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__ioinit_FUN_10007920(void)

#include "nocturne.h"

int __cdecl _ioinit(void)

{
  uint *puVar1;
  DWORD DVar2;
  HANDLE hFile;
  UINT UVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  _STARTUPINFOA local_44;
  
  puVar1 = (uint *)malloc(0x480);
  if (puVar1 == (uint *)0x0) {
    _amsg_exit(0x1b);
  }
  DAT_10241970 = 0x20;
  DAT_10241870 = puVar1;
  if (puVar1 < puVar1 + 0x120) {
    do {
      *(byte *)(puVar1 + 1) = 0;
      puVar6 = puVar1 + 9;
      *puVar1 = 0xffffffff;
      *(byte *)((int)puVar1 + 5) = 10;
      puVar1[2] = 0;
      puVar1 = puVar6;
    } while (puVar6 < DAT_10241870 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((int *)local_44.lpReserved2 != (int *)0x0)) {
    iVar5 = *(int *)local_44.lpReserved2;
    pbVar9 = (byte *)((int)local_44.lpReserved2 + 4);
    pbVar4 = pbVar9 + iVar5;
    if (0x7ff < iVar5) {
      iVar5 = 0x800;
    }
    iVar10 = iVar5;
    if (DAT_10241970 < iVar5) {
      piVar7 = &DAT_10241874;
      do {
        puVar1 = (uint *)malloc(0x480);
        iVar10 = DAT_10241970;
        if (puVar1 == (uint *)0x0) break;
        *piVar7 = (int)puVar1;
        DAT_10241970 = DAT_10241970 + 0x20;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(byte *)(puVar1 + 1) = 0;
            puVar6 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(byte *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar6;
          } while (puVar6 < (uint *)(*piVar7 + 0x480));
        }
        piVar7 = piVar7 + 1;
        iVar10 = iVar5;
      } while (DAT_10241970 < iVar5);
    }
    uVar8 = 0;
    if (0 < iVar10) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pbVar9 & 1) != 0)) &&
           (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)) {
          puVar1 = (uint *)
                   ((uVar8 & 0x1f) * 0x24 +
                   *(int *)((int)&DAT_10241870 + ((int)(uVar8 & 0xffffffe7) >> 3)));
          *puVar1 = *(uint *)pbVar4;
          *(byte *)(puVar1 + 1) = *pbVar9;
        }
        uVar8 = uVar8 + 1;
        pbVar9 = pbVar9 + 1;
        pbVar4 = pbVar4 + 4;
      } while ((int)uVar8 < iVar10);
    }
  }
  iVar5 = 0;
  iVar10 = 0;
  do {
    piVar7 = (int *)((int)DAT_10241870 + iVar5);
    if (*piVar7 == -1) {
      DVar2 = 0xfffffff6;
      *(byte *)(piVar7 + 1) = 0x81;
      if (iVar5 != 0) {
        DVar2 = (iVar10 == 1) - 0xc;
      }
      hFile = GetStdHandle(DVar2);
      if ((hFile == (HANDLE)0xffffffff) || (DVar2 = GetFileType(hFile), DVar2 == 0)) {
        *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
      }
      else {
        *piVar7 = (int)hFile;
        if ((DVar2 & 0xff) == 2) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
        }
        else if ((DVar2 & 0xff) == 3) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x80;
    }
    iVar5 = iVar5 + 0x24;
    iVar10 = iVar10 + 1;
  } while (iVar5 < 0x6c);
  UVar3 = SetHandleCount(DAT_10241970);
  return UVar3;
}
