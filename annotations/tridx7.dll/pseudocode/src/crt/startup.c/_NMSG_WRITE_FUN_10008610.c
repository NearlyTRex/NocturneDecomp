// Name: crt_startup.c__NMSG_WRITE_FUN_10008610
// Address: 10008610
// Address Range: [[10008610, 100087fc]]
// Convention: __cdecl
// Signature: int __cdecl crt_startup_c__NMSG_WRITE_FUN_10008610(int rterrnum)

#include "nocturne.h"

int __cdecl _NMSG_WRITE(int rterrnum)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  CHAR *pCVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  bVar12 = 0;
  iVar4 = 0;
  piVar2 = &DAT_10016ff8;
  do {
    if (*piVar2 == rterrnum) break;
    piVar2 = piVar2 + 2;
    iVar4 = iVar4 + 1;
  } while (piVar2 < &DAT_10017080);
  if ((&DAT_10016ff8)[iVar4 * 2] == rterrnum) {
    if ((DAT_10016c70 == 1) || ((DAT_10016c70 == 0 && (DAT_10016c74 == 1)))) {
      hFile = *(HANDLE *)(DAT_10241870 + 0x48);
      if (hFile == (HANDLE)0xffffffff) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar8 = *(char **)(iVar4 * 8 + 0x10016ffc);
      uVar6 = 0xffffffff;
      pcVar10 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      piVar2 = (int *)WriteFile(hFile,pcVar8,~uVar6 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (rterrnum != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar8 = "<program name unknown>";
        pCVar9 = local_104;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pCVar9 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
          pCVar9 = pCVar9 + ((uint)bVar12 * -2 + 1) * 4;
        }
        *(ushort *)pCVar9 = *(ushort *)pcVar8;
        pCVar9[(uint)bVar12 * -4 + 2] = pcVar8[(uint)bVar12 * -4 + 2];
      }
      pcVar8 = local_104;
      uVar6 = 0xffffffff;
      pcVar10 = local_104;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar6) {
        uVar6 = 0xffffffff;
        pcVar8 = local_104;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
        } while (cVar1 != '\0');
        pcVar8 = acStack_140 + ~uVar6;
        _strncpy(pcVar8,"...",3);
      }
      pcVar10 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pcVar11 = *(uint *)pcVar10;
        pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
        pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
      }
      *(ushort *)pcVar11 = *(ushort *)pcVar10;
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar6;
      pcVar10 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pcVar10 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar12 * -8 + 4;
        pcVar10 = pcVar10 + (uint)bVar12 * -8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = "\n\n";
      do {
        pcVar10 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar6;
      pcVar10 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pcVar10 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar12 * -8 + 4;
        pcVar10 = pcVar10 + (uint)bVar12 * -8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = *(char **)(iVar4 * 8 + 0x10016ffc);
      do {
        pcVar10 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar8 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar6;
      pcVar10 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint *)pcVar10 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + (uint)bVar12 * -8 + 4;
        pcVar10 = pcVar10 + (uint)bVar12 * -8 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
      }
      iVar4 = _crtMessageBoxA
                        (local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return iVar4;
    }
  }
  return (int)piVar2;
}
