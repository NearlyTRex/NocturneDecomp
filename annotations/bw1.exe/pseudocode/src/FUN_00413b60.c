// Name: FUN_00413b60
// Address: 00413b60
// Address Range: [[00413b60, 00413c1a]]
// Convention: unknown
// Signature: void FUN_00413b60(int param_1)

#include "nocturne.h"

void FUN_00413b60(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b870(param_1 + 0x158,"motion state");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b440(param_1 + 0xc26c,"fallEvent");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b670(param_1 + 0xc308,"mistState");
  FUN_0040b5f0(param_1 + 0xc30c,"vanishTimer");
  FUN_0040b1c0(param_1 + 0xc310,"newPos");
  return;
}
