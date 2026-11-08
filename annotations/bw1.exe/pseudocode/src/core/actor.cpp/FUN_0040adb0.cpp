// Name: FUN_0040adb0
// Address: 0040adb0
// Address Range: [[0040adb0, 0040aec1]]
// Convention: unknown
// Signature: void FUN_0040adb0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040adb0(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0040c630();
  uVar4 = FUN_00408830(param_1);
  if (*param_1 == '\0') {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 1999;
    FUN_005030e0("CDemonActor::save - tried to save actor of class %s with no name",uVar4);
  }
  FUN_005c03c0(param_2,"%s{ %s \"%s\"\n",&DAT_006106c0,uVar4,param_1);
  uVar3 = DAT_007c303c;
  uVar2 = DAT_007c3038;
  uVar1 = DAT_007c3034;
  DAT_007c3034 = param_2;
  DAT_007c303c = param_1;
  DAT_007c3038 = 2;
  FUN_0040ad60(1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xd4))(param_1);
  FUN_0040ad60(0xffffffff);
  FUN_005c03c0(param_2,"%s} %s \"%s\"\n",&DAT_006106c0,uVar4,param_1);
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0x7f1;
    FUN_005030e0("IO Error after writing actor of type %s",uVar4);
  }
  DAT_007c3034 = uVar1;
  DAT_007c303c = (char *)uVar3;
  DAT_007c3038 = uVar2;
  return;
}
