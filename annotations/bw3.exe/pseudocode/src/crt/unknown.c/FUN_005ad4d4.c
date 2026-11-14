// Name: crt_unknown.c_FUN_005ad4d4
// Address: 005ad4d4
// Address Range: [[005ad4d4, 005ad502]]
// Convention: unknown
// Signature: undefined1 * crt_unknown_c_FUN_005ad4d4(int param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

byte * FUN_005ad4d4(int param_1,byte *param_2,int param_3)

{
  byte *puVar1;
  
  puVar1 = param_2;
  if ((param_3 == 10) && (param_1 < 0)) {
    param_1 = -param_1;
    puVar1 = param_2 + 1;
    *param_2 = 0x2d;
  }
  FUN_005ad480(param_1,puVar1,param_3);
  return param_2;
}
