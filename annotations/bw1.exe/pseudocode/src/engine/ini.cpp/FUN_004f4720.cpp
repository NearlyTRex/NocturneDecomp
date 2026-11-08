// Name: FUN_004f4720
// Address: 004f4720
// Address Range: [[004f4720, 004f49e9]]
// Convention: unknown
// Signature: undefined4 FUN_004f4720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f4720(int *param_1,uint param_2,uint param_3,uint param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_314 [254];
  char acStack_216 [258];
  byte local_114 [256];
  int local_14;
  
  bVar8 = 0;
  local_14 = 0;
  iVar2 = FUN_004f4550(param_1,param_2,param_3,param_5,param_4);
  if (*param_1 == 0) {
    return 1;
  }
  iVar3 = FUN_005c157c(param_5,"rt");
  if (iVar3 == 0) {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 0x18b;
    FUN_005030e0("cIni::writeProfileString: Unable to open input");
  }
  pcVar7 = acStack_216;
  pcVar6 = param_5;
  do {
    pcVar7 = pcVar7 + 2;
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar7 = param_5;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  acStack_216[~uVar5] = 'x';
  iVar4 = FUN_005c157c(acStack_216 + 2,"wt");
  if (iVar4 == 0) {
    _DAT_01d1d400 = "..\\engine\\ini.cpp";
    _DAT_01d1d404 = 399;
    FUN_005030e0("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    FUN_005bfb40(local_114,"[%s]\n",param_2);
    bVar8 = *(byte *)(iVar3 + 0xc);
    while (((bVar8 & 0x10) == 0 && (iVar2 = FUN_005c1180(local_314,0xff,iVar3), iVar2 != 0))) {
      FUN_005c03c0(iVar4,local_314);
      iVar2 = FUN_005c0f80(local_114,local_314);
      if (iVar2 == 0) {
        FUN_005c03c0(iVar4,"%s=%s\n",param_3,param_4);
        local_14 = 1;
      }
      bVar8 = *(byte *)(iVar3 + 0xc);
    }
    if (local_14 == 0) {
      FUN_005c03c0(iVar4,local_114);
      FUN_005c03c0(iVar4,"%s=%s\n",param_3,param_4);
    }
  }
  else {
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      FUN_005c1180(local_314,0xff,iVar3);
      FUN_005c03c0(iVar4,local_314);
    }
    FUN_005c03c0(iVar4,"%s=%s\n",param_3,param_4);
    FUN_005c1180(local_314,0xff,iVar3);
    bVar8 = *(byte *)(iVar3 + 0xc);
    while (((bVar8 & 0x10) == 0 && (iVar2 = FUN_005c1180(local_314,0xff,iVar3), iVar2 != 0))) {
      FUN_005c03c0(iVar4,local_314);
      bVar8 = *(byte *)(iVar3 + 0xc);
    }
  }
  FUN_005c0d10(iVar3);
  FUN_005c0d10(iVar4);
  FUN_005c25c0(param_5);
  FUN_005c30b0(acStack_216 + 2,param_5);
  return 1;
}
