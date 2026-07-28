// Name: crt_unknown.c_StringBufferCallback_FUN_005639f0
// Address: 005639f0
// Address Range: [[005639f0, 00563a06]]
// Convention: unknown
// Signature: void crt_unknown_c_StringBufferCallback_FUN_005639f0(int *param_1,undefined1 param_2)

#include "nocturne.h"

void StringBufferCallback(int *param_1,byte param_2)

{
  byte *puVar1;
  
  puVar1 = (byte *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = param_2;
  param_1[4] = param_1[4] + 1;
  return;
}
