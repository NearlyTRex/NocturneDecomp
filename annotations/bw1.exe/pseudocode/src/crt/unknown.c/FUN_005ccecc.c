// Name: crt_unknown.c_FUN_005ccecc
// Address: 005ccecc
// Address Range: [[005ccecc, 005ccf1f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ccecc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ccecc(int param_1)

{
  uint *puVar1;
  uint *ptr;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626628)();
  puVar1 = (uint *)&DAT_02c9ffa0;
  ptr = _DAT_02c9ffa0;
  do {
    if (ptr == (uint *)0x0) {
LAB_005ccf16:
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_0062662c)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != 0) {
        debugFree((void *)ptr[2]);
      }
      *puVar1 = *ptr;
      debugFree(ptr);
      goto LAB_005ccf16;
    }
    puVar1 = ptr;
    ptr = (uint *)*ptr;
  } while( true );
}
