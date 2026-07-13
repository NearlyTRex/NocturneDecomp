// Name: FUN_10011040
// Address: 10011040
// Address Range: [[10011040, 1001132c]]
// Convention: unknown
// Signature: int FUN_10011040(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,UINT param_7)

#include "nocturne.h"

int FUN_10011040(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,UINT param_7)

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
  
  local_18 = in_EAX;
  if (DAT_10018650 == 0) {
    local_18 = CompareStringA(0,0,"",1,"",1);
    if (local_18 == 0) {
      local_18 = CompareStringW(0,0,L"",1,L"",1);
      if (local_18 == 0) {
        return 0;
      }
      DAT_10018650 = 1;
    }
    else {
      DAT_10018650 = 2;
    }
  }
  if (0 < param_4) {
    local_18 = FUN_10011330(param_3,param_4);
    param_4 = local_18;
  }
  if (0 < param_6) {
    local_18 = FUN_10011330(param_5,param_6);
    param_6 = local_18;
  }
  if (DAT_10018650 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    return iVar1;
  }
  if (DAT_10018650 == 1) {
    local_18 = 0;
    local_20 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_10017770;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_6 == param_4) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < param_4) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < param_4) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          pBVar3 = pBVar3 + 2;
          local_14.LeadByte[0] = *pBVar3;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          pBVar3 = pBVar3 + 2;
          local_14.LeadByte[0] = *pBVar3;
        }
        return 2;
      }
    }
    local_14.MaxCharSize = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_14.MaxCharSize == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_10008830(local_14.MaxCharSize * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,lpWideCharStr,local_14.MaxCharSize
                               );
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar1 != 0))
        && (local_20 = (LPWSTR)FUN_10008830(iVar1 * 2), local_20 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,local_20,iVar1), iVar4 != 0))
    {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,local_14.MaxCharSize,local_20,iVar1);
    }
    FUN_10005b30(lpWideCharStr);
    FUN_10005b30(local_20);
  }
  return local_18;
}
