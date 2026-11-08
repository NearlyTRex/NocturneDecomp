// Name: FUN_004a6cd0
// Address: 004a6cd0
// Address Range: [[004a6cd0, 004a6d09]]
// Convention: unknown
// Signature: undefined1 * FUN_004a6cd0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004a6cd0(uint param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\0') {
    _DAT_01c56ecc = 1;
    iVar1 = FUN_004a1b90(param_1,param_2);
    _DAT_01c56ecc = 0;
    if (iVar1 == 0) {
      return &DAT_01c56ed0;
    }
  }
  return (byte *)0x0;
}
