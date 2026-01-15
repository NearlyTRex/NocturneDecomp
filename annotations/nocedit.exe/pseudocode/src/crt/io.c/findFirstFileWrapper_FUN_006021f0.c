// Name: crt_io.c_findFirstFileWrapper_FUN_006021f0
// Address: 006021f0
// Address Range: [[006021f0, 00602260]]
// Convention: __cdecl
// Signature: HANDLE crt_io.c_findFirstFileWrapper_FUN_006021f0(char * filespec, LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

HANDLE __cdecl
crt_io_c_findFirstFileWrapper_FUN_006021f0(char *filespec,LPWIN32_FIND_DATAA find_data)

{
  HANDLE hFindFile;
  int iVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  hFindFile = (*PTR_FindFirstFileA_0061154c)(filespec,&_Stack_144);
  if (hFindFile == (HANDLE)0xffffffff) {
    crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
  }
  else {
    iVar1 = crt_io_c_findNextWithAttributes_FUN_00609d5c(hFindFile,0x37,&_Stack_144);
    if (iVar1 == 0) {
      (*PTR_FindClose_00611548)(hFindFile);
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(2);
      hFindFile = (HANDLE)0xffffffff;
    }
    else {
      crt_io_c_convertFileInfo_FUN_00602264(&_Stack_144,(find_t *)find_data);
    }
  }
  return hFindFile;
}
