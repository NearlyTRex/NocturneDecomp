// Name: FUN_0048e3e0
// Address: 0048e3e0
// Address Range: [[0048e3e0, 0048e419]]
// Convention: unknown
// Signature: undefined1 * FUN_0048e3e0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0048e3e0(uint param_1,char *param_2)

{
  int iVar1;
  
  if (*param_2 != '\0') {
    _DAT_01c3dd0c = 1;
    iVar1 = FUN_00489510(param_1,param_2);
    _DAT_01c3dd0c = 0;
    if (iVar1 == 0) {
      return &DAT_01c3dd10;
    }
  }
  return (byte *)0x0;
}
