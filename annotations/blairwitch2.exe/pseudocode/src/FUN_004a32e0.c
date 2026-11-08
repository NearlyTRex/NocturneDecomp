// Name: FUN_004a32e0
// Address: 004a32e0
// Address Range: [[004a32e0, 004a3514]]
// Convention: unknown
// Signature: undefined4 FUN_004a32e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a32e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = _DAT_01cab7e8;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_2 + 0x10);
  if ((iVar9 != 0) ||
     (((iVar9 = *(int *)(param_1 + 0x140), iVar9 != 0 && (iVar9 != 2)) && (iVar9 != 5)))) {
    if (*(int *)(param_1 + 0x140) == 3) {
      iVar9 = FUN_004a28b0(param_2,"<image box 32 32>");
      if (iVar9 < 1) {
        return 0;
      }
    }
    else if ((*(int *)(param_1 + 0x140) == 4) &&
            (iVar9 = FUN_004a28b0(param_2,"<image check 32 32>"), iVar9 < 1)) {
      return 0;
    }
    if ((-1 < *(int *)(param_1 + 0x158)) &&
       (iVar9 = FUN_004a4070(*(int *)(param_1 + 0x158) * 0x970 + 0x1cacb50,param_2), iVar9 == 0)) {
      return 0;
    }
    iVar2 = param_1 + 0x40;
    iVar7 = -1;
    piVar3 = (int *)(param_1 + 0x148);
    iVar9 = 0;
LAB_004a3356:
    if (iVar9 < *piVar3) {
      iVar8 = 0;
      pcVar4 = (char *)FUN_00481240(piVar3,iVar9);
      cVar1 = *pcVar4;
      while (cVar1 != '\0') {
        if (iVar7 != *(int *)(param_2 + 0x10)) {
          if (*(char *)(param_1 + 0x40) != '\0') {
            iVar5 = FUN_004a28b0(param_2,&DAT_005d5ce8);
            if (iVar5 < 1) {
              return 0;
            }
            iVar5 = FUN_004a28b0(param_2,iVar2);
            if (iVar5 < 1) {
              return 0;
            }
            if (iVar7 != -1) {
              uVar6 = FUN_0050fe80("(cont.)");
              iVar7 = FUN_004a28b0(param_2,uVar6);
              if (iVar7 < 1) {
                return 0;
              }
            }
            iVar7 = FUN_004a28b0(param_2,"</ul><br>");
            if (iVar7 < 1) {
              return 0;
            }
          }
          iVar7 = *(int *)(param_2 + 0x10);
        }
        iVar5 = FUN_004a28b0(param_2,pcVar4);
        if (iVar5 < 0) {
          return 0;
        }
        if (iVar5 < 1) {
          iVar8 = iVar8 + 1;
          if (1 < iVar8) {
            FUN_004a28b0(param_2,"ERROR: item won't fit<br>");
            iVar9 = iVar9 + 1;
            goto LAB_004a3356;
          }
        }
        else {
          pcVar4 = pcVar4 + iVar5;
        }
        cVar1 = *pcVar4;
      }
      iVar9 = iVar9 + 1;
      goto LAB_004a3356;
    }
    iVar9 = FUN_004a28b0(param_2,&DAT_005d5d19,iVar9,piVar3,iVar2);
    if (iVar9 < 1) {
      return 0;
    }
    iVar9 = FUN_004a28b0(param_2,&DAT_005d5d1e);
    if (iVar9 < 1) {
      return 0;
    }
  }
  return 1;
}
