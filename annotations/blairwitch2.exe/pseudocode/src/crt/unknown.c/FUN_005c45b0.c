// Name: crt_unknown.c_FUN_005c45b0
// Address: 005c45b0
// Address Range: [[005c45b0, 005c4698]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c45b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c45b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulong count;
  
  pcVar4 = _DAT_0061f281;
  if (_DAT_026807e4 == 0) {
    iVar6 = 0;
    cVar1 = *_DAT_0061f281;
    pcVar3 = _DAT_0061f281;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)_DAT_0061f281;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)FUN_005c45a0(iVar2);
    if (pcVar3 != (char *)0x0) {
      _DAT_026810a0 = pcVar3;
      iVar6 = FUN_005c45a0(iVar6 * 5 + 4);
      if (iVar6 == 0) {
        FUN_005b86a0(pcVar3);
      }
      else {
        count = 0;
        iVar2 = 0;
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          *(char **)(iVar2 + iVar6) = pcVar3;
          pcVar5 = pcVar3;
          do {
            pcVar3 = pcVar5 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar5 = cVar1;
            pcVar5 = pcVar3;
          } while (cVar1 != '\0');
          iVar2 = iVar2 + 4;
          count = count + 1;
          cVar1 = *pcVar4;
        }
        *(uint *)(iVar2 + iVar6) = 0;
        _DAT_026807e0 = (void *)(iVar6 + iVar2 + 4);
        _DAT_026807e4 = iVar6;
        memset(_DAT_026807e0,0,count);
      }
    }
    FUN_005c59e0();
  }
  return;
}
