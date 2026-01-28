// Name: crt_startup.c_GetModuleFileNameCompat_FUN_0060a560
// Address: 0060a560
// Address Range: [[0060a560, 0060a603]]
// Convention: __cdecl
// Signature: DWORD __cdecl crt_startup_c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

#include "nocturne.h"

DWORD __cdecl
crt_startup_c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  ulong lpFilename_00;
  int iVar2;
  
  DVar1 = (*g_GetVersionFunc)();
  if ((ushort)(DVar1 >> 0x10) < 0x8000) {
    DVar1 = (*g_GetModuleFileNameWFunc)(hModule,lpFilename,nSize);
    return DVar1;
  }
  lpFilename_00 = (ulong)crt_memory_c_malloc_FUN_00601bb0(0x208);
  DVar1 = 0;
  if (lpFilename_00 != 0) {
    DVar1 = (*g_GetModuleFileNameAFunc)(hModule,(LPSTR)lpFilename_00,0x208);
    if (DVar1 == 0) {
      crt_memory_c_free_FUN_00601cd0((void *)lpFilename_00);
      return 0;
    }
    iVar2 = (*g_MultiByteToWideCharFunc)(1,1,(LPCSTR)lpFilename_00,-1,lpFilename,nSize);
    crt_memory_c_free_FUN_00601cd0((void *)lpFilename_00);
    if (iVar2 == 0) {
      return 0;
    }
    lpFilename[nSize - 1] = L'\0';
    DVar1 = crt_string_c_wcslen_FUN_0060cd30(lpFilename);
  }
  return DVar1;
}
