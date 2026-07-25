// Name: FUN_00534590
// Address: 00534590
// Address Range: [[00534590, 00534650]]
// Convention: unknown
// Signature: void FUN_00534590(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534590(int param_1)

{
  if (*(float *)(param_1 + 0x28) < (float)_DAT_00595132) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_0059513a;
  }
  if ((float)_DAT_00595132 < *(float *)(param_1 + 0x28)) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + _DAT_0059513e;
  }
  if (*(float *)(param_1 + 0x24) < (float)_DAT_00595142) {
    *(uint *)(param_1 + 0x24) = 0xbfc90fdb;
  }
  if ((float)_DAT_0059514a < *(float *)(param_1 + 0x24)) {
    *(uint *)(param_1 + 0x24) = 0x3fc90fdb;
  }
  if (*(float *)(param_1 + 0x2c) < (float)_DAT_00595152) {
    *(uint *)(param_1 + 0x2c) = 0x3dcccccd;
  }
  if ((float)_DAT_0059515a < *(float *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x2c) = 0x461c4000;
  }
  if (*(float *)(param_1 + 0x38) < (float)_DAT_00595162) {
    *(uint *)(param_1 + 0x38) = 0x3c23d70a;
  }
  if (*(float *)(param_1 + 0x38) <= (float)_DAT_0059516a) {
    return;
  }
  *(uint *)(param_1 + 0x38) = 0x42c80000;
  return;
}
