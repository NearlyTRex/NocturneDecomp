// Name: FUN_005b1330
// Address: 005b1330
// Address Range: [[005b1330, 005b146b]]
// Convention: unknown
// Signature: void FUN_005b1330(int param_1)

#include "nocturne.h"

void FUN_005b1330(int param_1)

{
  FUN_004a0520(param_1);
  FUN_0040b5f0(param_1 + 0xc1d0,"?speed" + 1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  if (0x00000006 < 3) {
    FUN_0040b5f0(param_1 + 0xc1e0,"guardDistance");
  }
  FUN_0040b870(param_1 + 0x158,"motion state");
  if (1 < 0x00000006) {
    FUN_0040b670(param_1 + 0xc280,"lightUpEyes");
  }
  if (3 < 0x00000006) {
    FUN_0040b6f0(param_1 + 0xc294,"chainAnchor");
    FUN_0040b5f0(param_1 + 0xc298,"chainLength");
  }
  if (4 < 0x00000006) {
    FUN_0040b670(param_1 + 0xc268,&DAT_005f9b89);
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b670(param_1 + 0xc2a4,"phase");
  FUN_0040b5f0(param_1 + 0xc2a8,"phaseTimer");
  FUN_0040b6f0(param_1 + 0xc29c,"alpha1");
  FUN_0040b6f0(param_1 + 0xc2a0,"alpha2");
  return;
}
