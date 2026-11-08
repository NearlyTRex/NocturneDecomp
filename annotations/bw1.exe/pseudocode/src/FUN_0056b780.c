// Name: FUN_0056b780
// Address: 0056b780
// Address Range: [[0056b780, 0056b829]]
// Convention: unknown
// Signature: void FUN_0056b780(undefined4 param_1)

#include "nocturne.h"

void FUN_0056b780(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar6 = 0x27903bc;
  iVar5 = 0;
  iVar4 = 0;
  iVar8 = 0;
  do {
    iVar1 = iVar4 * 0x1ec9c;
    iVar2 = FUN_00563670(iVar6);
    iVar5 = iVar5 + iVar2;
    if (*(char *)(iVar1 + 0x27ae1e4) != '\0') {
      iVar8 = iVar8 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0x1ec9c;
  } while (iVar4 < 0x28);
  iVar2 = 0;
  iVar4 = 0;
  pcVar7 = &DAT_026bb86c;
  iVar6 = 0;
  do {
    iVar3 = FUN_00567310(iVar2 * 0x3600 + 0x26b82bc,iVar1,iVar6,iVar4);
    iVar4 = iVar4 + iVar3;
    if (*pcVar7 != '\0') {
      iVar6 = iVar6 + 1;
    }
    iVar2 = iVar2 + 1;
    pcVar7 = pcVar7 + 0x3600;
  } while (iVar2 < 0x40);
  FUN_005bfb40(param_1,"%d skeletons, %d bytes, %d models, %d bytes",iVar8,iVar5,iVar6,iVar4);
  return;
}
