// Name: FUN_0041f600
// Address: 0041f600
// Address Range: [[0041f600, 0041f6df]]
// Convention: unknown
// Signature: void FUN_0041f600(int param_1)

#include "nocturne.h"

void FUN_0041f600(int param_1)

{
  uint local_c;
  
  FUN_0041ec60(param_1);
  FUN_0040c900(param_1 + 0x664,"lightType");
  if (*(int *)(param_1 + 0x664) == 0) {
    FUN_0040c450(param_1 + 0x3614,"bLightPos");
    FUN_0040c4f0(param_1 + 0x3620,"lightOrient");
    if (DAT_00763e88 == 1) {
      FUN_0040c880(&local_c,"lightFov");
      *(uint *)(param_1 + 0x7a0) = local_c;
    }
    else {
      local_c = *(uint *)(param_1 + 0x7a0);
      FUN_0040c880(&local_c,"lightFov");
    }
  }
  FUN_0040c900(param_1 + 0x231c,"light status");
  if (*(int *)(param_1 + 0x664) != 0) {
    return;
  }
  FUN_0040c880(param_1 + 0x768,"light falloff");
  return;
}
