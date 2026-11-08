// Name: FUN_0040b0a0
// Address: 0040b0a0
// Address Range: [[0040b0a0, 0040b1b1]]
// Convention: unknown
// Signature: void FUN_0040b0a0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b0a0(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0040c920();
  uVar4 = FUN_00408a50(param_1);
  if (*param_1 == '\0') {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x7ea;
    FUN_004e4500("CDemonActor::save - tried to save actor of class %s with no name",uVar4);
  }
  FUN_005b8010(param_2,"%s{ %s \"%s\"\n",&DAT_00609590,uVar4,param_1);
  uVar3 = DAT_007bc03c;
  uVar2 = DAT_007bc038;
  uVar1 = DAT_007bc034;
  DAT_007bc034 = param_2;
  DAT_007bc03c = param_1;
  DAT_007bc038 = 2;
  FUN_0040b050(1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xdc))(param_1);
  FUN_0040b050(0xffffffff);
  FUN_005b8010(param_2,"%s} %s \"%s\"\n",&DAT_00609590,uVar4,param_1);
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x80c;
    FUN_004e4500("IO Error after writing actor of type %s",uVar4);
  }
  DAT_007bc034 = uVar1;
  DAT_007bc03c = (char *)uVar3;
  DAT_007bc038 = uVar2;
  return;
}
