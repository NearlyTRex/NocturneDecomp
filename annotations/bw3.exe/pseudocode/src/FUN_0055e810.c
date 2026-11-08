// Name: FUN_0055e810
// Address: 0055e810
// Address Range: [[0055e810, 0055e8a5]]
// Convention: unknown
// Signature: void FUN_0055e810(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055e810(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  _DAT_02cf5850 = 0;
  if (_DAT_02cf5840 < 1) {
    _DAT_02cf5850 = 0;
    return;
  }
  do {
    uVar2 = FUN_00482440(&DAT_02cf5840,iVar5,0);
    iVar3 = FUN_00486a40(param_1,uVar2);
    if (iVar3 != 0) {
      pcVar4 = (char *)FUN_00482440(&DAT_02cf5840,iVar5);
      pcVar6 = (char *)(_DAT_02cf5850 * 0x28 + 0x2cf5858);
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      _DAT_02cf5850 = _DAT_02cf5850 + 1;
      if (0x27 < _DAT_02cf5850) {
        return;
      }
    }
    iVar5 = iVar5 + 1;
    if (_DAT_02cf5840 <= iVar5) {
      return;
    }
  } while( true );
}
