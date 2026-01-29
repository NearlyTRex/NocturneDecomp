// Name: crt_io.c__findnext_FUN_00602300
// Address: 00602300
// Address Range: [[00602300, 00602377]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__findnext_FUN_00602300(HANDLE find_handle,LPWIN32_FIND_DATAA find_data)

#include "nocturne.h"

int __cdecl _findnext(HANDLE find_handle,LPWIN32_FIND_DATAA find_data)

{
  BOOL BVar1;
  int iVar2;
  _WIN32_FIND_DATAA _Stack_144;
  
  BVar1 = (*g_FindNextFileAFunc)(find_handle,&_Stack_144);
  if (BVar1 == 0) {
    __set_errno();
    iVar2 = -1;
  }
  else {
    iVar2 = findNextWithAttributes(find_handle,0x37,&_Stack_144);
    if (iVar2 == 0) {
      convertWindowsErrorToErrno(2);
      return -1;
    }
    convertFileInfo(&_Stack_144,(_find_t *)find_data);
    iVar2 = 0;
  }
  return iVar2;
}
