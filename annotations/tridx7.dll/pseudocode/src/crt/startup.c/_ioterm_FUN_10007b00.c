// Name: crt_startup.c__ioterm_FUN_10007b00
// Address: 10007b00
// Address Range: [[10007b00, 10007b54]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c__ioterm_FUN_10007b00(void)

#include "nocturne.h"

void __cdecl _ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_10241870;
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if (uVar1 < uVar1 + 0x480) {
        do {
          if (*(int *)(uVar1 + 8) != 0) {
            DeleteCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0xc));
          }
          uVar1 = uVar1 + 0x24;
        } while (uVar1 < *puVar2 + 0x480);
      }
      free((void *)*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_10241970);
  return;
}
