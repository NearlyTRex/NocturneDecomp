// Name: crt_stdlib.c__wcstombs_lk_FUN_10010970
// Address: 10010970
// Address Range: [[10010970, 10010bd9]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_stdlib_c__wcstombs_lk_FUN_10010970(char *mbstr,wchar_t *wcstr,size_t count)

#include "nocturne.h"

size_t __cdecl _wcstombs_lk(char *mbstr,wchar_t *wcstr,size_t count)

{
  char cVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  CHAR local_6 [2];
  BOOL local_4;
  
  sVar2 = 0;
  local_4 = 0;
  if ((mbstr != (char *)0x0) && (count == 0)) {
    return sVar2;
  }
  if (mbstr == (char *)0x0) {
    if (DAT_10017760 == 0) {
      sVar2 = wcslen(wcstr);
      return sVar2;
    }
    iVar4 = WideCharToMultiByte(DAT_10017770,0x220,wcstr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      return iVar4 - 1;
    }
    piVar3 = _errno();
    *piVar3 = 0x2a;
    sVar2 = 0xffffffff;
  }
  else if (DAT_10017760 == 0) {
    if (count != 0) {
      while( true ) {
        if (0xff < (ushort)*wcstr) {
          piVar3 = _errno();
          *piVar3 = 0x2a;
          return 0xffffffff;
        }
        mbstr[sVar2] = (char)*wcstr;
        if (*wcstr == L'\0') break;
        sVar2 = sVar2 + 1;
        wcstr = wcstr + 1;
        if (count <= sVar2) {
          return sVar2;
        }
      }
    }
  }
  else {
    if (DAT_10017690 != 1) {
      iVar4 = WideCharToMultiByte(DAT_10017770,0x220,wcstr,-1,mbstr,count,(LPCSTR)0x0,&local_4);
      if (iVar4 == 0) {
        if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
          sVar2 = 0;
          if (count != 0) {
            do {
              iVar4 = WideCharToMultiByte(DAT_10017770,0,wcstr,1,local_6,DAT_10017690,(LPCSTR)0x0,
                                          &local_4);
              if ((iVar4 == 0) || (local_4 != 0)) {
                piVar3 = _errno();
                *piVar3 = 0x2a;
                return 0xffffffff;
              }
              if (count < sVar2 + iVar4) {
                return sVar2;
              }
              iVar6 = 0;
              if (0 < iVar4) {
                do {
                  cVar1 = local_6[iVar6];
                  mbstr[sVar2] = cVar1;
                  if (cVar1 == '\0') {
                    return sVar2;
                  }
                  iVar6 = iVar6 + 1;
                  sVar2 = sVar2 + 1;
                } while (iVar6 < iVar4);
              }
              wcstr = wcstr + 1;
            } while (sVar2 < count);
          }
          return sVar2;
        }
      }
      else if (local_4 == 0) {
        return iVar4 - 1;
      }
      piVar3 = _errno();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    if (count == 0) {
      sVar2 = 0;
    }
    else {
      sVar2 = _wcsnlen(wcstr,count);
    }
    sVar2 = WideCharToMultiByte(DAT_10017770,0x220,wcstr,sVar2,mbstr,sVar2,(LPCSTR)0x0,&local_4);
    if ((sVar2 == 0) || (local_4 != 0)) {
      piVar3 = _errno();
      *piVar3 = 0x2a;
      return 0xffffffff;
    }
    if (mbstr[sVar2 - 1] == '\0') {
      return sVar2 - 1;
    }
  }
  return sVar2;
}
