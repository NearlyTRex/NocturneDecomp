// Name: __mtinitlocks
// Address: 10005900
// Address Range: [[10005900, 10005929]]
// Convention: __cdecl
// Signature: int __cdecl __mtinitlocks(void)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016cbc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016cac);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016c9c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10016c7c);
  return extraout_EAX;
}
