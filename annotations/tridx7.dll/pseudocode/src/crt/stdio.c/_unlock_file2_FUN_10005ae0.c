// Name: crt_stdio.c__unlock_file2_FUN_10005ae0
// Address: 10005ae0
// Address Range: [[10005ae0, 10005b07]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__unlock_file2_FUN_10005ae0(int index,void *stream)

#include "nocturne.h"

void __cdecl _unlock_file2(int index,void *stream)

{
  if (index < 0x14) {
    _unlock(index + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)stream + 0x20));
  return;
}
