// Name: FUN_00595e90
// Address: 00595e90
// Address Range: [[00595e90, 00595f8b]]
// Convention: unknown
// Signature: void FUN_00595e90(int param_1)

#include "nocturne.h"

void FUN_00595e90(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  FUN_0040b8b0(param_1 + 0xd06c,"lightUpEyes");
  FUN_0040b930(param_1 + 0xd080,"chainAnchor");
  FUN_0040b830(param_1 + 0xd084,"chainLength");
  FUN_0040b8b0(param_1 + 0xd054,&DAT_005d9408);
  FUN_0040b8b0(param_1 + 0xd090,"phase");
  FUN_0040b830(param_1 + 0xd094,"phaseTimer");
  FUN_0040b930(param_1 + 0xd088,"alpha1");
  FUN_0040b930(param_1 + 0xd08c,"alpha2");
  return;
}
