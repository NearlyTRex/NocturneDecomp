// Name: FUN_004efb30
// Address: 004efb30
// Address Range: [[004efb30, 004efc09]]
// Convention: unknown
// Signature: void FUN_004efb30(int param_1)

#include "nocturne.h"

void FUN_004efb30(int param_1)

{
  FUN_004eed10(param_1);
  FUN_0040c6d0(param_1 + 0x1f570,"transformEvent");
  FUN_0040c6d0(param_1 + 0x1f5d4,"wolfModelName");
  FUN_0040c880(param_1 + 0x202a8,"morphTime");
  if ((1 < 0x00000006) && (0x00000006 < 5)) {
    FUN_0040ca80(param_1 + 0x150,"modelName");
    FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  if (2 < 0x00000006) {
    FUN_0040c880(param_1 + 0x202ac,"wolfSize");
  }
  if (3 < 0x00000006) {
    FUN_0040c6d0(param_1 + 0x1f5f4,"nameOfWolf");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x1f614,"transformWav");
  return;
}
