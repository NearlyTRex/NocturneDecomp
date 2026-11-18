// Name: crt_unknown.c_FUN_005afc5c
// Address: 005afc5c
// Address Range: [[005afc5c, 005afcaf]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005afc5c(undefined *param_1)

#include "nocturne.h"

void FUN_005afc5c(byte *param_1)

{
  byte **ppuVar1;
  byte **ptr;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079cc)();
  ppuVar1 = &g_PTR_02d261f0;
  ptr = (byte **)g_PTR_02d261f0;
  do {
    if (ptr == (byte **)0x0) {
LAB_005afca6:
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d0)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != (byte *)0x0) {
        debugFree(ptr[2]);
      }
      *ppuVar1 = *ptr;
      debugFree(ptr);
      goto LAB_005afca6;
    }
    ppuVar1 = ptr;
    ptr = (byte **)*ptr;
  } while( true );
}
