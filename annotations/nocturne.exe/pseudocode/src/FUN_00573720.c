// Name: FUN_00573720
// Address: 00573720
// Address Range: [[00573720, 0057388d]]
// Convention: unknown
// Signature: undefined * FUN_00573720(char *param_1,undefined4 *param_2,int param_3,int param_4)

#include "nocturne.h"

byte * FUN_00573720(char *param_1,uint *param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *puVar6;
  byte *puVar7;
  
  pcVar4 = param_1;
  if (param_2 != (uint *)0x0) {
    *param_2 = param_1;
  }
  while (((&DAT_005c168c)[(byte)(*pcVar4 + 1)] & 2) != 0) {
    pcVar4 = pcVar4 + 1;
  }
  cVar1 = *pcVar4;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    pcVar4 = pcVar4 + 1;
  }
  if (param_3 == 0) {
    if ((*pcVar4 != '0') || ((pcVar4[1] != 'x' && (pcVar4[1] != 'X')))) {
      if (*pcVar4 == '0') {
        param_3 = 8;
      }
      else {
        param_3 = 10;
      }
      goto LAB_005737c4;
    }
    param_3 = 0x10;
  }
  else {
    if ((param_3 < 2) || (0x24 < param_3)) {
      FUN_00568e80(0xd);
      return (byte *)0x0;
    }
    if (param_3 != 0x10) goto LAB_005737c4;
  }
  if ((*pcVar4 == '0') && ((pcVar4[1] == 'x' || (pcVar4[1] == 'X')))) {
    pcVar4 = pcVar4 + 2;
  }
LAB_005737c4:
  bVar2 = false;
  pcVar5 = pcVar4;
  puVar7 = (byte *)0x0;
  while (iVar3 = FUN_005738c8(*pcVar5), iVar3 < param_3) {
    if ((&PTR_FUN_005c216c)[param_3] < puVar7) {
      bVar2 = true;
    }
    puVar6 = (byte *)((int)puVar7 * param_3 + iVar3);
    if (puVar6 < puVar7) {
      bVar2 = true;
    }
    pcVar5 = pcVar5 + 1;
    puVar7 = puVar6;
  }
  if (pcVar5 == pcVar4) {
    pcVar5 = param_1;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = pcVar5;
  }
  if ((((param_4 != 1) || (puVar7 < (byte *)0x80000000)) ||
      ((puVar7 == (byte *)0x80000000 && (cVar1 == '-')))) && (!bVar2)) {
    if (cVar1 == '-') {
      puVar7 = (byte *)-(int)puVar7;
    }
    return puVar7;
  }
  FUN_00568e80(0xe);
  if (param_4 == 0) {
    return (byte *)0xffffffff;
  }
  if (cVar1 == '-') {
    return (byte *)0x80000000;
  }
  return (byte *)0x7fffffff;
}
