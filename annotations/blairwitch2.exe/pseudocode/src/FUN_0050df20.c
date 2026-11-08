// Name: FUN_0050df20
// Address: 0050df20
// Address Range: [[0050df20, 0050e011]]
// Convention: unknown
// Signature: void FUN_0050df20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4,char *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050df20(uint param_1,uint *param_2,uint param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (399 < _DAT_01d34e4c) {
    _DAT_01d34e4c = _DAT_01d34e4c + -1;
    FUN_005ba1f0(0x1d34e50,0x1d34f70,_DAT_01d34e4c * 0x120);
  }
  iVar2 = _DAT_01d34e4c * 0x120;
  *(uint *)(iVar2 + 0x1d34e50) = *param_2;
  *(uint *)(iVar2 + 0x1d34e54 + (uint)bVar5 * -8) = param_2[(uint)bVar5 * -2 + 1];
  *(uint *)(iVar2 + 0x1d34e58) = param_3;
  pcVar3 = (char *)(iVar2 + 0x1d34e5c);
  do {
    cVar1 = *param_4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(_DAT_01d34e4c * 0x120 + 0x1d34e70);
  pcVar3 = param_5;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  _DAT_01d34e4c = _DAT_01d34e4c + 1;
  FUN_004b31a0(0x01CB6900,param_5,0x40a00000);
  return;
}
