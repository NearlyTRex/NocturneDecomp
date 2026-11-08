// Name: FUN_0040aff0
// Address: 0040aff0
// Address Range: [[0040aff0, 0040b101]]
// Convention: unknown
// Signature: void FUN_0040aff0(char *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040aff0(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0040c870();
  uVar4 = FUN_00408870(param_1);
  if (*param_1 == '\0') {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x7e9;
    FUN_004e4330("CDemonActor::save - tried to save actor of class %s with no name",uVar4);
  }
  FUN_005a3140(param_2,"%s{ %s \"%s\"\n",&DAT_005f0990,uVar4,param_1);
  uVar3 = DAT_007df9bc;
  uVar2 = DAT_007df9b8;
  uVar1 = DAT_007df9b4;
  DAT_007df9b4 = param_2;
  DAT_007df9bc = param_1;
  DAT_007df9b8 = 2;
  FUN_0040afa0(1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xd4))(param_1);
  FUN_0040afa0(0xffffffff);
  FUN_005a3140(param_2,"%s} %s \"%s\"\n",&DAT_005f0990,uVar4,param_1);
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x80b;
    FUN_004e4330("IO Error after writing actor of type %s",uVar4);
  }
  DAT_007df9b4 = uVar1;
  DAT_007df9bc = (char *)uVar3;
  DAT_007df9b8 = uVar2;
  return;
}
