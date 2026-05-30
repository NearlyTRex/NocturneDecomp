// Name: crt_io.c__findfirst_FUN_006021f0
// Address: 006021f0
// Address Range: [[006021f0, 00602260]]
// Convention: __cdecl
// Signature: HANDLE __cdecl crt_io_c__findfirst_FUN_006021f0(char *filespec,_find_t *find_data)

#include "nocturne.h"

HANDLE __cdecl _findfirst(char *filespec,_find_t *find_data)

{
  HANDLE hFindFile;
  int iVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  hFindFile = (*g_FindFirstFileAFunc)(filespec,&_Stack_144);
  if (hFindFile == (HANDLE)0xffffffff) {
    __set_errno();
  }
  else {
    iVar1 = func_0x00609d5c(hFindFile,0x37,&_Stack_144);
    if (iVar1 == 0) {
      (*g_FindCloseFunc)(hFindFile);
      convertWindowsErrorToErrno(2);
      hFindFile = (HANDLE)0xffffffff;
    }
    else {
      convertFileInfo(&_Stack_144,find_data);
    }
  }
  return hFindFile;
}
