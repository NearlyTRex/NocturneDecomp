// Name: unkafter_zombie.cpp_FUN_005cb110
// Address: 005cb110
// Address Range: [[005cb110, 005cb145]]
// Convention: unknown
// Signature: bool unkafter_zombie_cpp_FUN_005cb110(void)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

bool unkafter_zombie_cpp_FUN_005cb110(void)

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
