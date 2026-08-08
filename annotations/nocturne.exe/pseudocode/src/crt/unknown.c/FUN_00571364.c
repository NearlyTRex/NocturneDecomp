// Name: crt_unknown.c_FUN_00571364
// Address: 005713d0
// Address Range: [[005713d0, 005713d4]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00571364(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571364(void)

{
  uint *puVar1;
  uint *ptr;
  
  ptr = _DAT_02de5d70;
  while (ptr != (uint *)0x0) {
    puVar1 = (uint *)*ptr;
    if (ptr[3] != 0) {
      free((void *)ptr[2]);
    }
    free(ptr);
    ptr = puVar1;
  }
  return;
}
