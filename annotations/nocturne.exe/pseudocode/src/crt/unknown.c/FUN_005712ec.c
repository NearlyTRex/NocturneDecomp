// Name: crt_unknown.c_FUN_005712ec
// Address: 005712ec
// Address Range: [[005712ec, 0057133f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005712ec(undefined *param_1)

#include "nocturne.h"

void FUN_005712ec(byte *param_1)

{
  byte **ppuVar1;
  byte **ptr;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ae8)();
  ppuVar1 = &g_PTR_02de5d70;
  ptr = (byte **)g_PTR_02de5d70;
  do {
    if (ptr == (byte **)0x0) {
LAB_00571336:
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1aec)();
      return;
    }
    if (param_1 == ptr[1]) {
      if (ptr[3] != (byte *)0x0) {
        free(ptr[2]);
      }
      *ppuVar1 = *ptr;
      free(ptr);
      goto LAB_00571336;
    }
    ppuVar1 = ptr;
    ptr = (byte **)*ptr;
  } while( true );
}
