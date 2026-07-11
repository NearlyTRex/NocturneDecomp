// Name: FUN_0040d2d0
// Address: 0040d2d0
// Address Range: [[0040d2d0, 0040d36a]]
// Convention: unknown
// Signature: void FUN_0040d2d0(int param_1)

#include "nocturne.h"

void FUN_0040d2d0(int param_1)

{
  byte local_8 [4];
  
  FUN_0040c590(param_1 + 0x20,"location");
  FUN_0040c4f0(param_1 + 0x30,"orient");
  if (0x00000007 < 7) {
    FUN_0040c880(local_8,&DAT_00577f15);
    if (0x00000007 < 6) {
      return;
    }
  }
  else if (0x00000007 < 6) {
    return;
  }
  FUN_0040c900(param_1 + 0x70,"wasCreated");
  FUN_0040c880(param_1 + 0x74,"createProb");
  FUN_0040c6d0(param_1 + 0x78,"createEvent");
  return;
}
