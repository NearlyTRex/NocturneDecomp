// Name: crt_unknown.c_FUN_0056e56c
// Address: 0056e56c
// Address Range: [[0056e56c, 0056e5a8]]
// Convention: unknown
// Signature: void * crt_unknown_c_FUN_0056e56c(void *param_1)

#include "nocturne.h"

void * FUN_0056e56c(void *param_1)

{
  SIZE_T SVar1;
  
  if (param_1 == (void *)0x0) {
    param_1 = calloc(1,0x000000F4);
    SVar1 = 0x000000F4;
    if (param_1 != (void *)0x0) {
      *(byte *)((int)param_1 + 0x52) = 1;
      *(SIZE_T *)((int)param_1 + 0xf0) = SVar1;
    }
  }
  FUN_005713a0(param_1);
  return param_1;
}
