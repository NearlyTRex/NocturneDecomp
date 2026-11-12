// Name: crt_unknown.c_FUN_005ad410
// Address: 005ad410
// Address Range: [[005ad410, 005ad47d]]
// Convention: unknown
// Signature: undefined1 * crt_unknown_c_FUN_005ad410(uint *param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

byte * FUN_005ad410(uint *param_1,byte *param_2,int param_3)

{
  byte *puVar1;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  puVar1 = param_2;
  if ((param_3 == 10) && ((uStack_14 & 0x80000000) != 0)) {
    *param_2 = 0x2d;
    uStack_14 = ~uStack_14;
    puVar1 = param_2 + 1;
    uStack_18 = ~uStack_18 + 1;
    if (uStack_18 == 0) {
      uStack_14 = uStack_14 + 1;
    }
  }
  FUN_005ad370(&uStack_18,puVar1,param_3);
  return param_2;
}
