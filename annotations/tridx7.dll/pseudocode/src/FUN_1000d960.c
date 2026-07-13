// Name: FUN_1000d960
// Address: 1000d960
// Address Range: [[1000d960, 1000da52]]
// Convention: unknown
// Signature: uint FUN_1000d960(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_1000d960(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_c;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  uVar2 = FUN_1000f6e0(0,param_1,0x23,&local_4);
  uVar3 = FUN_1000f6e0(0,param_1,0x25,&local_8);
  uVar4 = FUN_1000f6e0(1,param_1,0x1e,&local_c);
  uVar4 = uVar2 | uVar3 | uVar4;
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar5 = (byte *)FUN_10008830(0xd);
  *(byte **)(param_2 + 0xa8) = puVar5;
  if (local_4 == 0) {
    *puVar5 = 0x68;
    pcVar7 = puVar5 + 1;
    if (local_8 == 0) goto LAB_1000d9fb;
    *pcVar7 = 'h';
  }
  else {
    *puVar5 = 0x48;
    pcVar7 = puVar5 + 1;
    if (local_8 == 0) goto LAB_1000d9fb;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar5 + 2;
LAB_1000d9fb:
  cVar1 = *local_c;
  pcVar6 = local_c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar6;
  }
  *pcVar7 = 'm';
  pcVar6 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar6 = 'm';
    pcVar6 = pcVar7 + 2;
  }
  cVar1 = *local_c;
  pcVar7 = local_c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar7;
  }
  *pcVar6 = 's';
  pcVar6[1] = 's';
  pcVar6[2] = '\0';
  FUN_10005b30(local_c);
  return 0;
}
