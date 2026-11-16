// Name: crt_unknown.c_FUN_005c4bcc
// Address: 005c4bcc
// Address Range: [[005c4bcc, 005c4c1f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4bcc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c4bcc(int param_1)

{
  uint *puVar1;
  uint *ptr;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d0)();
  puVar1 = (uint *)&DAT_026810b0;
  ptr = _DAT_026810b0;
  do {
    if (ptr == (uint *)0x0) {
LAB_005c4c16:
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d4)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != 0) {
        debugFree((void *)ptr[2]);
      }
      *puVar1 = *ptr;
      debugFree(ptr);
      goto LAB_005c4c16;
    }
    puVar1 = ptr;
    ptr = (uint *)*ptr;
  } while( true );
}
