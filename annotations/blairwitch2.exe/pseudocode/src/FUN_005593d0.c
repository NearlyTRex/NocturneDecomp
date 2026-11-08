// Name: FUN_005593d0
// Address: 005593d0
// Address Range: [[005593d0, 005594b8]]
// Convention: unknown
// Signature: void FUN_005593d0(undefined4 param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005593d0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  _DAT_0264b460 = 0;
  *param_2 = '\0';
  for (iVar4 = 0; iVar4 < _DAT_0264b450; iVar4 = iVar4 + 1) {
    uVar2 = FUN_00481240(&DAT_0264b450,iVar4,0);
    iVar3 = FUN_00485840(param_3,uVar2);
    if (iVar3 != 0) {
      pcVar5 = (char *)FUN_00481240(&DAT_0264b450,iVar4);
      pcVar6 = (char *)(_DAT_0264b460 * 0x28 + 0x264b468);
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      _DAT_0264b460 = _DAT_0264b460 + 1;
      if (0x27 < _DAT_0264b460) break;
    }
  }
  if (_DAT_0264b460 < 1) {
    return;
  }
  iVar4 = FUN_005b849c();
  pcVar5 = (char *)((iVar4 % _DAT_0264b460) * 0x28 + 0x264b468);
  do {
    cVar1 = *pcVar5;
    *param_2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return;
}
