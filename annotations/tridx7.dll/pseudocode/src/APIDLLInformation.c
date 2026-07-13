// Name: APIDLLInformation
// Address: 100019a0
// Address Range: [[100019a0, 10001a75]]
// Convention: unknown
// Signature: void APIDLLInformation(void)

#include "nocturne.h"

void APIDLLInformation(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  HINSTANCE in_stack_00001ecc;
  uint *in_stack_00001ed0;
  
                    /* 0x19a0  2  APIDLLInformation */
  bVar8 = 0;
  FUN_10005600();
  puVar6 = (uint *)&stack0x00000100;
  for (iVar2 = 0x772; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar5 = "Terminal Reality Inc.";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = &stack0x00000200;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar7 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  LoadStringA(in_stack_00001ecc,1,&stack0x00000000,0x100);
  uVar3 = 0xffffffff;
  pcVar5 = (char *)register0x00000010;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = &stack0x00000100;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar7 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  puVar6 = (uint *)&stack0x00000100;
  for (iVar2 = 0x772; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_stack_00001ed0 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    in_stack_00001ed0 = in_stack_00001ed0 + (uint)bVar8 * -2 + 1;
  }
  return;
}
