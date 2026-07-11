// Name: FUN_0040c040
// Address: 0040c040
// Address Range: [[0040c040, 0040c151]]
// Convention: unknown
// Signature: void FUN_0040c040(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040c040(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0040d8c0();
  uVar4 = FUN_00409fa0(param_1);
  if (*param_1 == '\0') {
    _DAT_01cc4800 = "G..\\core\\actor.cpp" + 1;
    _DAT_01cc4804 = 0x787;
    FUN_004c8440("CDemonActor::save - tried to save actor of class %s with no name",uVar4);
  }
  FUN_005644f0(param_2,"%s{ %s \"%s\"\n",&DAT_005acc90,uVar4,param_1);
  uVar3 = DAT_00763e8c;
  uVar2 = DAT_00763e88;
  uVar1 = DAT_00763e84;
  DAT_00763e84 = param_2;
  DAT_00763e8c = param_1;
  DAT_00763e88 = 2;
  FUN_0040bff0(1);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xcc))(param_1);
  FUN_0040bff0(0xffffffff);
  FUN_005644f0(param_2,"%s} %s \"%s\"\n",&DAT_005acc90,uVar4,param_1);
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01cc4800 = "..\\core\\actor.cpp";
    _DAT_01cc4804 = 0x7a9;
    FUN_004c8440("IO Error after writing actor of type %s",uVar4);
  }
  DAT_00763e84 = uVar1;
  DAT_00763e8c = (char *)uVar3;
  DAT_00763e88 = uVar2;
  return;
}
