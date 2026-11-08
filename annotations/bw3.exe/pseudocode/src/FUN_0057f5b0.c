// Name: FUN_0057f5b0
// Address: 0057f5b0
// Address Range: [[0057f5b0, 0057f6eb]]
// Convention: unknown
// Signature: void FUN_0057f5b0(int param_1)

#include "nocturne.h"

void FUN_0057f5b0(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if (0x00000006 < 3) {
    FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  FUN_0040bab0(param_1 + 0x158,"motion state");
  if (1 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0xd06c,"lightUpEyes");
  }
  if (3 < 0x00000006) {
    FUN_0040b930(param_1 + 0xd080,"chainAnchor");
    FUN_0040b830(param_1 + 0xd084,"chainLength");
  }
  if (4 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0xd054,&DAT_005d7baa);
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b8b0(param_1 + 0xd090,"phase");
  FUN_0040b830(param_1 + 0xd094,"phaseTimer");
  FUN_0040b930(param_1 + 0xd088,"alpha1");
  FUN_0040b930(param_1 + 0xd08c,"alpha2");
  return;
}
