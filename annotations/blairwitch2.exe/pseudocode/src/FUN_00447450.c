// Name: FUN_00447450
// Address: 00447450
// Address Range: [[00447450, 0044750c]]
// Convention: unknown
// Signature: void FUN_00447450(int param_1)

#include "nocturne.h"

void FUN_00447450(int param_1)

{
  byte local_104 [256];
  
  FUN_0040c330(param_1);
  if (0x00000004 < 2) {
    FUN_0040b730(local_104,"?whoGoesHere" + 1);
    *(uint *)(param_1 + 0x2b4) = 0;
  }
  FUN_0040b730(param_1 + 0x2e4,"whatEvent");
  if (1 < 0x00000004) {
    FUN_0040b9e0(param_1 + 0x2b4,"destActor");
  }
  if (2 < 0x00000004) {
    FUN_0040b730(param_1 + 0x2b8,"destClass");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b960(param_1 + 0x348,"persistantEventFlag");
  return;
}
