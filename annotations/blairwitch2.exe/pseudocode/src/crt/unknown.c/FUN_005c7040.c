// Name: crt_unknown.c_FUN_005c7040
// Address: 005c7040
// Address Range: [[005c7040, 005c7082]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c7040(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c7040(uint param_1)

{
  int iVar1;
  
  if ((_DAT_026807f0 != 0) && ((*(byte *)((param_1 >> 8 & 0xff) + 0x2680801) & 1) != 0)) {
    iVar1 = FUN_005c7090(param_1 & 0xff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
