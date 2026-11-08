// Name: FUN_0040c040
// Address: 0040c040
// Address Range: [[0040c040, 0040c0da]]
// Convention: unknown
// Signature: void FUN_0040c040(int param_1)

#include "nocturne.h"

void FUN_0040c040(int param_1)

{
  byte local_8 [4];
  
  FUN_0040b300(param_1 + 0x20,"location");
  FUN_0040b260(param_1 + 0x30,"orient");
  if (0x00000007 < 7) {
    FUN_0040b5f0(local_8,&DAT_005d2d3d);
    if (0x00000007 < 6) {
      return;
    }
  }
  else if (0x00000007 < 6) {
    return;
  }
  FUN_0040b670(param_1 + 0x70,"wasCreated");
  FUN_0040b5f0(param_1 + 0x74,"createProb");
  FUN_0040b440(param_1 + 0x78,"createEvent");
  return;
}
