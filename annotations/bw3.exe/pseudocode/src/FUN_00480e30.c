// Name: FUN_00480e30
// Address: 00480e30
// Address Range: [[00480e30, 00480efa]]
// Convention: unknown
// Signature: void FUN_00480e30(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480e30(uint param_1,char *param_2)

{
  char cVar1;
  BOOL BVar2;
  HGLOBAL hMem;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_005bd326;
  }
  uVar4 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  BVar2 = OpenClipboard(_DAT_02d21b78);
  if (BVar2 != 0) {
    hMem = GlobalAlloc(0x2002,uVar4);
    if (hMem != (HGLOBAL)0x0) {
      pcVar3 = GlobalLock(hMem);
      if (pcVar3 == (char *)0x0) {
        GlobalFree(hMem);
      }
      else {
        pcVar6 = param_2;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pcVar3 = *(uint *)pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
          pcVar3 = pcVar3 + (uint)bVar7 * -8 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
          pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
        }
        GlobalUnlock(hMem);
        SetClipboardData(1,hMem);
      }
    }
    CloseClipboard();
  }
  _DAT_01c5b0e8 = (char *)FUN_005a3e50(_DAT_01c5b0e8,uVar4);
  if (_DAT_01c5b0e8 == (char *)0x0) {
    return;
  }
  pcVar3 = _DAT_01c5b0e8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar3 = *(uint *)param_2;
    param_2 = param_2 + (uint)bVar7 * -8 + 4;
    pcVar3 = pcVar3 + (uint)bVar7 * -8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *param_2;
    param_2 = param_2 + (uint)bVar7 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
  }
  return;
}
