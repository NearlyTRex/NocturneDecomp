// Name: crt_env.c__setenvp_FUN_10007b60
// Address: 10007b60
// Address Range: [[10007b60, 10007c3b]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c__setenvp_FUN_10007b60(void)

#include "nocturne.h"

int __cdecl _setenvp(void)

{
  char cVar1;
  uint *puVar2;
  void *pvVar3;
  int extraout_EAX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  
  bVar11 = 0;
  iVar7 = 0;
  cVar1 = *DAT_10016c64;
  pcVar8 = DAT_10016c64;
  while (cVar1 != '\0') {
    if (*pcVar8 != '=') {
      iVar7 = iVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + ~uVar4;
    cVar1 = *pcVar8;
  }
  puVar2 = (uint *)malloc(iVar7 * 4 + 4);
  DAT_10016d80 = puVar2;
  if (puVar2 == (uint *)0x0) {
    _amsg_exit(9);
  }
  cVar1 = *DAT_10016c64;
  pcVar8 = DAT_10016c64;
  do {
    if (cVar1 == '\0') {
      free(DAT_10016c64);
      *puVar2 = 0;
      return extraout_EAX;
    }
    uVar4 = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (*pcVar8 != '=') {
      pvVar3 = malloc(~uVar4);
      *puVar2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        _amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar10 = pcVar8;
      do {
        pcVar9 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar10 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = (char *)*puVar2;
      puVar2 = puVar2 + 1;
      pcVar9 = pcVar9 + -uVar5;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar10 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
        pcVar10 = pcVar10 + ((uint)bVar11 * -2 + 1) * 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
        pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
      }
    }
    pcVar8 = pcVar8 + ~uVar4;
    cVar1 = *pcVar8;
  } while( true );
}
