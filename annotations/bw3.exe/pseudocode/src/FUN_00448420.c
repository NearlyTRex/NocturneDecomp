// Name: FUN_00448420
// Address: 00448420
// Address Range: [[00448420, 00448639]]
// Convention: unknown
// Signature: void FUN_00448420(int param_1)

#include "nocturne.h"

void FUN_00448420(int param_1)

{
  uint uStack_8;
  
  FUN_0040c280(param_1);
  FUN_0040b400(param_1 + 0x158,"?curtainSize" + 1);
  FUN_0040b680(param_1 + 0x16c,"curtainTexture");
  FUN_0040b8b0(param_1 + 0x17c,"opacity");
  uStack_8 = 0;
  if (1 < 0x00000006) {
    if (0x00000006 < 4) {
      FUN_0040b8b0(&uStack_8,"cinched");
      *(uint *)(param_1 + 0x180) = (uint)((uStack_8 & 1) != 0);
      *(uint *)(param_1 + 0x18c) = (uint)((uStack_8 & 2) != 0);
      *(uint *)(param_1 + 0x184) = (uint)((uStack_8 & 4) != 0);
      *(uint *)(param_1 + 0x188) = (uint)((uStack_8 & 8) != 0);
    }
    FUN_0040b830(param_1 + 0x65b14,"weight");
    FUN_0040b830(param_1 + 0x65b18,"dampen");
    FUN_0040b830(param_1 + 0x65b1c,"spring");
    FUN_0040b830(param_1 + 0x65b20,"friction");
    FUN_0040b830(param_1 + 0x65b24,"gravity");
    FUN_0040b8b0(param_1 + 0x65b2c,"hitFloor");
  }
  if (2 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0x1f8,"simulateMe");
  }
  if (3 < 0x00000006) {
    FUN_0040b8b0(param_1 + 0x180,"cinchedTop");
    FUN_0040b8b0(param_1 + 0x18c,"cinchedBottom");
    FUN_0040b8b0(param_1 + 0x184,"cinchedLeft");
    FUN_0040b8b0(param_1 + 0x188,"cinchedRight");
    FUN_0040b8b0(param_1 + 400,"falling");
    FUN_0040b680(param_1 + 0x194,"letGoEvent");
  }
  if (4 < 0x00000006) {
    FUN_0040b830(param_1 + 0x1fc,"patchSize");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x200,"blockVirtualDirectorFlag");
  return;
}
