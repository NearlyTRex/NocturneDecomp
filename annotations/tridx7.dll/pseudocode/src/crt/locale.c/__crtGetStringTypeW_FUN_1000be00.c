// Name: crt_locale.c___crtGetStringTypeW_FUN_1000be00
// Address: 1000be00
// Address Range: [[1000be00, 1000bfb3]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_locale_c___crtGetStringTypeW_FUN_1000be00(DWORD info_type,LPCWSTR src,int cch_src,LPWORD char_type,UINT code_page,LCID lcid)

#include "nocturne.h"

BOOL __cdecl __crtGetStringTypeW(DWORD info_type,LPCWSTR src,int cch_src,LPWORD char_type,UINT code_page,LCID lcid)

{
  LPWORD pWVar1;
  BOOL in_EAX;
  BOOL BVar2;
  size_t size;
  LPCSTR lpMultiByteStr;
  int iVar3;
  LPWORD lpCharType;
  BOOL local_4;
  
  local_4 = in_EAX;
  if (DAT_1001790c == 0) {
    local_4 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (local_4 == 0) {
      local_4 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (local_4 == 0) {
        return 0;
      }
      DAT_1001790c = 2;
    }
    else {
      DAT_1001790c = 1;
    }
  }
  if (DAT_1001790c != 1) {
    if (DAT_1001790c == 2) {
      lpCharType = (LPWORD)0x0;
      local_4 = 0;
      if (code_page == 0) {
        code_page = DAT_10017770;
      }
      size = WideCharToMultiByte(code_page,0x220,src,cch_src,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if (size == 0) {
        return 0;
      }
      lpMultiByteStr = calloc(1,size);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        return 0;
      }
      iVar3 = WideCharToMultiByte(code_page,0x220,src,cch_src,lpMultiByteStr,size,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if ((iVar3 != 0) &&
         (lpCharType = malloc(size * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (lcid == 0) {
          lcid = DAT_10017760;
        }
        pWVar1 = lpCharType + cch_src;
        *pWVar1 = 0xffff;
        pWVar1[-1] = 0xffff;
        local_4 = GetStringTypeA(lcid,info_type,lpMultiByteStr,size,lpCharType);
        if ((pWVar1[-1] == 0xffff) || (*pWVar1 != 0xffff)) {
          local_4 = 0;
        }
        else {
          memcpy(char_type,lpCharType,cch_src * 2);
        }
      }
      free(lpMultiByteStr);
      free(lpCharType);
    }
    return local_4;
  }
  BVar2 = GetStringTypeW(info_type,src,cch_src,char_type);
  return BVar2;
}
