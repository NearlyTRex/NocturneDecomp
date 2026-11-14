// Name: crt_unknown.c_FUN_005c6ff0
// Address: 005c6ff0
// Address Range: [[005c6ff0, 005c7034]]
// Convention: unknown
// Signature: byte crt_unknown_c_FUN_005c6ff0(uint param_1)

#include "nocturne.h"

byte FUN_005c6ff0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c7040(param_1);
  if (iVar1 == 0) {
    return (&DAT_0061ed94)[(byte)((char)param_1 + 1)] & 0x80;
  }
  if ((0x8280 < param_1) && (param_1 < 0x829b)) {
    return 1;
  }
  return 0;
}
