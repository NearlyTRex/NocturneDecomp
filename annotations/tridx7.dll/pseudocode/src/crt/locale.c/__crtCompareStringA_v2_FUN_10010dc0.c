// Name: crt_locale.c___crtCompareStringA_v2_FUN_10010dc0
// Address: 10010dc0
// Address Range: [[10010dc0, 10010ffa]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___crtCompareStringA_v2_FUN_10010dc0(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,UINT code_page)

#include "nocturne.h"

int __cdecl __crtCompareStringA_v2(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,UINT code_page)

{
  int in_EAX;
  int iVar1;
  size_t size;
  PCNZCH lpMultiByteStr;
  size_t size_00;
  LPSTR lpMultiByteStr_00;
  
  if (DAT_1001864c == 0) {
    in_EAX = CompareStringW(0,0,L"",1,L"",1);
    if (in_EAX == 0) {
      in_EAX = CompareStringA(0,0,"",1,"",1);
      if (in_EAX == 0) {
        return 0;
      }
      DAT_1001864c = 2;
    }
    else {
      DAT_1001864c = 1;
    }
  }
  if (0 < cch1) {
    in_EAX = wcsnlen_v3((wchar_t *)str1,cch1);
    cch1 = in_EAX;
  }
  if (0 < cch2) {
    in_EAX = wcsnlen_v3((wchar_t *)str2,cch2);
    cch2 = in_EAX;
  }
  if ((cch1 == 0) || (cch2 == 0)) {
    if (cch2 == cch1) {
      return 2;
    }
    in_EAX = 3;
    if (cch1 - cch2 < 0) {
      in_EAX = 1;
    }
  }
  else {
    if (DAT_1001864c == 1) {
      iVar1 = CompareStringW(lcid,flags,(PCNZWCH)str1,cch1,(PCNZWCH)str2,cch2);
      return iVar1;
    }
    if (DAT_1001864c == 2) {
      lpMultiByteStr_00 = (LPSTR)0x0;
      if (code_page == 0) {
        code_page = DAT_10017770;
      }
      size = WideCharToMultiByte(code_page,0x220,(LPCWSTR)str1,cch1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
      if (size == 0) {
        return 0;
      }
      lpMultiByteStr = malloc(size);
      if (lpMultiByteStr == (PCNZCH)0x0) {
        return 0;
      }
      iVar1 = WideCharToMultiByte(code_page,0x220,(LPCWSTR)str1,cch1,lpMultiByteStr,size,(LPCSTR)0x0
                                  ,(LPBOOL)0x0);
      if ((((iVar1 != 0) &&
           (size_00 = WideCharToMultiByte(code_page,0x220,(LPCWSTR)str2,cch2,(LPSTR)0x0,0,
                                          (LPCSTR)0x0,(LPBOOL)0x0), size_00 != 0)) &&
          (lpMultiByteStr_00 = malloc(size_00),
          lpMultiByteStr_00 != (LPSTR)0x0)) &&
         (iVar1 = WideCharToMultiByte(code_page,0x220,(LPCWSTR)str2,cch2,lpMultiByteStr_00,size_00,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0)) {
        iVar1 = CompareStringA(lcid,flags,lpMultiByteStr,size,lpMultiByteStr_00,size_00);
        free(lpMultiByteStr);
        free(lpMultiByteStr_00);
        return iVar1;
      }
      free(lpMultiByteStr);
      free(lpMultiByteStr_00);
      return 0;
    }
  }
  return in_EAX;
}
