// Name: FUN_1000c0f0
// Address: 1000c0f0
// Address Range: [[1000c0f0, 1000c2fb]]
// Convention: unknown
// Signature: size_t FUN_1000c0f0(LCID param_1,uint param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,size_t param_6,UINT param_7)

#include "nocturne.h"

size_t FUN_1000c0f0(LCID param_1,uint param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,size_t param_6,UINT param_7)

{
  int iVar1;
  size_t sVar2;
  LPCSTR lpMultiByteStr;
  int iVar3;
  char *lpDestStr;
  
  if (DAT_10017914 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10017914 = 2;
    }
    else {
      DAT_10017914 = 1;
    }
  }
  sVar2 = DAT_10017914;
  if (0 < param_4) {
    param_4 = FUN_1000c300(param_3,param_4);
    sVar2 = DAT_10017914;
  }
  DAT_10017914 = sVar2;
  if (sVar2 == 1) {
    sVar2 = LCMapStringW(param_1,param_2,param_3,param_4,param_5,param_6);
    return sVar2;
  }
  if (sVar2 == 2) {
    lpDestStr = (char *)0x0;
    if (param_7 == 0) {
      param_7 = DAT_10017770;
    }
    iVar1 = WideCharToMultiByte(param_7,0x220,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      return 0;
    }
    lpMultiByteStr = (LPCSTR)FUN_10008830(iVar1);
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
    iVar3 = WideCharToMultiByte(param_7,0x220,param_3,param_4,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    if ((((iVar3 != 0) &&
         (sVar2 = LCMapStringA(param_1,param_2,lpMultiByteStr,iVar1,(LPSTR)0x0,0), sVar2 != 0)) &&
        (lpDestStr = (char *)FUN_10008830(sVar2), lpDestStr != (char *)0x0)) &&
       (iVar1 = LCMapStringA(param_1,param_2,lpMultiByteStr,iVar1,lpDestStr,sVar2), iVar1 != 0)) {
      if ((param_2 & 0x400) != 0) {
        if (param_6 != 0) {
          if ((int)sVar2 <= (int)param_6) {
            param_6 = sVar2;
          }
          _strncpy((char *)param_5,lpDestStr,param_6);
        }
LAB_1000c2e3:
        FUN_10005b30(lpMultiByteStr);
        FUN_10005b30(lpDestStr);
        return sVar2;
      }
      if (param_6 == 0) {
        sVar2 = MultiByteToWideChar(param_7,1,lpDestStr,sVar2,(LPWSTR)0x0,0);
      }
      else {
        sVar2 = MultiByteToWideChar(param_7,1,lpDestStr,sVar2,param_5,param_6);
      }
      if (sVar2 != 0) goto LAB_1000c2e3;
    }
    FUN_10005b30(lpMultiByteStr);
    FUN_10005b30(lpDestStr);
    sVar2 = 0;
  }
  return sVar2;
}
