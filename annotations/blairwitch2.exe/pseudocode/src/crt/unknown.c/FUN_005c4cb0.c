// Name: crt_unknown.c_FUN_005c4cb0
// Address: 005c4cb0
// Address Range: [[005c4cb0, 005c4cb4]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4cb0(void)

#include "nocturne.h"

void FUN_005c4cb0(void)

{
  uint *puVar1;
  uint *ptr;
  
  ptr = (uint *)g_PTR_026810b0;
  while (ptr != (uint *)0x0) {
    puVar1 = (uint *)*ptr;
    if (ptr[3] != 0) {
      debugFree((void *)ptr[2]);
    }
    debugFree(ptr);
    ptr = puVar1;
  }
  return;
}
