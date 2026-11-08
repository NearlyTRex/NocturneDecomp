// Name: FUN_004fd58f
// Address: 004fd58f
// Address Range: [[004fd58f, 004fd5e2]]
// Convention: unknown
// Signature: bool FUN_004fd58f(uint *param_1)

#include "nocturne.h"

bool FUN_004fd58f(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_004fd4cc();
    FUN_004fd579();
    *param_1 = (uint)DAT_006182d8;
    param_1[1] = (uint)DAT_006182d9;
    param_1[2] = (uint)DAT_006182da;
    param_1[3] = (uint)DAT_006182dc;
    param_1[4] = (uint)DAT_006182e1;
  }
  return param_1 != (uint *)0x0;
}
