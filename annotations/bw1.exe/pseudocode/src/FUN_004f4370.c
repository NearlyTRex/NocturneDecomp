// Name: FUN_004f4370
// Address: 004f4370
// Address Range: [[004f4370, 004f454e]]
// Convention: unknown
// Signature: undefined4 FUN_004f4370(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,int param_6,undefined4 param_7)

#include "nocturne.h"

uint FUN_004f4370(uint param_1,uint param_2,uint param_3,char *param_4,char *param_5,int param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *unaff_EBP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_214 [256];
  byte local_114 [256];
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  iVar2 = FUN_005c157c(param_7,"rt");
  if (iVar2 != 0) {
    FUN_005bfb40(local_114,"[%s]\n",param_2);
    do {
      if (((*(byte *)(iVar2 + 0xc) & 0x10) != 0) ||
         (iVar3 = FUN_005c1180(local_214,0xff,iVar2), iVar3 == 0)) {
        if (local_14 == 0) goto LAB_004f4479;
        break;
      }
      iVar3 = FUN_005c0f80(local_214,local_114);
    } while (iVar3 != 0);
    local_14 = 0;
    do {
      pcVar6 = local_214;
      if (((*(byte *)(iVar2 + 0xc) & 0x10) != 0) ||
         (iVar3 = FUN_005c1180(local_214,0xff,iVar2), iVar3 == 0)) goto LAB_004f4479;
      do {
        unaff_EBP = pcVar6;
        if (*pcVar6 == '=') goto LAB_004f4453;
        if (*pcVar6 == '\0') break;
        unaff_EBP = pcVar6 + 1;
        if (*unaff_EBP == '=') goto LAB_004f4453;
        pcVar6 = pcVar6 + 2;
      } while (*unaff_EBP != '\0');
      unaff_EBP = (char *)0x0;
LAB_004f4453:
      if (unaff_EBP != (char *)0x0) {
        *unaff_EBP = '\0';
      }
      iVar3 = FUN_005c0f80(local_214,param_3);
    } while (iVar3 != 0);
    local_14 = 1;
LAB_004f4479:
    FUN_005c0d10(iVar2);
  }
  if (local_14 != 0) {
    pcVar5 = unaff_EBP + 1;
    uVar4 = 0xffffffff;
    pcVar6 = pcVar5;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar5[~uVar4 - 2] = '\0';
    FUN_005bfb70(param_5,0,param_6);
    FUN_005c20d0(param_5,pcVar5,param_6 + -1);
    return 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = param_4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (param_6 <= (int)(~uVar4 - 1)) {
    return 0;
  }
  do {
    cVar1 = *param_4;
    *param_5 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    param_5[1] = cVar1;
    param_5 = param_5 + 2;
  } while (cVar1 != '\0');
  return 1;
}
