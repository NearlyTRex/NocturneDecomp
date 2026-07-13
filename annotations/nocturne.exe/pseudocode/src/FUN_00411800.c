// Name: FUN_00411800
// Address: 00411800
// Address Range: [[00411800, 00411858]]
// Convention: unknown
// Signature: void FUN_00411800(int param_1)

#include "nocturne.h"

void FUN_00411800(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c450(param_1 + 0x150,&DAT_00578750);
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x160,"effectClassNameList");
  FUN_0040c900(param_1 + 0x15c,"addToPathGrid");
  return;
}
