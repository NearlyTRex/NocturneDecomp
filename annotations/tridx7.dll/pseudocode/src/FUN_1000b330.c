// Name: FUN_1000b330
// Address: 1000b330
// Address Range: [[1000b330, 1000b37d]]
// Convention: unknown
// Signature: void FUN_1000b330(char *param_1,int param_2)

#include "nocturne.h"

void FUN_1000b330(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar5 = 0;
  puVar6 = (uint *)&stack0x0000000c;
  if (0 < param_2) {
    do {
      pcVar7 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      uVar2 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      iVar3 = -1;
      pcVar7 = param_1;
      do {
        pcVar8 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      pcVar7 = pcVar9 + -uVar2;
      pcVar9 = pcVar8 + -1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar9 = *(uint *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    } while (iVar5 < param_2);
  }
  return;
}
