// Name: __alloc_osfhnd
// Address: 10008a40
// Address Range: [[10008a40, 10008b7d]]
// Convention: __cdecl
// Signature: int __cdecl __alloc_osfhnd(void)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __alloc_osfhnd(void)

{
  uint *puVar1;
  uint *puVar2;
  int _Filehandle;
  int *piVar3;
  int iVar4;
  int local_4;
  
  _Filehandle = -1;
  iVar4 = 0;
  piVar3 = &DAT_10241870;
  __lock(0x12);
  local_4 = 0;
  do {
    puVar1 = (uint *)*piVar3;
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)FUN_10008830(0x480);
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
        _Filehandle = local_4 << 5;
        __lock_fhandle(_Filehandle);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            __lock(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            FUN_10005a10(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            _Filehandle = iVar4 + ((int)puVar1 - *piVar3) / 0x24;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (uint *)(*piVar3 + 0x480));
    }
    if (_Filehandle != -1) break;
    iVar4 = iVar4 + 0x20;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
  } while (piVar3 < &DAT_10241970);
  FUN_10005a10(0x12);
  return _Filehandle;
}
