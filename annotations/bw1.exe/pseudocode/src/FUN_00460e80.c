// Name: FUN_00460e80
// Address: 00460e80
// Address Range: [[00460e80, 00460f83]]
// Convention: unknown
// Signature: void FUN_00460e80(int param_1)

#include "nocturne.h"

void FUN_00460e80(int param_1)

{
  int iVar1;
  
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"speed");
  iVar1 = param_1 + 0x158;
  FUN_0040b7f0(iVar1,"modelName");
  FUN_0040b870(iVar1,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b670(param_1 + 0xc2d0,"numSacksBlown");
  FUN_0040b670(param_1 + 0xc2d4,"numSacksToBlow");
  FUN_0040b5f0(param_1 + 0xc2d8,"Sack0Damage");
  FUN_0040b5f0(param_1 + 0xc2dc,"Sack1Damage");
  FUN_0040b5f0(param_1 + 0xc2e0,"Sack2Damage");
  FUN_0040b5f0(param_1 + 0xc2e4,"Sack3Damage");
  FUN_0040b5f0(param_1 + 0xc2e8,"Sack4Damage");
  FUN_0040b5f0(param_1 + 0xc2ec,"Sack5Damage");
  FUN_0040b960(iVar1,"partStatus");
  return;
}
