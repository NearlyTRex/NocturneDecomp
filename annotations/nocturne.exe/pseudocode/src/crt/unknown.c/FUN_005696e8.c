// Name: crt_unknown.c_FUN_005696e8
// Address: 005696e8
// Address Range: [[005696e8, 0056974a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005696e8(int param_1,char *param_2,int param_3)

#include "nocturne.h"

void FUN_005696e8(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  IntegerToString(param_1,param_2,0x10);
  uVar4 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar2 != '\0');
  iVar3 = param_3 + -1;
  if (~uVar4 - 1 != 0) {
    pcVar5 = param_2 + (~uVar4 - 1);
    pcVar6 = param_2 + iVar3;
    do {
      pcVar1 = pcVar5 + -1;
      pcVar5 = pcVar5 + -1;
      iVar3 = iVar3 + -1;
      *pcVar6 = *pcVar1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar5 != param_2);
  }
  pcVar5 = param_2 + iVar3;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    *pcVar5 = '0';
    pcVar5 = pcVar5 + -1;
  }
  param_2[param_3] = '\0';
  return;
}
