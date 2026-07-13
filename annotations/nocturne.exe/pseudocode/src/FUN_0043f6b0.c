// Name: FUN_0043f6b0
// Address: 0043f6b0
// Address Range: [[0043f6b0, 0043f8c9]]
// Convention: unknown
// Signature: void FUN_0043f6b0(int param_1)

#include "nocturne.h"

void FUN_0043f6b0(int param_1)

{
  uint local_8;
  
  FUN_0040d2d0(param_1);
  FUN_0040c450(param_1 + 0x150,"?curtainSize" + 1);
  FUN_0040c6d0(param_1 + 0x164,"curtainTexture");
  FUN_0040c900(param_1 + 0x174,"opacity");
  local_8 = 0;
  if (1 < 0x00000006) {
    if (0x00000006 < 4) {
      FUN_0040c900(&local_8,"cinched");
      *(uint *)(param_1 + 0x178) = (uint)((local_8 & 1) != 0);
      *(uint *)(param_1 + 0x184) = (uint)((local_8 & 2) != 0);
      *(uint *)(param_1 + 0x17c) = (uint)((local_8 & 4) != 0);
      *(uint *)(param_1 + 0x180) = (uint)((local_8 & 8) != 0);
    }
    FUN_0040c880(param_1 + 0x65b0c,"weight");
    FUN_0040c880(param_1 + 0x65b10,"dampen");
    FUN_0040c880(param_1 + 0x65b14,"spring");
    FUN_0040c880(param_1 + 0x65b18,"friction");
    FUN_0040c880(param_1 + 0x65b1c,"gravity");
    FUN_0040c900(param_1 + 0x65b24,"hitFloor");
  }
  if (2 < 0x00000006) {
    FUN_0040c900(param_1 + 0x1f0,"simulateMe");
  }
  if (3 < 0x00000006) {
    FUN_0040c900(param_1 + 0x178,"cinchedTop");
    FUN_0040c900(param_1 + 0x184,"cinchedBottom");
    FUN_0040c900(param_1 + 0x17c,"cinchedLeft");
    FUN_0040c900(param_1 + 0x180,"cinchedRight");
    FUN_0040c900(param_1 + 0x188,"falling");
    FUN_0040c6d0(param_1 + 0x18c,"letGoEvent");
  }
  if (4 < 0x00000006) {
    FUN_0040c880(param_1 + 500,"patchSize");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040c900(param_1 + 0x1f8,"blockVirtualDirectorFlag");
  return;
}
