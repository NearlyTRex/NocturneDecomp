// Name: crt_thread.c__unlock_FUN_10005a10
// Address: 10005a10
// Address Range: [[10005a10, 10005a26]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__unlock_FUN_10005a10(int locknum)

#include "nocturne.h"

void __cdecl _unlock(int locknum)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10016c78)[locknum]);
  return;
}
