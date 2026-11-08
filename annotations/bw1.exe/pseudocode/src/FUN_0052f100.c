// Name: FUN_0052f100
// Address: 0052f100
// Address Range: [[0052f100, 0052f1f1]]
// Convention: unknown
// Signature: void FUN_0052f100(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4,char *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052f100(uint param_1,uint *param_2,uint param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (399 < _DAT_01d51db4) {
    _DAT_01d51db4 = _DAT_01d51db4 + -1;
    FUN_005c25d0(0x1d51db8,0x1d51ed8,_DAT_01d51db4 * 0x120);
  }
  iVar2 = _DAT_01d51db4 * 0x120;
  *(uint *)(iVar2 + 0x1d51db8) = *param_2;
  *(uint *)(iVar2 + 0x1d51dbc + (uint)bVar5 * -8) = param_2[(uint)bVar5 * -2 + 1];
  *(uint *)(iVar2 + 0x1d51dc0) = param_3;
  pcVar3 = (char *)(iVar2 + 0x1d51dc4);
  do {
    cVar1 = *param_4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(_DAT_01d51db4 * 0x120 + 0x1d51dd8);
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
  _DAT_01d51db4 = _DAT_01d51db4 + 1;
  FUN_004cc190(0x01CCF390,param_5,0x40a00000);
  return;
}
