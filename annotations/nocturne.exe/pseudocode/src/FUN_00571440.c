// Name: FUN_00571440
// Address: 00571440
// Address Range: [[00571440, 00571468]]
// Convention: unknown
// Signature: undefined4 FUN_00571440(short *param_1)

#include "nocturne.h"

uint FUN_00571440(short *param_1)

{
  if (((*param_1 == 1) && (*(int *)(param_1 + 2) != 0)) &&
     (((ushort)param_1[5] < 0x10 || (0x12 < (ushort)param_1[5])))) {
    return 1;
  }
  return 0;
}
