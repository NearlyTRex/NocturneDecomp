// Name: crt_locale.c___crtLCMapStringA_v2_FUN_1000c0f0
// Address: 1000c0f0
// Address Range: [[1000c0f0, 1000c2fb]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___crtLCMapStringA_v2_FUN_1000c0f0(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPSTR dest,int cch_dest,UINT code_page,BOOL error)

#include "nocturne.h"

int __cdecl __crtLCMapStringA_v2(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPSTR dest,int cch_dest,UINT code_page,BOOL error)

{
  int iVar1;
  size_t size;
  LPCSTR lpMultiByteStr;
  size_t size_00;
  char *lpDestStr;
  
  if (DAT_10017914 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10017914 = 2;
    }
    else {
      DAT_10017914 = 1;
    }
  }
  iVar1 = DAT_10017914;
  if (0 < cch_src) {
    cch_src = wcsnlen((wchar_t *)src,cch_src);
    iVar1 = DAT_10017914;
  }
  DAT_10017914 = iVar1;
  if (iVar1 == 1) {
    iVar1 = LCMapStringW(lcid,map_flags,(LPCWSTR)src,cch_src,(LPWSTR)dest,cch_dest);
    return iVar1;
  }
  if (iVar1 == 2) {
    lpDestStr = (char *)0x0;
    if (code_page == 0) {
      code_page = DAT_10017770;
    }
    size = WideCharToMultiByte(code_page,0x220,(LPCWSTR)src,cch_src,(LPSTR)0x0,0,(LPCSTR)0x0,
                               (LPBOOL)0x0);
    if (size == 0) {
      return 0;
    }
    lpMultiByteStr = malloc(size);
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(code_page,0x220,(LPCWSTR)src,cch_src,lpMultiByteStr,size,(LPCSTR)0x0
                                ,(LPBOOL)0x0);
    if ((((iVar1 != 0) &&
         (size_00 = LCMapStringA(lcid,map_flags,lpMultiByteStr,size,(LPSTR)0x0,0), size_00 != 0)) &&
        (lpDestStr = malloc(size_00), lpDestStr != (char *)0x0)) &&
       (iVar1 = LCMapStringA(lcid,map_flags,lpMultiByteStr,size,lpDestStr,size_00), iVar1 != 0)) {
      if ((map_flags & 0x400) != 0) {
        if (cch_dest != 0) {
          if ((int)size_00 <= cch_dest) {
            cch_dest = size_00;
          }
          _strncpy(dest,lpDestStr,cch_dest);
        }
LAB_1000c2e3:
        free(lpMultiByteStr);
        free(lpDestStr);
        return size_00;
      }
      if (cch_dest == 0) {
        size_00 = MultiByteToWideChar(code_page,1,lpDestStr,size_00,(LPWSTR)0x0,0);
      }
      else {
        size_00 = MultiByteToWideChar(code_page,1,lpDestStr,size_00,(LPWSTR)dest,cch_dest);
      }
      if (size_00 != 0) goto LAB_1000c2e3;
    }
    free(lpMultiByteStr);
    free(lpDestStr);
    iVar1 = 0;
  }
  return iVar1;
}
