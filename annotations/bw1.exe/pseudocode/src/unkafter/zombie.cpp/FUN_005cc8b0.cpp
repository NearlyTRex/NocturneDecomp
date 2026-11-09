// Name: unkafter_zombie.cpp_FUN_005cc8b0
// Address: 005cc8b0
// Address Range: [[005cc8b0, 005cc998]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005cc8b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_zombie_cpp_FUN_005cc8b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulong count;
  
  pcVar4 = _DAT_006265d9;
  if (_DAT_02c9f6d4 == 0) {
    iVar6 = 0;
    cVar1 = *_DAT_006265d9;
    pcVar3 = _DAT_006265d9;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = (int)pcVar3 - (int)_DAT_006265d9;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    pcVar3 = (char *)unkafter_zombie_cpp_FUN_005cc8a0(iVar2);
    if (pcVar3 != (char *)0x0) {
      _DAT_02c9ff90 = pcVar3;
      iVar6 = unkafter_zombie_cpp_FUN_005cc8a0(iVar6 * 5 + 4);
      if (iVar6 == 0) {
        FUN_005c09f0(pcVar3);
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
        _DAT_02c9f6d0 = (void *)(iVar6 + iVar2 + 4);
        _DAT_02c9f6d4 = iVar6;
        memset(_DAT_02c9f6d0,0,count);
      }
    }
    unkafter_2d_cpp_FUN_005cdce0();
  }
  return;
}
