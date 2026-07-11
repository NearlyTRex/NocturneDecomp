// Name: FUN_0056fdf0
// Address: 0056fdf0
// Address Range: [[0056fdf0, 0056fe11]]
// Convention: unknown
// Signature: undefined * FUN_0056fdf0(uint param_1)

#include "nocturne.h"

byte * FUN_0056fdf0(uint param_1)

{
  if (3 < param_1) {
    return (byte *)0x0;
  }
  return &DAT_005c1894 + param_1 * 0x1a;
}
