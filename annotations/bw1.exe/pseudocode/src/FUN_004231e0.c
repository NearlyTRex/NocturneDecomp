// Name: FUN_004231e0
// Address: 004231e0
// Address Range: [[004231e0, 004232b9]]
// Convention: unknown
// Signature: void FUN_004231e0(int param_1)

#include "nocturne.h"

void FUN_004231e0(int param_1)

{
  uint uStack_c;
  
  FUN_00422760(param_1);
  FUN_0040b670(param_1 + 0x678,"lightType");
  if (*(int *)(param_1 + 0x678) == 0) {
    FUN_0040b1c0(param_1 + 0x3628,"bLightPos");
    FUN_0040b260(param_1 + 0x3634,"lightOrient");
    if (DAT_007c3038 == 1) {
      FUN_0040b5f0(&uStack_c,"lightFov");
      *(uint *)(param_1 + 0x6b4) = uStack_c;
    }
    else {
      uStack_c = *(uint *)(param_1 + 0x6b4);
      FUN_0040b5f0(&uStack_c,"lightFov");
    }
  }
  FUN_0040b670(param_1 + 0x2330,"light status");
  if (*(int *)(param_1 + 0x678) != 0) {
    return;
  }
  FUN_0040b5f0(param_1 + 0x7bc,"light falloff");
  return;
}
