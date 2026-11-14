// Name: crt_unknown.c_FUN_005afdb0
// Address: 005afdb0
// Address Range: [[005afdb0, 005afdd8]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005afdb0(short *param_1)

#include "nocturne.h"

uint FUN_005afdb0(short *param_1)

{
  if (((*param_1 == 1) && (*(int *)(param_1 + 2) != 0)) &&
     (((ushort)param_1[5] < 0x10 || (0x12 < (ushort)param_1[5])))) {
    return 1;
  }
  return 0;
}
