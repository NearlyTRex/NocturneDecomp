// Name: FUN_0045cdf0
// Address: 0045cdf0
// Address Range: [[0045cdf0, 0045ceb4]]
// Convention: unknown
// Signature: void FUN_0045cdf0(int param_1)

#include "nocturne.h"

void FUN_0045cdf0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  pcVar4 = &DAT_005d82cd;
  pcVar5 = &DAT_0152c320;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(param_1 + 0xc36c);
  iVar3 = -1;
  pcVar5 = &DAT_0152c320;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar3 = FUN_0040cd00(0x3f000000);
  if (iVar3 == 0) {
    pcVar4 = &DAT_005d82e3;
  }
  else {
    pcVar4 = "_chase?.wav @ 2";
  }
  iVar3 = -1;
  pcVar5 = &DAT_0152c320;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar3 = FUN_005735a0(*(uint *)(param_1 + 50000));
  if (iVar3 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,&DAT_0152c320);
  *(uint *)(param_1 + 50000) = uVar2;
  return;
}
