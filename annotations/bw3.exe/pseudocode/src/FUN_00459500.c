// Name: FUN_00459500
// Address: 00459500
// Address Range: [[00459500, 004595bc]]
// Convention: unknown
// Signature: void FUN_00459500(int param_1)

#include "nocturne.h"

void FUN_00459500(int param_1)

{
  byte local_104 [256];
  
  FUN_0040c280(param_1);
  if (0x00000004 < 2) {
    FUN_0040b680(local_104,"?whoGoesHere" + 1);
    *(uint *)(param_1 + 0x158) = 0;
  }
  FUN_0040b680(param_1 + 0x188,"whatEvent");
  if (1 < 0x00000004) {
    FUN_0040b930(param_1 + 0x158,"destActor");
  }
  if (2 < 0x00000004) {
    FUN_0040b680(param_1 + 0x15c,"destClass");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x1ec,"persistantEventFlag");
  return;
}
