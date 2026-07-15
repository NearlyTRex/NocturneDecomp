// Name: crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0
// Address: 1000f9a0
// Address Range: [[1000f9a0, 1000facd]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___crtGetLocaleInfoW_FUN_1000f9a0(LCID lcid,LCTYPE lc_type,LPWSTR dest,int cch,UINT code_page)

#include "nocturne.h"

int __cdecl __crtGetLocaleInfoW(LCID lcid,LCTYPE lc_type,LPWSTR dest,int cch,UINT code_page)

{
  int iVar1;
  size_t size;
  LPSTR lpLCData;
  
  iVar1 = DAT_10018254;
  if (DAT_10018254 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  DAT_10018254 = iVar1;
  if (iVar1 == 1) {
    iVar1 = GetLocaleInfoW(lcid,lc_type,dest,cch);
    return iVar1;
  }
  if (iVar1 == 2) {
    if (code_page == 0) {
      code_page = DAT_10017770;
    }
    size = GetLocaleInfoA(lcid,lc_type,(LPSTR)0x0,0);
    if (size == 0) {
      return 0;
    }
    lpLCData = malloc(size);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(lcid,lc_type,lpLCData,size);
    if (iVar1 != 0) {
      if (cch == 0) {
        iVar1 = MultiByteToWideChar(code_page,1,lpLCData,-1,(LPWSTR)0x0,0);
      }
      else {
        iVar1 = MultiByteToWideChar(code_page,1,lpLCData,-1,dest,cch);
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
