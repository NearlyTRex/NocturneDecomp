// Name: engine_font.cpp_FUN_004b2c10
// Address: 004b2c10
// Address Range: [[004b2c10, 004b2e30]]
// Convention: unknown
// Signature: undefined4 engine_font_cpp_FUN_004b2c10(CBitFont *param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)

#include "nocturne.h"

uint engine_font_cpp_FUN_004b2c10(CBitFont *param_1,char *param_2,char *param_3,int param_4,int param_5,byte param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_20;
  int local_1c;
  uint local_18;
  
  iVar5 = 0;
  iVar8 = 0;
  if ((param_6 & 0x40) == 0) {
    *param_3 = '\0';
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar8 = ~uVar4 - 1;
  }
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_005c20be;
  }
  pcVar7 = param_2;
  if ((param_6 & 1) != 0) {
    for (; (((&DAT_006074b8)[(byte)(*pcVar7 + 1)] & 2) != 0 &&
           (((param_6 & 8) == 0 || (*pcVar7 != '\n')))); pcVar7 = pcVar7 + 1) {
      iVar5 = iVar5 + 1;
    }
  }
  local_18 = 0;
  pcVar7 = param_3 + iVar8;
  iVar3 = iVar5;
  iVar2 = iVar8;
LAB_004b2c81:
  while( true ) {
    do {
      local_1c = iVar2;
      local_20 = iVar3;
      iVar6 = iVar5;
      cVar1 = param_2[iVar6];
      if (cVar1 == '\0') goto LAB_004b2c93;
      iVar5 = iVar6 + 1;
      iVar3 = iVar5;
      iVar2 = iVar8;
    } while (cVar1 == '\r');
    if (cVar1 != '\n') break;
    if ((param_6 & 8) != 0) {
      local_18 = 3;
      iVar6 = iVar5;
LAB_004b2c93:
      if ((param_6 & 2) != 0) {
        pcVar7 = param_3 + iVar8;
        while ((0 < iVar8 && (((&DAT_006074b8)[(byte)(pcVar7[-1] + 1)] & 2) != 0))) {
          iVar8 = iVar8 + -1;
          pcVar7 = pcVar7 + -1;
        }
      }
      param_3[iVar8] = '\0';
      if ((param_6 & 4) != 0) {
        for (param_2 = param_2 + iVar6;
            (((&DAT_006074b8)[(byte)(*param_2 + 1)] & 2) != 0 &&
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
  if (iVar8 < param_4 + -1) {
    pcVar7[1] = '\0';
    *pcVar7 = cVar1;
    iVar3 = engine_font_cpp_FUN_004b2a80(param_1,param_3);
    if (iVar3 <= param_5) {
      iVar8 = iVar8 + 1;
      pcVar7 = pcVar7 + 1;
      iVar3 = local_20;
      iVar2 = local_1c;
      if (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 2) != 0) {
        iVar3 = iVar5;
        iVar2 = iVar8;
      }
      goto LAB_004b2c81;
    }
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  if (((((&DAT_006074b8)[(byte)(cVar1 + 1)] & 2) == 0) && ((param_6 & 0x10) == 0)) &&
     (((param_6 & 0x20) == 0 || (local_1c != 0)))) {
    iVar6 = local_20;
    iVar8 = local_1c;
  }
  goto LAB_004b2c93;
}
