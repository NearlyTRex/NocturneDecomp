// Name: FUN_004a9950
// Address: 004a9950
// Address Range: [[004a9950, 004a9b64]]
// Convention: unknown
// Signature: undefined4 FUN_004a9950(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a9950(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar6 = _DAT_01d0d008;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_2 + 0x10);
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x140);
    if (iVar6 == 0) {
      return 1;
    }
    if (iVar6 == 2) {
      return 1;
    }
    if (iVar6 == 5) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x140) == 3) {
    iVar6 = FUN_004a8ed0(param_2,"<image box 32 32>");
    if (iVar6 == 0) {
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0x140) == 4) &&
          (iVar6 = FUN_004a8ed0(param_2,"<image check 32 32>"), iVar6 == 0)) {
    return 0;
  }
  if ((-1 < *(int *)(param_1 + 0x158)) &&
     (iVar6 = FUN_004aa6d0(&DAT_01d0e370 + *(int *)(param_1 + 0x158) * 0x126c,param_2), iVar6 == 0))
  {
    return 0;
  }
  iVar2 = param_1 + 0x40;
  iVar6 = -1;
  local_14 = 0;
  do {
    if (*(int *)(param_1 + 0x148) <= local_14) {
      return 1;
    }
    pcVar3 = (char *)FUN_00482440((int *)(param_1 + 0x148),local_14,iVar2);
    iVar7 = 0;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      if (iVar6 != *(int *)(param_2 + 0x10)) {
        if ((*(char *)(param_1 + 0x40) != '\0') && (*(char *)(param_1 + 0x40) != '*')) {
          iVar4 = FUN_004a8ed0(param_2,&DAT_005c1050);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_004a8ed0(param_2,iVar2);
          if (iVar4 == 0) {
            return 0;
          }
          if (iVar6 != -1) {
            uVar5 = FUN_00508960("(cont.)");
            iVar6 = FUN_004a8ed0(param_2,uVar5);
            if (iVar6 == 0) {
              return 0;
            }
          }
          iVar6 = FUN_004a8ed0(param_2,"</ul><br>");
          if (iVar6 == 0) {
            return 0;
          }
        }
        iVar6 = *(int *)(param_2 + 0x10);
      }
      iVar4 = FUN_004a8f30(param_2,pcVar3);
      if (iVar4 < 0) {
        return 0;
      }
      if (iVar4 < 1) {
        iVar7 = iVar7 + 1;
        if (1 < iVar7) {
          FUN_004a8ed0(param_2,"ERROR: item won't fit<br>");
          break;
        }
      }
      else {
        pcVar3 = pcVar3 + iVar4;
      }
      cVar1 = *pcVar3;
    }
    local_14 = local_14 + 1;
  } while( true );
}
