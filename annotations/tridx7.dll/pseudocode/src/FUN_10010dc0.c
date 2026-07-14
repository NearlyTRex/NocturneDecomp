// Name: FUN_10010dc0
// Address: 10010dc0
// Address Range: [[10010dc0, 10010ffa]]
// Convention: unknown
// Signature: int FUN_10010dc0(LCID param_1,DWORD param_2,PCNZWCH param_3,int param_4,LPCWSTR param_5,int param_6,UINT param_7)

#include "nocturne.h"

int FUN_10010dc0(LCID param_1,DWORD param_2,PCNZWCH param_3,int param_4,LPCWSTR param_5,int param_6,UINT param_7)

{
  int in_EAX;
  int iVar1;
  PCNZCH lpMultiByteStr;
  int iVar2;
  int iVar3;
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
  if (0 < param_4) {
    in_EAX = FUN_10011000(param_3,param_4);
    param_4 = in_EAX;
  }
  if (0 < param_6) {
    in_EAX = FUN_10011000(param_5,param_6);
    param_6 = in_EAX;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    if (param_6 == param_4) {
      return 2;
    }
    in_EAX = 3;
    if (param_4 - param_6 < 0) {
      in_EAX = 1;
    }
  }
  else {
    if (DAT_1001864c == 1) {
      iVar1 = CompareStringW(param_1,param_2,param_3,param_4,param_5,param_6);
      return iVar1;
    }
    if (DAT_1001864c == 2) {
      lpMultiByteStr_00 = (LPSTR)0x0;
      if (param_7 == 0) {
        param_7 = DAT_10017770;
      }
      iVar1 = WideCharToMultiByte(param_7,0x220,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar1 == 0) {
        return 0;
      }
      lpMultiByteStr = (PCNZCH)FUN_10008830(iVar1);
      if (lpMultiByteStr == (PCNZCH)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_7,0x220,param_3,param_4,lpMultiByteStr,iVar1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if ((((iVar2 != 0) &&
           (iVar2 = WideCharToMultiByte(param_7,0x220,param_5,param_6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0), iVar2 != 0)) &&
          (lpMultiByteStr_00 = (LPSTR)FUN_10008830(iVar2), lpMultiByteStr_00 != (LPSTR)0x0)) &&
         (iVar3 = WideCharToMultiByte(param_7,0x220,param_5,param_6,lpMultiByteStr_00,iVar2,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar3 != 0)) {
        iVar1 = CompareStringA(param_1,param_2,lpMultiByteStr,iVar1,lpMultiByteStr_00,iVar2);
        FUN_10005b30(lpMultiByteStr);
        FUN_10005b30(lpMultiByteStr_00);
        return iVar1;
      }
      FUN_10005b30(lpMultiByteStr);
      FUN_10005b30(lpMultiByteStr_00);
      return 0;
    }
  }
  return in_EAX;
}
