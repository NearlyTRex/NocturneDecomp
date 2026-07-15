// Name: crt_locale.c__wctomb_lk_FUN_10009240
// Address: 10009240
// Address Range: [[10009240, 100092d3]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c__wctomb_lk_FUN_10009240(LPSTR mbchar,WCHAR wchar)

#include "nocturne.h"

int __cdecl _wctomb_lk(LPSTR mbchar,WCHAR wchar)

{
  int *piVar1;
  int iVar2;
  BOOL local_4;
  
  if (mbchar == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10017760 == 0) {
    if (0xff < (ushort)wchar) {
      piVar1 = _errno();
      *piVar1 = 0x2a;
      return -1;
    }
    *mbchar = (CHAR)wchar;
    return 1;
  }
  local_4 = 0;
  iVar2 = WideCharToMultiByte(DAT_10017770,0x220,&wchar,1,mbchar,DAT_10017690,(LPCSTR)0x0,&local_4);
  if ((iVar2 == 0) || (local_4 != 0)) {
    piVar1 = _errno();
    *piVar1 = 0x2a;
    iVar2 = -1;
  }
  return iVar2;
}
