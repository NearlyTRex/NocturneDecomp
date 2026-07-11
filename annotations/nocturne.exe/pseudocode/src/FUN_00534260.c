// Name: FUN_00534260
// Address: 00534260
// Address Range: [[00534260, 005342a7]]
// Convention: unknown
// Signature: void FUN_00534260(undefined4 *param_1,uint param_2)

#include "nocturne.h"

void FUN_00534260(uint *param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    param_1[9] = param_1[2];
  }
  if ((param_2 & 2) != 0) {
    param_1[10] = param_1[3];
  }
  if ((param_2 & 8) != 0) {
    param_1[0xd] = param_1[5];
    param_1[0xc] = param_1[4];
  }
  if ((param_2 & 4) != 0) {
    param_1[0xb] = *param_1;
  }
  if ((param_2 & 0x10) == 0) {
    return;
  }
  param_1[0xe] = param_1[1];
  return;
}
