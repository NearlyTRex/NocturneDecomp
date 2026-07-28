// Name: crt_windows.c_has_active_window_FUN_0056ea40
// Address: 0056ea40
// Address Range: [[0056ea40, 0056ea75]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_windows_c_has_active_window_FUN_0056ea40(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

BOOL __cdecl has_active_window(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = LoadLibraryA("USER32.DLL");
  iVar2 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)();
    }
  }
  return (uint)(iVar2 != 0);
}
