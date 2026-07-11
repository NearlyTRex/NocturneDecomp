// Name: FUN_0056ea40
// Address: 0056ea40
// Address Range: [[0056ea40, 0056ea75]]
// Convention: unknown
// Signature: bool FUN_0056ea40(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

bool FUN_0056ea40(void)

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
