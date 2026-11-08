// Name: FUN_005cc8b0
// Address: 005cc8b0
// Address Range: [[005cc8b0, 005cc998]]
// Convention: unknown
// Signature: void FUN_005cc8b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc8b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar4 = _DAT_006265d9;
  if (_DAT_02c9f6d4 == 0) {
    iVar7 = 0;
    cVar1 = *_DAT_006265d9;
    pcVar3 = _DAT_006265d9;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)_DAT_006265d9;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)FUN_005cc8a0(iVar2);
    if (pcVar3 != (char *)0x0) {
      _DAT_02c9ff90 = pcVar3;
      iVar7 = FUN_005cc8a0(iVar7 * 5 + 4);
      if (iVar7 == 0) {
        FUN_005c09f0(pcVar3);
      }
      else {
        iVar2 = 0;
        iVar5 = 0;
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          *(char **)(iVar5 + iVar7) = pcVar3;
          pcVar6 = pcVar3;
          do {
            pcVar3 = pcVar6 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar3;
          } while (cVar1 != '\0');
          iVar5 = iVar5 + 4;
          iVar2 = iVar2 + 1;
          cVar1 = *pcVar4;
        }
        *(uint *)(iVar5 + iVar7) = 0;
        _DAT_02c9f6d0 = iVar7 + iVar5 + 4;
        _DAT_02c9f6d4 = iVar7;
        FUN_005bfb70(_DAT_02c9f6d0,0,iVar2);
      }
    }
    FUN_005cdce0();
  }
  return;
}
