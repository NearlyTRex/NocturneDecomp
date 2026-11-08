// Name: FUN_00558cb0
// Address: 00558cb0
// Address Range: [[00558cb0, 00558d45]]
// Convention: unknown
// Signature: void FUN_00558cb0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558cb0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  _DAT_0264b460 = 0;
  if (_DAT_0264b450 < 1) {
    _DAT_0264b460 = 0;
    return;
  }
  do {
    uVar2 = FUN_00481240(&DAT_0264b450,iVar5,0);
    iVar3 = FUN_00485840(param_1,uVar2);
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00481240(&DAT_0264b450,iVar5);
      pcVar6 = (char *)(_DAT_0264b460 * 0x28 + 0x264b468);
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      _DAT_0264b460 = _DAT_0264b460 + 1;
      if (0x27 < _DAT_0264b460) {
        return;
      }
    }
    iVar5 = iVar5 + 1;
    if (_DAT_0264b450 <= iVar5) {
      return;
    }
  } while( true );
}
