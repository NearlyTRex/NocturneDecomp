// Name: crt_locale.c___crtCompareStringA_FUN_10011040
// Address: 10011040
// Address Range: [[10011040, 1001132c]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___crtCompareStringA_FUN_10011040(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,int code_page)

#include "nocturne.h"

int __cdecl __crtCompareStringA(LCID lcid,DWORD flags,LPCSTR str1,int cch1,LPCSTR str2,int cch2,int code_page)

{
  int in_EAX;
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  LPWSTR local_20;
  int local_18;
  _cpinfo local_14;
  
  if (DAT_10018650 == 0) {
    in_EAX = CompareStringA(0,0,"",1,"",1);
    if (in_EAX == 0) {
      in_EAX = CompareStringW(0,0,L"",1,L"",1);
      if (in_EAX == 0) {
        return 0;
      }
      DAT_10018650 = 1;
    }
    else {
      DAT_10018650 = 2;
    }
  }
  local_18 = in_EAX;
  if (0 < cch1) {
    local_18 = strncnt(str1,cch1);
    cch1 = local_18;
  }
  if (0 < cch2) {
    local_18 = strncnt(str2,cch2);
    cch2 = local_18;
  }
  if (DAT_10018650 == 2) {
    iVar1 = CompareStringA(lcid,flags,str1,cch1,str2,cch2);
    return iVar1;
  }
  if (DAT_10018650 == 1) {
    local_18 = 0;
    local_20 = (LPWSTR)0x0;
    if (code_page == 0) {
      code_page = DAT_10017770;
    }
    if ((cch1 == 0) || (cch2 == 0)) {
      if (cch2 == cch1) {
        return 2;
      }
      if (1 < cch2) {
        return 1;
      }
      if (1 < cch1) {
        return 3;
      }
      BVar2 = GetCPInfo(code_page,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < cch1) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= (byte)*str1) && ((byte)*str1 <= pBVar3[1])) break;
          pBVar3 = pBVar3 + 2;
          local_14.LeadByte[0] = *pBVar3;
        }
        return 2;
      }
      if (0 < cch2) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= (byte)*str2) && ((byte)*str2 <= pBVar3[1])) break;
          pBVar3 = pBVar3 + 2;
          local_14.LeadByte[0] = *pBVar3;
        }
        return 2;
      }
    }
    local_14.MaxCharSize = MultiByteToWideChar(code_page,9,str1,cch1,(LPWSTR)0x0,0);
    if (local_14.MaxCharSize == 0) {
      return 0;
    }
    lpWideCharStr = malloc(local_14.MaxCharSize * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(code_page,1,str1,cch1,lpWideCharStr,local_14.MaxCharSize);
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(code_page,9,str2,cch2,(LPWSTR)0x0,0), iVar1 != 0)) &&
        (local_20 = malloc(iVar1 * 2), local_20 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(code_page,1,str2,cch2,local_20,iVar1), iVar4 != 0)) {
      local_18 = CompareStringW(lcid,flags,lpWideCharStr,local_14.MaxCharSize,local_20,iVar1);
    }
    free(lpWideCharStr);
    free(local_20);
  }
  return local_18;
}
