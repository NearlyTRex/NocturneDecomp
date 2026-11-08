// Name: FUN_0053e860
// Address: 0053e860
// Address Range: [[0053e860, 0053e99b]]
// Convention: unknown
// Signature: void FUN_0053e860(int param_1)

#include "nocturne.h"

void FUN_0053e860(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"speed");
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if (0x00000001 < 3) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  if (1 < 0x00000001) {
    FUN_0040b960(param_1 + 0x10b18,"lightUpEyes");
  }
  if (3 < 0x00000001) {
    FUN_0040b9e0(param_1 + 0x10b2c,"chainAnchor");
    FUN_0040b8e0(param_1 + 0x10b30,"chainLength");
  }
  if (4 < 0x00000001) {
    FUN_0040b960(param_1 + 0x10af8,&DAT_005e675e);
  }
  if (0x00000001 < 6) {
    return;
  }
  FUN_0040b960(param_1 + 0x10b40,"phase");
  FUN_0040b8e0(param_1 + 0x10b44,"phaseTimer");
  FUN_0040b9e0(param_1 + 0x10b34,"alpha1");
  FUN_0040b9e0(param_1 + 0x10b38,"alpha2");
  return;
}
