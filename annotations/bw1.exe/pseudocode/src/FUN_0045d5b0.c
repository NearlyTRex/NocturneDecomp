// Name: FUN_0045d5b0
// Address: 0045d5b0
// Address Range: [[0045d5b0, 0045d66c]]
// Convention: unknown
// Signature: void FUN_0045d5b0(int param_1)

#include "nocturne.h"

void FUN_0045d5b0(int param_1)

{
  byte local_104 [256];
  
  FUN_0040c040(param_1);
  if (0x00000004 < 2) {
    FUN_0040b440(local_104,"?whoGoesHere" + 1);
    *(uint *)(param_1 + 0x158) = 0;
  }
  FUN_0040b440(param_1 + 0x188,"whatEvent");
  if (1 < 0x00000004) {
    FUN_0040b6f0(param_1 + 0x158,"destActor");
  }
  if (2 < 0x00000004) {
    FUN_0040b440(param_1 + 0x15c,"destClass");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b670(param_1 + 0x1ec,"persistantEventFlag");
  return;
}
