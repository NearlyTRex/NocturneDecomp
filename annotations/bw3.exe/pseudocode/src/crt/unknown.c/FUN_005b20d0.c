// Name: crt_unknown.c_FUN_005b20d0
// Address: 005b20d0
// Address Range: [[005b20d0, 005b2112]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005b20d0(uint param_1)

#include "nocturne.h"

uint FUN_005b20d0(uint param_1)

{
  int iVar1;
  
  if ((g_INT_02d25930 != 0) && ((g_CHAR_ARRAY_02d25941[param_1 >> 8 & 0xff] & 1U) != 0)) {
    iVar1 = FUN_005b2120(param_1 & 0xff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
