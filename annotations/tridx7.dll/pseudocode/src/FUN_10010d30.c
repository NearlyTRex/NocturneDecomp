// Name: FUN_10010d30
// Address: 10010d30
// Address Range: [[10010d30, 10010db9]]
// Convention: unknown
// Signature: undefined4 FUN_10010d30(void)

#include "nocturne.h"

uint FUN_10010d30(void)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  int *piVar2;
  
  iVar1 = *DAT_10016d88;
  piVar2 = DAT_10016d88;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (LPSTR)FUN_10008830(iVar1);
    if (lpMultiByteStr == (LPSTR)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,(LPBOOL)0x0
                               );
    if (iVar1 == 0) break;
    piVar2 = piVar2 + 1;
    FUN_10011360(lpMultiByteStr,0);
    iVar1 = *piVar2;
  }
  return 0xffffffff;
}
