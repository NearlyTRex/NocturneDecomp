// Name: crt_unknown.c_FUN_005713a0
// Address: 005713a0
// Address Range: [[005713a0, 005713c9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005713a0(ThreadData *param_1)

#include "nocturne.h"

void FUN_005713a0(ThreadData *param_1)

{
  void *pvVar1;
  
  if (param_1 != (ThreadData *)0x0) {
    param_1->random_seed = 1;
    __GetStackLimits(param_1,(uint *)0x0);
    pvVar1 = (void *)GetCurrentThreadId();
    param_1->cleanup_data = pvVar1;
  }
  return;
}
