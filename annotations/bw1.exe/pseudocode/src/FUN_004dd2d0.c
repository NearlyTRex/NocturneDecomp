// Name: FUN_004dd2d0
// Address: 004dd2d0
// Address Range: [[004dd2d0, 004dd375]]
// Convention: unknown
// Signature: void FUN_004dd2d0(int param_1)

#include "nocturne.h"

void FUN_004dd2d0(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b870(param_1 + 0x158,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b670(param_1 + 0xc298,"stoneRed");
  FUN_0040b670(param_1 + 0xc29c,"stoneGreen");
  FUN_0040b670(param_1 + 0xc2a0,"stoneBlue");
  FUN_0040b6f0(param_1 + 0xc2a4,"homeBase");
  return;
}
