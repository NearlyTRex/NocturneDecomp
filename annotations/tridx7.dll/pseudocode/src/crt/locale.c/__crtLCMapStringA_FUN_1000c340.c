// Name: crt_locale.c___crtLCMapStringA_FUN_1000c340
// Address: 1000c340
// Address Range: [[1000c340, 1000c56a]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___crtLCMapStringA_FUN_1000c340(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPWSTR dest,int cch_dest,UINT code_page)

#include "nocturne.h"

int __cdecl __crtLCMapStringA(LCID lcid,DWORD map_flags,LPCSTR src,int cch_src,LPWSTR dest,int cch_dest,UINT code_page)

{
  int iVar1;
  LPCWSTR lpWideCharStr;
  int iVar2;
  LPCWSTR lpDestStr;
  
  if (DAT_10017918 == 0) {
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10017918 = 1;
    }
    else {
      DAT_10017918 = 2;
    }
  }
  if (0 < cch_src) {
    cch_src = _strncnt(src,cch_src);
  }
  if (DAT_10017918 == 2) {
    iVar1 = LCMapStringA(lcid,map_flags,src,cch_src,(LPSTR)dest,cch_dest);
    return iVar1;
  }
  if (DAT_10017918 != 1) {
    return DAT_10017918;
  }
  lpDestStr = (LPCWSTR)0x0;
  if (code_page == 0) {
    code_page = DAT_10017770;
  }
  iVar1 = MultiByteToWideChar(code_page,9,src,cch_src,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = malloc(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(code_page,1,src,cch_src,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(lcid,map_flags,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((map_flags & 0x400) == 0) {
      lpDestStr = malloc(iVar2 * 2);
      if ((lpDestStr == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(lcid,map_flags,lpWideCharStr,iVar1,lpDestStr,iVar2), iVar1 == 0))
      goto LAB_1000c4bb;
      if (cch_dest == 0) {
        iVar2 = WideCharToMultiByte(code_page,0x220,lpDestStr,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(code_page,0x220,lpDestStr,iVar2,(LPSTR)dest,cch_dest,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (cch_dest == 0) goto LAB_1000c552;
      if (cch_dest < iVar2) goto LAB_1000c4bb;
      iVar1 = LCMapStringW(lcid,map_flags,lpWideCharStr,iVar1,dest,cch_dest);
    }
    if (iVar1 != 0) {
LAB_1000c552:
      free(lpWideCharStr);
      free(lpDestStr);
      return iVar2;
    }
  }
LAB_1000c4bb:
  free(lpWideCharStr);
  free(lpDestStr);
  return 0;
}
