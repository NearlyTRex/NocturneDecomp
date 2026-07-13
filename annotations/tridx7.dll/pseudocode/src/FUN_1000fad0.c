// Name: FUN_1000fad0
// Address: 1000fad0
// Address Range: [[1000fad0, 1000fc0e]]
// Convention: unknown
// Signature: int FUN_1000fad0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

#include "nocturne.h"

int FUN_1000fad0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

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
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (iVar1 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_10017770;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpLCData = (LPWSTR)FUN_10008830(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
      }
      if (iVar1 != 0) {
        FUN_10005b30(lpLCData);
        return iVar1;
      }
    }
    FUN_10005b30(lpLCData);
    iVar1 = 0;
  }
  return iVar1;
}
