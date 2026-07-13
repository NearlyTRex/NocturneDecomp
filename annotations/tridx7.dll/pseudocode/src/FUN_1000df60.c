// Name: FUN_1000df60
// Address: 1000df60
// Address Range: [[1000df60, 1000dfc5]]
// Convention: unknown
// Signature: void FUN_1000df60(int param_1)

#include "nocturne.h"

void FUN_1000df60(int param_1)

{
  if ((param_1 != 0) && (*(byte **)(param_1 + 0xc) != &DAT_1001821c)) {
    FUN_10005b30(*(byte **)(param_1 + 0xc));
    FUN_10005b30(*(uint *)(param_1 + 0x10));
    FUN_10005b30(*(uint *)(param_1 + 0x14));
    FUN_10005b30(*(uint *)(param_1 + 0x18));
    FUN_10005b30(*(uint *)(param_1 + 0x1c));
    FUN_10005b30(*(uint *)(param_1 + 0x20));
    FUN_10005b30(*(uint *)(param_1 + 0x24));
  }
  return;
}
