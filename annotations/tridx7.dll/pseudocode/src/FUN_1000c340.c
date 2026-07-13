// Name: FUN_1000c340
// Address: 1000c340
// Address Range: [[1000c340, 1000c56a]]
// Convention: unknown
// Signature: int FUN_1000c340(LCID param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6,UINT param_7)

#include "nocturne.h"

int FUN_1000c340(LCID param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6,UINT param_7)

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
  if (0 < param_4) {
    param_4 = FUN_1000c570(param_3,param_4);
  }
  if (DAT_10017918 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_10017918 != 1) {
    return DAT_10017918;
  }
  lpDestStr = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_10017770;
  }
  iVar1 = MultiByteToWideChar(param_7,9,param_3,param_4,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_10008830(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      lpDestStr = (LPCWSTR)FUN_10008830(iVar2 * 2);
      if ((lpDestStr == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,lpDestStr,iVar2), iVar1 == 0))
      goto LAB_1000c4bb;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,lpDestStr,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,lpDestStr,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_1000c552;
      if (param_6 < iVar2) goto LAB_1000c4bb;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_1000c552:
      FUN_10005b30(lpWideCharStr);
      FUN_10005b30(lpDestStr);
      return iVar2;
    }
  }
LAB_1000c4bb:
  FUN_10005b30(lpWideCharStr);
  FUN_10005b30(lpDestStr);
  return 0;
}
