// Name: FUN_0040c280
// Address: 0040c280
// Address Range: [[0040c280, 0040c31a]]
// Convention: unknown
// Signature: void FUN_0040c280(int param_1)

#include "nocturne.h"

void FUN_0040c280(int param_1)

{
  byte local_8 [4];
  
  FUN_0040b540(param_1 + 0x20,"location");
  FUN_0040b4a0(param_1 + 0x30,"orient");
  if (0x00000007 < 7) {
    FUN_0040b830(local_8,&DAT_005b5d89);
    if (0x00000007 < 6) {
      return;
    }
  }
  else if (0x00000007 < 6) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x70,"wasCreated");
  FUN_0040b830(param_1 + 0x74,"createProb");
  FUN_0040b680(param_1 + 0x78,"createEvent");
  return;
}
