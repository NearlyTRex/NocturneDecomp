// Name: crt_thread.c__lock_FUN_100059a0
// Address: 100059a0
// Address Range: [[100059a0, 10005a07]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__lock_FUN_100059a0(int file)

#include "nocturne.h"

void __cdecl _lock(int file)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10016c78 + file;
  if (*piVar1 == 0) {
    lpCriticalSection = malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      _amsg_exit(0x11);
    }
    _lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      free(lpCriticalSection);
    }
    _unlock(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}
