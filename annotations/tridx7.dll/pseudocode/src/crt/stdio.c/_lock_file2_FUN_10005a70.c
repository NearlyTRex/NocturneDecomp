// Name: crt_stdio.c__lock_file2_FUN_10005a70
// Address: 10005a70
// Address Range: [[10005a70, 10005a97]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__lock_file2_FUN_10005a70(int index,void *stream)

#include "nocturne.h"

void __cdecl _lock_file2(int index,void *stream)

{
  if (index < 0x14) {
    _lock(index + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)stream + 0x20));
  return;
}
