// Name: shape_spotview.cpp_FUN_00567ff0
// Address: 00567ff0
// Address Range: [[00567ff0, 005680a6]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_00567ff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_spotview_cpp_FUN_00567ff0(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0x40490fdb) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_005d5c26;
  }
  if (0x40490fdb < *(int *)(param_1 + 0x28)) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_005d5c2a;
  }
  if (*(float *)(param_1 + 0x24) < (float)_DAT_005d5c2e) {
    *(uint *)(param_1 + 0x24) = 0xbfc90fdb;
  }
  if ((float)_DAT_005d5c36 < *(float *)(param_1 + 0x24)) {
    *(uint *)(param_1 + 0x24) = 0x3fc90fdb;
  }
  if (*(float *)(param_1 + 0x2c) < (float)_DAT_005d5c3e) {
    *(uint *)(param_1 + 0x2c) = 0x3dcccccd;
  }
  if ((float)_DAT_005d5c46 < *(float *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x2c) = 0x461c4000;
  }
  if (*(float *)(param_1 + 0x38) < (float)_DAT_005d5c4e) {
    *(uint *)(param_1 + 0x38) = 0x3c23d70a;
  }
  if (*(float *)(param_1 + 0x38) <= (float)_DAT_005d5c56) {
    return;
  }
  *(uint *)(param_1 + 0x38) = 0x42c80000;
  return;
}
