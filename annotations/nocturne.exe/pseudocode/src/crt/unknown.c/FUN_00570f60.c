// Name: crt_unknown.c_FUN_00570f60
// Address: 00570f60
// Address Range: [[00570f60, 00571048]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00570f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570f60(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulong count;
  
  pcVar4 = _DAT_005c1d09;
  if (_DAT_02de54a4 == 0) {
    iVar6 = 0;
    cVar1 = *_DAT_005c1d09;
    pcVar3 = _DAT_005c1d09;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)_DAT_005c1d09;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)func_0x00570f50(iVar2);
    if (pcVar3 != (char *)0x0) {
      _DAT_02de5d60 = pcVar3;
      iVar6 = func_0x00570f50(iVar6 * 5 + 4);
      if (iVar6 == 0) {
        FUN_005638d0(pcVar3);
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
        _DAT_02de54a0 = (void *)(iVar6 + iVar2 + 4);
        _DAT_02de54a4 = iVar6;
        memset(_DAT_02de54a0,0,count);
      }
    }
    FUN_00572b70();
  }
  return;
}
