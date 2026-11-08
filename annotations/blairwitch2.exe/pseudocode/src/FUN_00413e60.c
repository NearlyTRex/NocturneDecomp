// Name: FUN_00413e60
// Address: 00413e60
// Address Range: [[00413e60, 00413f1a]]
// Convention: unknown
// Signature: void FUN_00413e60(int param_1)

#include "nocturne.h"

void FUN_00413e60(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b730(param_1 + 0x10af8,"fallEvent");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b960(param_1 + 0x10b94,"mistState");
  FUN_0040b8e0(param_1 + 0x10b98,"vanishTimer");
  FUN_0040b4b0(param_1 + 0x10b9c,"newPos");
  return;
}
