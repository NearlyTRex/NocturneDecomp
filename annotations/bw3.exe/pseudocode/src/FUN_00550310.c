// Name: FUN_00550310
// Address: 00550310
// Address Range: [[00550310, 005503b9]]
// Convention: unknown
// Signature: void FUN_00550310(undefined4 param_1)

#include "nocturne.h"

void FUN_00550310(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar6 = 0x280305c;
  iVar5 = 0;
  iVar4 = 0;
  iVar8 = 0;
  do {
    iVar1 = iVar4 * 0x1ec9c;
    iVar2 = FUN_00548210(iVar6);
    iVar5 = iVar5 + iVar2;
    if (*(char *)(iVar1 + 0x2820e84) != '\0') {
      iVar8 = iVar8 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0x1ec9c;
  } while (iVar4 < 0x28);
  iVar2 = 0;
  iVar4 = 0;
  pcVar7 = &DAT_0272e50c;
  iVar6 = 0;
  do {
    iVar3 = FUN_0054bea0(iVar2 * 0x3600 + 0x272af5c,iVar1,iVar6,iVar4);
    iVar4 = iVar4 + iVar3;
    if (*pcVar7 != '\0') {
      iVar6 = iVar6 + 1;
    }
    iVar2 = iVar2 + 1;
    pcVar7 = pcVar7 + 0x3600;
  } while (iVar2 < 0x40);
  FUN_005a28c0(param_1,"%d skeletons, %d bytes, %d models, %d bytes",iVar8,iVar5,iVar6,iVar4);
  return;
}
