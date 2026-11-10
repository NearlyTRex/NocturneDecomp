// Name: crt_unknown.c_FUN_005c4d20
// Address: 005c4d20
// Address Range: [[005c4d20, 005c4d48]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4d20(short *param_1)

#include "nocturne.h"

uint FUN_005c4d20(short *param_1)

{
  if (((*param_1 == 1) && (*(int *)(param_1 + 2) != 0)) &&
     (((ushort)param_1[5] < 0x10 || (0x12 < (ushort)param_1[5])))) {
    return 1;
  }
  return 0;
}
