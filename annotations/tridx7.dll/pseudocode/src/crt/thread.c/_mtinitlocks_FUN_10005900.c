// Name: crt_thread.c__mtinitlocks_FUN_10005900
// Address: 10005900
// Address Range: [[10005900, 10005929]]
// Convention: __cdecl
// Signature: int __cdecl crt_thread_c__mtinitlocks_FUN_10005900(void)

#include "nocturne.h"

int __cdecl _mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection(LPCRITICAL_SECTION_10016cbc);
  InitializeCriticalSection(LPCRITICAL_SECTION_10016cac);
  InitializeCriticalSection(LPCRITICAL_SECTION_10016c9c);
  InitializeCriticalSection(LPCRITICAL_SECTION_10016c7c);
  return extraout_EAX;
}
