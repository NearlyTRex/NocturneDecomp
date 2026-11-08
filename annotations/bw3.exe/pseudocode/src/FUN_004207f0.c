// Name: FUN_004207f0
// Address: 004207f0
// Address Range: [[004207f0, 004208c9]]
// Convention: unknown
// Signature: void FUN_004207f0(int param_1)

#include "nocturne.h"

void FUN_004207f0(int param_1)

{
  uint uStack_c;
  
  FUN_0041fb90(param_1);
  FUN_0040b8b0(param_1 + 0x6e8,"lightType");
  if (*(int *)(param_1 + 0x6e8) == 0) {
    FUN_0040b400(param_1 + 0x3698,"bLightPos");
    FUN_0040b4a0(param_1 + 0x36a4,"lightOrient");
    if (DAT_007df9b8 == 1) {
      FUN_0040b830(&uStack_c,"lightFov");
      *(uint *)(param_1 + 0x724) = uStack_c;
    }
    else {
      uStack_c = *(uint *)(param_1 + 0x724);
      FUN_0040b830(&uStack_c,"lightFov");
    }
  }
  FUN_0040b8b0(param_1 + 0x23a0,"light status");
  if (*(int *)(param_1 + 0x6e8) != 0) {
    return;
  }
  FUN_0040b830(param_1 + 0x82c,"light falloff");
  return;
}
