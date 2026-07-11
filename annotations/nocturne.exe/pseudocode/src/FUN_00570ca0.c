// Name: FUN_00570ca0
// Address: 00570ca0
// Address Range: [[00570ca0, 00570cd9]]
// Convention: unknown
// Signature: undefined4 FUN_00570ca0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00570ca0(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((_DAT_02de5c30 != 0) && ((*(byte *)(*param_1 + 0x2de5c41) & 1) != 0)) && (param_1[1] == 0)) {
    return 2;
  }
  return 0;
}
