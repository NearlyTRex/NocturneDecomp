// Name: crt_stdio.c___endstdio_FUN_1000ab70
// Address: 1000ab70
// Address Range: [[1000ab70, 1000ac07]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c___endstdio_FUN_1000ab70(void)

#include "nocturne.h"

void __cdecl __endstdio(void)

{
  FILE *file;
  int iVar1;
  int iVar2;
  
  iVar1 = 3;
  _lock(2);
  if (3 < DAT_10241860) {
    iVar2 = 0xc;
    do {
      file = *(FILE **)(DAT_1024085c + iVar2);
      if (file != (FILE *)0x0) {
        if ((file->_flag & 0x83) != 0) {
          _fclose(file);
        }
        if (0x4f < iVar2) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1024085c + iVar2) + 0x20));
          free(*(void **)(DAT_1024085c + iVar2));
          *(uint *)(DAT_1024085c + iVar2) = 0;
        }
      }
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10241860);
  }
  _unlock(2);
  return;
}
