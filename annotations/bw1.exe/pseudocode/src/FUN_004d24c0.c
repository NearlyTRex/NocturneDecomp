// Name: FUN_004d24c0
// Address: 004d24c0
// Address Range: [[004d24c0, 004d2532]]
// Convention: unknown
// Signature: undefined4 FUN_004d24c0(char *param_1)

#include "nocturne.h"

uint FUN_004d24c0(char *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  for (iVar5 = ~uVar4 - 1; 0 < iVar5; iVar5 = iVar5 + -1) {
    bVar2 = *(byte *)(iVar5 + 0x1cd0c67);
    uVar3 = FUN_005c12b0(*param_1);
    if (bVar2 == uVar3) {
      iVar6 = iVar6 + 1;
    }
    param_1 = param_1 + 1;
  }
  if (iVar6 == ~uVar4 - 1) {
    DAT_01cd0c68 = 0;
    return 1;
  }
  return 0;
}
