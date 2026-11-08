// Name: FUN_00499ba0
// Address: 00499ba0
// Address Range: [[00499ba0, 00499c79]]
// Convention: unknown
// Signature: void FUN_00499ba0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499ba0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  byte *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  if (0 < *param_1) {
    do {
      pcVar2 = (char *)FUN_004998a0(param_1,iVar7);
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + ~uVar5;
    } while (iVar7 < *param_1);
  }
  puVar3 = (byte *)FUN_005c1268(iVar6 + 1);
  if (puVar3 == (byte *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xd4a;
    FUN_005030e0("CStrList::copyToClipboard - out of memory for %d items, %d bytes",*param_1,iVar6 + 1);
  }
  iVar6 = 0;
  puVar8 = puVar3;
  if (0 < *param_1) {
    do {
      uVar4 = FUN_004998a0(param_1,iVar6);
      iVar6 = iVar6 + 1;
      iVar7 = FUN_005bfb40(puVar8,&DAT_005dc5bd,uVar4);
      puVar8 = puVar8 + iVar7;
    } while (iVar6 < *param_1);
  }
  uVar4 = 0x01C3EB54;
  *puVar8 = 0;
  FUN_00498290(uVar4,puVar3);
  FUN_005c0336(puVar3);
  return;
}
