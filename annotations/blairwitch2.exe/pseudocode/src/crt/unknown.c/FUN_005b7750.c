// Name: crt_unknown.c_FUN_005b7750
// Address: 005b7750
// Address Range: [[005b7750, 005b7766]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b7750(int *param_1,undefined1 param_2)

#include "nocturne.h"

void FUN_005b7750(int *param_1,byte param_2)

{
  byte *puVar1;
  
  puVar1 = (byte *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = param_2;
  param_1[4] = param_1[4] + 1;
  return;
}
