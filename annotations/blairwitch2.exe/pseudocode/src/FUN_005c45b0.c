// Name: FUN_005c45b0
// Address: 005c45b0
// Address Range: [[005c45b0, 005c4698]]
// Convention: unknown
// Signature: void FUN_005c45b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c45b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar4 = _DAT_0061f281;
  if (_DAT_026807e4 == 0) {
    iVar7 = 0;
    cVar1 = *_DAT_0061f281;
    pcVar3 = _DAT_0061f281;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)_DAT_0061f281;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)FUN_005c45a0(iVar2);
    if (pcVar3 != (char *)0x0) {
      _DAT_026810a0 = pcVar3;
      iVar7 = FUN_005c45a0(iVar7 * 5 + 4);
      if (iVar7 == 0) {
        FUN_005b86a0(pcVar3);
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
        _DAT_026807e0 = iVar7 + iVar5 + 4;
        _DAT_026807e4 = iVar7;
        FUN_005b77c0(_DAT_026807e0,0,iVar2);
      }
    }
    FUN_005c59e0();
  }
  return;
}
