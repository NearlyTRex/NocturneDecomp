// Name: FUN_004ab090
// Address: 004ab090
// Address Range: [[004ab090, 004ab2ac]]
// Convention: unknown
// Signature: undefined4 FUN_004ab090(undefined4 param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)

#include "nocturne.h"

uint FUN_004ab090(uint param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int local_20;
  int local_1c;
  uint local_18;
  
  iVar5 = 0;
  iVar9 = 0;
  if ((param_6 & 0x40) == 0) {
    *param_3 = '\0';
  }
  else {
    uVar4 = 0xffffffff;
    pcVar8 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar9 = ~uVar4 - 1;
  }
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_005d6a27;
  }
  pcVar8 = param_2;
  if ((param_6 & 1) != 0) {
    for (; (((&DAT_0061ed94)[(byte)(*pcVar8 + 1)] & 2) != 0 &&
           (((param_6 & 8) == 0 || (*pcVar8 != '\n')))); pcVar8 = pcVar8 + 1) {
      iVar5 = iVar5 + 1;
    }
  }
  local_18 = 0;
  pcVar8 = param_3 + iVar9;
  iVar3 = iVar5;
  iVar2 = iVar9;
LAB_004ab101:
  while( true ) {
    do {
      local_1c = iVar2;
      local_20 = iVar3;
      iVar6 = iVar5;
      cVar1 = param_2[iVar6];
      if (cVar1 == '\0') goto LAB_004ab113;
      iVar5 = iVar6 + 1;
      iVar3 = iVar5;
      iVar2 = iVar9;
    } while (cVar1 == '\r');
    if (cVar1 != '\n') break;
    if ((param_6 & 8) != 0) {
      local_18 = 3;
      iVar6 = iVar5;
LAB_004ab113:
      if ((param_6 & 2) != 0) {
        pcVar8 = param_3 + iVar9;
        while ((0 < iVar9 && (((&DAT_0061ed94)[(byte)(pcVar8[-1] + 1)] & 2) != 0))) {
          iVar9 = iVar9 + -1;
          pcVar8 = pcVar8 + -1;
        }
      }
      param_3[iVar9] = '\0';
      if ((param_6 & 4) != 0) {
        for (param_2 = param_2 + iVar6;
            (((&DAT_0061ed94)[(byte)(*param_2 + 1)] & 2) != 0 &&
            (((param_6 & 8) == 0 || (*param_2 != '\n')))); param_2 = param_2 + 1) {
          iVar6 = iVar6 + 1;
        }
      }
      if (param_7 != (int *)0x0) {
        *param_7 = iVar6;
        return local_18;
      }
      return local_18;
    }
  }
  if (iVar9 < param_4 + -1) {
    *pcVar8 = '\0';
    iVar3 = FUN_004aaf00(param_1,param_3);
    if (iVar3 <= param_5) {
      pcVar7 = pcVar8 + 1;
      iVar9 = iVar9 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar7;
      iVar3 = local_20;
      iVar2 = local_1c;
      if (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 2) != 0) {
        iVar3 = iVar5;
        iVar2 = iVar9;
      }
      goto LAB_004ab101;
    }
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  if (((((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 2) == 0) && ((param_6 & 0x10) == 0)) &&
     (((param_6 & 0x20) == 0 || (local_1c != 0)))) {
    iVar6 = local_20;
    iVar9 = local_1c;
  }
  goto LAB_004ab113;
}
