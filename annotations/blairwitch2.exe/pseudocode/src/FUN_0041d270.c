// Name: FUN_0041d270
// Address: 0041d270
// Address Range: [[0041d270, 0041d349]]
// Convention: unknown
// Signature: void FUN_0041d270(int param_1)

#include "nocturne.h"

void FUN_0041d270(int param_1)

{
  uint uStack_c;
  
  FUN_0041c7f0(param_1);
  FUN_0040b960(param_1 + 0x7d4,"lightType");
  if (*(int *)(param_1 + 0x7d4) == 0) {
    FUN_0040b4b0(param_1 + 0x3788,"bLightPos");
    FUN_0040b550(param_1 + 0x3794,"lightOrient");
    if (DAT_007bc038 == 1) {
      FUN_0040b8e0(&uStack_c,"lightFov");
      *(uint *)(param_1 + 0x810) = uStack_c;
    }
    else {
      uStack_c = *(uint *)(param_1 + 0x810);
      FUN_0040b8e0(&uStack_c,"lightFov");
    }
  }
  FUN_0040b960(param_1 + 0x248c,"light status");
  if (*(int *)(param_1 + 0x7d4) != 0) {
    return;
  }
  FUN_0040b8e0(param_1 + 0x918,"light falloff");
  return;
}
