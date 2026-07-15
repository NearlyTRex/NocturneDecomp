// Name: crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0
// Address: 1000fad0
// Address Range: [[1000fad0, 1000fc0e]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid,LCTYPE lc_type,LPSTR dest,int cch,UINT code_page)

#include "nocturne.h"

int __cdecl __crtGetLocaleInfoA(LCID lcid,LCTYPE lc_type,LPSTR dest,int cch,UINT code_page)

{
  int iVar1;
  LPWSTR lpLCData;
  
  iVar1 = DAT_10018258;
  if (DAT_10018258 == 0) {
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
  }
  DAT_10018258 = iVar1;
  if (iVar1 == 2) {
    iVar1 = GetLocaleInfoA(lcid,lc_type,dest,cch);
    return iVar1;
  }
  if (iVar1 == 1) {
    if (code_page == 0) {
      code_page = DAT_10017770;
    }
    iVar1 = GetLocaleInfoW(lcid,lc_type,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpLCData = malloc(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(lcid,lc_type,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (cch == 0) {
        iVar1 = WideCharToMultiByte(code_page,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
      }
      else {
        iVar1 = WideCharToMultiByte(code_page,0x220,lpLCData,-1,dest,cch,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      if (iVar1 != 0) {
        free(lpLCData);
        return iVar1;
      }
    }
    free(lpLCData);
    iVar1 = 0;
  }
  return iVar1;
}
