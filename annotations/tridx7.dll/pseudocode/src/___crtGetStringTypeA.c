// Name: ___crtGetStringTypeA
// Address: 1000bfc0
// Address Range: [[1000bfc0, 1000c0e2]]
// Convention: __cdecl
// Signature: BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError)

#include "nocturne.h"

/* Library Function - Single Match
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  iVar3 = DAT_10017910;
  if (DAT_10017910 == 0) {
    BVar1 = GetStringTypeA(0,1,"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
  }
  DAT_10017910 = iVar3;
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      BVar1 = 0;
      lpWideCharStr = (LPCWSTR)0x0;
      if (_LpCharType == (LPWORD)0x0) {
        _LpCharType = DAT_10017770;
      }
      iVar2 = MultiByteToWideChar((UINT)_LpCharType,9,(LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0
                                  ,0);
      iVar3 = BVar1;
      if (((iVar2 != 0) &&
          (lpWideCharStr = (LPCWSTR)FUN_1000a750(2,iVar2), lpWideCharStr != (LPCWSTR)0x0)) &&
         (iVar2 = MultiByteToWideChar((UINT)_LpCharType,1,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                      lpWideCharStr,iVar2), iVar2 != 0)) {
        iVar3 = GetStringTypeW((DWORD)_Plocinfo,lpWideCharStr,iVar2,(LPWORD)_CchSrc);
      }
      FUN_10005b30(lpWideCharStr);
    }
    return iVar3;
  }
  if (_Code_page == 0) {
    _Code_page = DAT_10017760;
  }
  BVar1 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                         (LPWORD)_CchSrc);
  return BVar1;
}
