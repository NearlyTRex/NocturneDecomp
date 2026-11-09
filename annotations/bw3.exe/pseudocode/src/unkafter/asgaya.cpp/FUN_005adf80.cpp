// Name: unkafter_asgaya.cpp_FUN_005adf80
// Address: 005adf80
// Address Range: [[005adf80, 005adfb5]]
// Convention: unknown
// Signature: bool unkafter_asgaya_cpp_FUN_005adf80(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

bool unkafter_asgaya_cpp_FUN_005adf80(void)

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
