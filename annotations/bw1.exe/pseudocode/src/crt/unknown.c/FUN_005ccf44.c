// Name: crt_unknown.c_FUN_005ccf44
// Address: 005ccf44
// Address Range: [[005ccf44, 005ccf76]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ccf44(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ccf44(void)

{
  uint *puVar1;
  uint *ptr;
  
  ptr = _DAT_02c9ffa0;
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
