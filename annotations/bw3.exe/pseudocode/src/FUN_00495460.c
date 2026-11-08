// Name: FUN_00495460
// Address: 00495460
// Address Range: [[00495460, 00495489]]
// Convention: unknown
// Signature: undefined4 FUN_00495460(int param_1)

#include "nocturne.h"

uint FUN_00495460(int param_1)

{
  if (((((&DAT_006074b8)[(byte)((char)param_1 + 1)] & 0xe0) == 0) && (param_1 != 0x5f)) &&
     (param_1 != 0x2d)) {
    return 0;
  }
  return 1;
}
