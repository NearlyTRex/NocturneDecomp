// Name: crt_unknown.c_FUN_005adaac
// Address: 005adaac
// Address Range: [[005adaac, 005adae8]]
// Convention: unknown
// Signature: void * crt_unknown_c_FUN_005adaac(void *param_1)

#include "nocturne.h"

void * FUN_005adaac(void *param_1)

{
  uint uVar1;
  
  if (param_1 == (void *)0x0) {
    param_1 = calloc(1,0x000000F4);
    uVar1 = 0x000000F4;
    if (param_1 != (void *)0x0) {
      *(byte *)((int)param_1 + 0x52) = 1;
      *(uint *)((int)param_1 + 0xf0) = uVar1;
    }
  }
  FUN_005afd10(param_1);
  return param_1;
}
