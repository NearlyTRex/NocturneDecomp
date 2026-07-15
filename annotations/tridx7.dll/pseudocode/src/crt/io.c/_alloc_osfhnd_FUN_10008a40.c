// Name: crt_io.c__alloc_osfhnd_FUN_10008a40
// Address: 10008a40
// Address Range: [[10008a40, 10008b7d]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__alloc_osfhnd_FUN_10008a40(void)

#include "nocturne.h"

int __cdecl _alloc_osfhnd(void)

{
  uint *puVar1;
  uint *puVar2;
  int filehandle;
  int *piVar3;
  int iVar4;
  int local_4;
  
  filehandle = -1;
  iVar4 = 0;
  piVar3 = &DAT_10241870;
  _lock(0x12);
  local_4 = 0;
  do {
    puVar1 = (uint *)*piVar3;
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)malloc(0x480);
      if (puVar1 != (uint *)0x0) {
        DAT_10241970 = DAT_10241970 + 0x20;
        (&DAT_10241870)[local_4] = puVar1;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(byte *)(puVar1 + 1) = 0;
            puVar2 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(byte *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar2;
          } while (puVar2 < (uint *)((&DAT_10241870)[local_4] + 0x480));
        }
        filehandle = local_4 << 5;
        _lock_fhandle(filehandle);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            _lock(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            _unlock(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            filehandle = iVar4 + ((int)puVar1 - *piVar3) / 0x24;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (uint *)(*piVar3 + 0x480));
    }
    if (filehandle != -1) break;
    iVar4 = iVar4 + 0x20;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
  } while (piVar3 < &DAT_10241970);
  _unlock(0x12);
  return filehandle;
}
