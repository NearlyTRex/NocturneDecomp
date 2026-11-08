// Name: FUN_004a7a70
// Address: 004a7a70
// Address Range: [[004a7a70, 004a7ba6]]
// Convention: unknown
// Signature: void FUN_004a7a70(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7a70(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  _DAT_01d1a058 = 1;
  iVar2 = FUN_005a3d00(param_1,&DAT_01d19f90);
  if (iVar2 == 0) {
    if (-1 < DAT_005fe3a8) {
      return;
    }
  }
  else {
    pcVar5 = &DAT_01d19f90;
    _DAT_01d19f78 = 0;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    DAT_005fe3a8 = -1;
  }
  _DAT_01d19f78 = _DAT_01d19f78 + _DAT_01c5fad0;
  if (_DAT_01d19f78 < 0x10000) {
    return;
  }
  iVar2 = FUN_004b2a80(_DAT_01549aa4,param_1);
  iVar3 = FUN_004b2b30(_DAT_01549aa4,param_1);
  _DAT_01d19f7c = _DAT_01c5fae0 + 0x40;
  _DAT_01d19f80 = _DAT_01c5fadc + iVar2 + 8;
  _DAT_01d19f84 = _DAT_01d19f7c + iVar3 + 6;
  DAT_005fe3a8 = _DAT_01c5fadc;
  if (DAT_005fba18 < _DAT_01d19f80) {
    DAT_005fe3a8 = DAT_005fba18 - (iVar2 + 8);
    _DAT_01d19f80 = DAT_005fba18;
  }
  if (DAT_005fba1c < _DAT_01d19f84) {
    _DAT_01d19f84 = _DAT_01c5fae0 + -0x14;
    _DAT_01d19f7c = _DAT_01d19f84 - (iVar3 + 6);
  }
  _DAT_01d19f88 = ((DAT_005fe3a8 + _DAT_01d19f80) - iVar2) / 2;
  _DAT_01d19f8c = ((_DAT_01d19f7c + _DAT_01d19f84) - iVar3) / 2;
  return;
}
