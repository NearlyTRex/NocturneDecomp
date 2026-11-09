// Name: shape_spotview.cpp_FUN_00584720
// Address: 00584720
// Address Range: [[00584720, 005847d6]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_00584720(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_spotview_cpp_FUN_00584720(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0x40490fdb) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_005f630c;
  }
  if (0x40490fdb < *(int *)(param_1 + 0x28)) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_005f6310;
  }
  if (*(float *)(param_1 + 0x24) < (float)_DAT_005f6314) {
    *(uint *)(param_1 + 0x24) = 0xbfc90fdb;
  }
  if ((float)_DAT_005f631c < *(float *)(param_1 + 0x24)) {
    *(uint *)(param_1 + 0x24) = 0x3fc90fdb;
  }
  if (*(float *)(param_1 + 0x2c) < (float)_DAT_005f6324) {
    *(uint *)(param_1 + 0x2c) = 0x3dcccccd;
  }
  if ((float)_DAT_005f632c < *(float *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x2c) = 0x461c4000;
  }
  if (*(float *)(param_1 + 0x38) < (float)_DAT_005f6334) {
    *(uint *)(param_1 + 0x38) = 0x3c23d70a;
  }
  if (*(float *)(param_1 + 0x38) <= (float)_DAT_005f633c) {
    return;
  }
  *(uint *)(param_1 + 0x38) = 0x42c80000;
  return;
}
