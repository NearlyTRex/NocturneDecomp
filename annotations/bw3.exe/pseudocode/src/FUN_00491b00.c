// Name: FUN_00491b00
// Address: 00491b00
// Address Range: [[00491b00, 00491b39]]
// Convention: unknown
// Signature: undefined1 * FUN_00491b00(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00491b00(uint param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\0') {
    _DAT_01c734ac = 1;
    iVar1 = FUN_00491b80(param_1,param_2);
    _DAT_01c734ac = 0;
    if (iVar1 < 0) {
      return &DAT_01c734b0;
    }
  }
  return (byte *)0x0;
}
