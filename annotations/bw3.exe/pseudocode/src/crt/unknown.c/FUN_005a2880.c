// Name: crt_unknown.c_FUN_005a2880
// Address: 005a2880
// Address Range: [[005a2880, 005a2896]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a2880(int *param_1,undefined1 param_2)

#include "nocturne.h"

void FUN_005a2880(int *param_1,byte param_2)

{
  byte *puVar1;
  
  puVar1 = (byte *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = param_2;
  param_1[4] = param_1[4] + 1;
  return;
}
