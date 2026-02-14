// Name: crt_io.c_findNextWithAttributes_FUN_00609d5c
// Address: 00609d5c
// Address Range: [[00609d5c, 00609d93]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_findNextWithAttributes_FUN_00609d5c(HANDLE hFindFile,DWORD dwAttributeMask,LPWIN32_FIND_DATAA lpFindFileData)

#include "nocturne.h"

int __cdecl findNextWithAttributes(HANDLE hFindFile,DWORD dwAttributeMask,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
  while( true ) {
    if (lpFindFileData->dwFileAttributes == 0) {
      lpFindFileData->dwFileAttributes = 0x80;
    }
    if ((lpFindFileData->dwFileAttributes & dwAttributeMask) != 0) break;
    BVar1 = (*g_FindNextFileAFunc)(hFindFile,lpFindFileData);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
