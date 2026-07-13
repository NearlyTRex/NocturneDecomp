// Name: FUN_1000f9a0
// Address: 1000f9a0
// Address Range: [[1000f9a0, 1000facd]]
// Convention: unknown
// Signature: int FUN_1000f9a0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

#include "nocturne.h"

int FUN_1000f9a0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
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
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (iVar1 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_10017770;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpLCData = (LPSTR)FUN_10008830(iVar1);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
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
