// Name: crt_unknown.c_FUN_005afc5c
// Address: 005afc5c
// Address Range: [[005afc5c, 005afcaf]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005afc5c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005afc5c(int param_1)

{
  uint *puVar1;
  uint *ptr;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079cc)();
  puVar1 = (uint *)&DAT_02d261f0;
  ptr = _DAT_02d261f0;
  do {
    if (ptr == (uint *)0x0) {
LAB_005afca6:
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d0)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != 0) {
        debugFree((void *)ptr[2]);
      }
      *puVar1 = *ptr;
      debugFree(ptr);
      goto LAB_005afca6;
    }
    puVar1 = ptr;
    ptr = (uint *)*ptr;
  } while( true );
}
