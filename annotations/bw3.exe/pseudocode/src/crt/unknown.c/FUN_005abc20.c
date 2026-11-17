// Name: crt_unknown.c_FUN_005abc20
// Address: 005abc20
// Address Range: [[005abc20, 005abc3b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005abc20(void)

#include "nocturne.h"

void FUN_005abc20(void)

{
  if (g_SIOControlBlock_PTR_00607bdc != (SIOControlBlock *)0x0) {
    debugFree(g_SIOControlBlock_PTR_00607bdc);
    g_SIOControlBlock_PTR_00607bdc = (SIOControlBlock *)0x0;
  }
  return;
}
