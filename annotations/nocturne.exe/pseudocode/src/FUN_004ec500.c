// Name: FUN_004ec500
// Address: 004ec500
// Address Range: [[004ec500, 004ec5f1]]
// Convention: unknown
// Signature: void FUN_004ec500(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4,char *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ec500(uint param_1,uint *param_2,uint param_3,char *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (399 < _DAT_01cea40c) {
    _DAT_01cea40c = _DAT_01cea40c + -1;
    FUN_00566170(0x1cea410,0x1cea530,_DAT_01cea40c * 0x120);
  }
  iVar2 = _DAT_01cea40c * 0x120;
  *(uint *)(iVar2 + 0x1cea410) = *param_2;
  *(uint *)(iVar2 + 0x1cea414 + (uint)bVar5 * -8) = param_2[(uint)bVar5 * -2 + 1];
  *(uint *)(iVar2 + 0x1cea418) = param_3;
  pcVar3 = (char *)(iVar2 + 0x1cea41c);
  do {
    cVar1 = *param_4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(_DAT_01cea40c * 0x120 + 0x1cea430);
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
  _DAT_01cea40c = _DAT_01cea40c + 1;
  FUN_0049aa30(0x01C775EC,param_5,0x40a00000);
  return;
}
