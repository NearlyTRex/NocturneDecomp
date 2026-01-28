// Name: crt_windows.c_has_active_window_FUN_0060a710
// Address: 0060a710
// Address Range: [[0060a710, 0060a745]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_windows_c_has_active_window_FUN_0060a710(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

BOOL __cdecl crt_windows_c_has_active_window_FUN_0060a710(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = (*g_LoadLibraryAFunc)("USER32.DLL");
  iVar2 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = (*g_GetProcAddressFunc)(hModule,"GetActiveWindow");
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)();
    }
  }
  return (uint)(iVar2 != 0);
}
