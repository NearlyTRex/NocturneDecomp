// Name: FUN_0058d7e0
// Address: 0058d7e0
// Address Range: [[0058d7e0, 0058d91b]]
// Convention: unknown
// Signature: void FUN_0058d7e0(int param_1)

#include "nocturne.h"

void FUN_0058d7e0(int param_1)

{
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"?speed" + 1);
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  if (0x00000006 < 3) {
    FUN_0040b8e0(param_1 + 0x10a70,"guardDistance");
  }
  FUN_0040bb60(param_1 + 0x2b4,"motion state");
  if (1 < 0x00000006) {
    FUN_0040b960(param_1 + 0x10b10,"lightUpEyes");
  }
  if (3 < 0x00000006) {
    FUN_0040b9e0(param_1 + 0x10b24,"chainAnchor");
    FUN_0040b8e0(param_1 + 0x10b28,"chainLength");
  }
  if (4 < 0x00000006) {
    FUN_0040b960(param_1 + 0x10af8,&DAT_005ee7b1);
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b960(param_1 + 0x10b34,"phase");
  FUN_0040b8e0(param_1 + 0x10b38,"phaseTimer");
  FUN_0040b9e0(param_1 + 0x10b2c,"alpha1");
  FUN_0040b9e0(param_1 + 0x10b30,"alpha2");
  return;
}
