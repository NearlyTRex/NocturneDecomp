// Name: crt_unknown.c_FUN_005712ec
// Address: 005712ec
// Address Range: [[005712ec, 0057133f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005712ec(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005712ec(int param_1)

{
  uint *puVar1;
  uint *ptr;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae8)();
  puVar1 = (uint *)&DAT_02de5d70;
  ptr = _DAT_02de5d70;
  do {
    if (ptr == (uint *)0x0) {
LAB_00571336:
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1aec)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != 0) {
        free((void *)ptr[2]);
      }
      *puVar1 = *ptr;
      free(ptr);
      goto LAB_00571336;
    }
    puVar1 = ptr;
    ptr = (uint *)*ptr;
  } while( true );
}
