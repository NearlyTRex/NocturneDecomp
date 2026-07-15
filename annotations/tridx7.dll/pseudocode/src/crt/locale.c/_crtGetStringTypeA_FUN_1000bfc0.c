// Name: crt_locale.c__crtGetStringTypeA_FUN_1000bfc0
// Address: 1000bfc0
// Address Range: [[1000bfc0, 1000c0e2]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_locale_c__crtGetStringTypeA_FUN_1000bfc0(_locale_t plocinfo,DWORD dw_info_type,LPCSTR lp_src_str,int cch_src,LPWORD lp_char_type,int code_page,BOOL b_error)

#include "nocturne.h"

BOOL __cdecl _crtGetStringTypeA(_locale_t plocinfo,DWORD dw_info_type,LPCSTR lp_src_str,int cch_src,LPWORD lp_char_type,int code_page,BOOL b_error)

{
  BOOL BVar1;
  size_t size;
  int cchSrc;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  iVar2 = DAT_10017910;
  if (DAT_10017910 == 0) {
    BVar1 = GetStringTypeA(0,1,"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
  }
  DAT_10017910 = iVar2;
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      BVar1 = 0;
      lpWideCharStr = (LPCWSTR)0x0;
      if (lp_char_type == (LPWORD)0x0) {
        lp_char_type = DAT_10017770;
      }
      size = MultiByteToWideChar((UINT)lp_char_type,9,(LPCSTR)dw_info_type,(int)lp_src_str,
                                 (LPWSTR)0x0,0);
      iVar2 = BVar1;
      if (((size != 0) &&
          (lpWideCharStr = calloc(2,size), lpWideCharStr != (LPCWSTR)0x0))
         && (cchSrc = MultiByteToWideChar((UINT)lp_char_type,1,(LPCSTR)dw_info_type,(int)lp_src_str,
                                          lpWideCharStr,size), cchSrc != 0)) {
        iVar2 = GetStringTypeW((DWORD)plocinfo,lpWideCharStr,cchSrc,(LPWORD)cch_src);
      }
      free(lpWideCharStr);
    }
    return iVar2;
  }
  if (code_page == 0) {
    code_page = DAT_10017760;
  }
  BVar1 = GetStringTypeA(code_page,(DWORD)plocinfo,(LPCSTR)dw_info_type,(int)lp_src_str,
                         (LPWORD)cch_src);
  return BVar1;
}
