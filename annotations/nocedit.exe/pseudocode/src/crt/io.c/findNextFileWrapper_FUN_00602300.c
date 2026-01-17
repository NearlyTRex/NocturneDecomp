// Name: crt_io.c_findNextFileWrapper_FUN_00602300
// Address: 00602300
// Address Range: [[00602300, 00602377]]
// Convention: __cdecl
// Signature: int crt_io.c_findNextFileWrapper_FUN_00602300(HANDLE find_handle, LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

int __cdecl
crt_io_c_findNextFileWrapper_FUN_00602300(HANDLE find_handle,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  int iVar2;
  _WIN32_FIND_DATAA _Stack_144;
  
  BVar1 = (*g_FindNextFileAFunc)(find_handle,&_Stack_144);
  if (BVar1 == 0) {
    crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    iVar2 = -1;
  }
  else {
    iVar2 = crt_io_c_findNextWithAttributes_FUN_00609d5c(find_handle,0x37,&_Stack_144);
    if (iVar2 == 0) {
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(2);
      return -1;
    }
    crt_io_c_convertFileInfo_FUN_00602264(&_Stack_144,(find_t *)find_data);
    iVar2 = 0;
  }
  return iVar2;
}
