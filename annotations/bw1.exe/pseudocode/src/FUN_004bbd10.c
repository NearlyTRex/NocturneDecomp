// Name: FUN_004bbd10
// Address: 004bbd10
// Address Range: [[004bbd10, 004bbf0e]]
// Convention: unknown
// Signature: undefined4 FUN_004bbd10(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004bbd10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar6 = _DAT_01cc4268;
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
    iVar6 = FUN_004bb290(param_2,"<image box 32 32>");
    if (iVar6 == 0) {
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0x140) == 4) &&
          (iVar6 = FUN_004bb290(param_2,"<image check 32 32>"), iVar6 == 0)) {
    return 0;
  }
  if ((-1 < *(int *)(param_1 + 0x158)) &&
     (iVar6 = FUN_004bca60(&DAT_01cc55d0 + *(int *)(param_1 + 0x158) * 0x970,param_2), iVar6 == 0))
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
    iVar7 = 0;
    pcVar3 = (char *)FUN_004998a0((int *)(param_1 + 0x148),local_14,iVar2);
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      if (iVar6 != *(int *)(param_2 + 0x10)) {
        if (*(char *)(param_1 + 0x40) != '\0') {
          iVar4 = FUN_004bb290(param_2,&DAT_005dfb63);
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = FUN_004bb290(param_2,iVar2);
          if (iVar4 == 0) {
            return 0;
          }
          if (iVar6 != -1) {
            uVar5 = FUN_00531090("(cont.)");
            iVar6 = FUN_004bb290(param_2,uVar5);
            if (iVar6 == 0) {
              return 0;
            }
          }
          iVar6 = FUN_004bb290(param_2,"</ul><br>");
          if (iVar6 == 0) {
            return 0;
          }
        }
        iVar6 = *(int *)(param_2 + 0x10);
      }
      iVar4 = FUN_004bb2f0(param_2,pcVar3);
      if (iVar4 < 0) {
        return 0;
      }
      if (iVar4 < 1) {
        iVar7 = iVar7 + 1;
        if (1 < iVar7) {
          FUN_004bb290(param_2,"ERROR: item won't fit<br>");
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
