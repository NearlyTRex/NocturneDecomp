// Name: shape_spotview.cpp_FUN_00561cd0
// Address: 00561cd0
// Address Range: [[00561cd0, 00561d86]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_00561cd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_spotview_cpp_FUN_00561cd0(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0x40490fdb) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_005eb108;
  }
  if (0x40490fdb < *(int *)(param_1 + 0x28)) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_005eb10c;
  }
  if (*(float *)(param_1 + 0x24) < (float)_DAT_005eb110) {
    *(uint *)(param_1 + 0x24) = 0xbfc90fdb;
  }
  if ((float)_DAT_005eb118 < *(float *)(param_1 + 0x24)) {
    *(uint *)(param_1 + 0x24) = 0x3fc90fdb;
  }
  if (*(float *)(param_1 + 0x2c) < (float)_DAT_005eb120) {
    *(uint *)(param_1 + 0x2c) = 0x3dcccccd;
  }
  if ((float)_DAT_005eb128 < *(float *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x2c) = 0x461c4000;
  }
  if (*(float *)(param_1 + 0x38) < (float)_DAT_005eb130) {
    *(uint *)(param_1 + 0x38) = 0x3c23d70a;
  }
  if (*(float *)(param_1 + 0x38) <= (float)_DAT_005eb138) {
    return;
  }
  *(uint *)(param_1 + 0x38) = 0x42c80000;
  return;
}
