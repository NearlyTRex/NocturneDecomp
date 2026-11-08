// Name: FUN_0040aed0
// Address: 0040aed0
// Address Range: [[0040aed0, 0040b089]]
// Convention: unknown
// Signature: void FUN_0040aed0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aed0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte local_dc [100];
  char local_78 [100];
  uint local_14;
  
  uVar4 = FUN_00408830(param_1);
  local_dc[0] = 0;
  local_78[0] = '\0';
  FUN_005c04b0(param_2," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar5 = FUN_005c04e0(uVar4,local_dc);
  if (iVar5 != 0) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0x80e;
    FUN_005030e0("Start of actor file tag mismatch for class %s",uVar4);
  }
  pcVar6 = local_78;
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar3 = DAT_007c303c;
  uVar2 = DAT_007c3038;
  local_14 = DAT_007c3034;
  DAT_007c3034 = param_2;
  DAT_007c3038 = 1;
  DAT_007c303c = param_1;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xd4))(param_1);
  local_dc[0] = 0;
  local_78[0] = '\0';
  FUN_005c04b0(param_2," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar5 = FUN_005c04e0(uVar4,local_dc);
  if ((iVar5 != 0) || (iVar5 = FUN_005c04e0(param_1,local_78), iVar5 != 0)) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0x82b;
    FUN_005030e0("End of actor file tag mismatch for class %s name \"%s\"",uVar4,param_1);
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0x830;
    FUN_005030e0("IO Error after reading %s \"%s\"",uVar4,param_1);
  }
  DAT_007c303c = (char *)uVar3;
  DAT_007c3038 = uVar2;
  DAT_007c3034 = local_14;
  return;
}
