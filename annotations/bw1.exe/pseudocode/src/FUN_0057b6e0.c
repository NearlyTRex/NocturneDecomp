// Name: FUN_0057b6e0
// Address: 0057b6e0
// Address Range: [[0057b6e0, 0057b775]]
// Convention: unknown
// Signature: void FUN_0057b6e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b6e0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  _DAT_02c82c30 = 0;
  if (_DAT_02c82c20 < 1) {
    _DAT_02c82c30 = 0;
    return;
  }
  do {
    uVar2 = FUN_004998a0(&DAT_02c82c20,iVar5,0);
    iVar3 = FUN_0049dea0(param_1,uVar2);
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_004998a0(&DAT_02c82c20,iVar5);
      pcVar6 = (char *)(_DAT_02c82c30 * 0x28 + 0x2c82c38);
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      _DAT_02c82c30 = _DAT_02c82c30 + 1;
      if (0x27 < _DAT_02c82c30) {
        return;
      }
    }
    iVar5 = iVar5 + 1;
    if (_DAT_02c82c20 <= iVar5) {
      return;
    }
  } while( true );
}
