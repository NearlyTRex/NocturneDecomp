// Name: FUN_005490d0
// Address: 005490d0
// Address Range: [[005490d0, 00549179]]
// Convention: unknown
// Signature: void FUN_005490d0(undefined4 param_1)

#include "nocturne.h"

void FUN_005490d0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar6 = 0x21780f4;
  iVar5 = 0;
  iVar4 = 0;
  iVar8 = 0;
  do {
    iVar1 = iVar4 * 0x1e01c;
    iVar2 = FUN_00541000(iVar6);
    iVar5 = iVar5 + iVar2;
    if (*(char *)(iVar1 + 0x219529c) != '\0') {
      iVar8 = iVar8 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0x1e01c;
  } while (iVar4 < 0x28);
  iVar2 = 0;
  iVar4 = 0;
  pcVar7 = &DAT_020cfa64;
  iVar6 = 0;
  do {
    iVar3 = FUN_00544c70(iVar2 * 0x2ac0 + 0x20ccff4,iVar1,iVar6,iVar4);
    iVar4 = iVar4 + iVar3;
    if (*pcVar7 != '\0') {
      iVar6 = iVar6 + 1;
    }
    iVar2 = iVar2 + 1;
    pcVar7 = pcVar7 + 0x2ac0;
  } while (iVar2 < 0x40);
  FUN_005b7790(param_1,"%d skeletons, %d bytes, %d models, %d bytes",iVar8,iVar5,iVar6,iVar4);
  return;
}
