// Name: FUN_0040b1c0
// Address: 0040b1c0
// Address Range: [[0040b1c0, 0040b379]]
// Convention: unknown
// Signature: void FUN_0040b1c0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b1c0(char *param_1,int param_2)

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
  
  uVar4 = FUN_00408a50(param_1);
  local_dc[0] = 0;
  local_78[0] = '\0';
  FUN_005b8100(param_2," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar5 = FUN_005b8130(uVar4,local_dc);
  if (iVar5 != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x829;
    FUN_004e4500("Start of actor file tag mismatch for class %s",uVar4);
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
  uVar3 = DAT_007bc03c;
  uVar2 = DAT_007bc038;
  local_14 = DAT_007bc034;
  DAT_007bc034 = param_2;
  DAT_007bc038 = 1;
  DAT_007bc03c = param_1;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xdc))(param_1);
  local_dc[0] = 0;
  local_78[0] = '\0';
  FUN_005b8100(param_2," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar5 = FUN_005b8130(uVar4,local_dc);
  if ((iVar5 != 0) || (iVar5 = FUN_005b8130(param_1,local_78), iVar5 != 0)) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x846;
    FUN_004e4500("End of actor file tag mismatch for class %s name \"%s\"",uVar4,param_1);
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x84b;
    FUN_004e4500("IO Error after reading %s \"%s\"",uVar4,param_1);
  }
  DAT_007bc03c = (char *)uVar3;
  DAT_007bc038 = uVar2;
  DAT_007bc034 = local_14;
  return;
}
