// Name: crt_unknown.c_FUN_005c2e10
// Address: 005c2e10
// Address Range: [[005c2e10, 005c2e45]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005c2e10(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

bool FUN_005c2e10(void)

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
  return iVar2 != 0;
}
