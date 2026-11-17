// Name: crt_unknown.c_FUN_005cac3c
// Address: 005cac3c
// Address Range: [[005cac3c, 005cac78]]
// Convention: unknown
// Signature: void * crt_unknown_c_FUN_005cac3c(void *param_1)

#include "nocturne.h"

void * FUN_005cac3c(void *param_1)

{
  ulong uVar1;
  
  if (param_1 == (void *)0x0) {
    param_1 = calloc(1,g_RuntimeBufferSize);
    uVar1 = g_RuntimeBufferSize;
    if (param_1 != (void *)0x0) {
      *(byte *)((int)param_1 + 0x52) = 1;
      *(ulong *)((int)param_1 + 0xf0) = uVar1;
    }
  }
  FUN_005ccf80(param_1);
  return param_1;
}
