// Name: FUN_0058fec0
// Address: 0058fec0
// Address Range: [[0058fec0, 0058ff35]]
// Convention: unknown
// Signature: void FUN_0058fec0(LPCSTR param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4)

#include "nocturne.h"

void FUN_0058fec0(LPCSTR param_1,LPCSTR param_2,LPBYTE param_3,DWORD param_4)

{
  LSTATUS LVar1;
  HKEY pHStack_10;
  DWORD aDStack_c [2];
  
  *param_3 = '\0';
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,param_1,0,1,&pHStack_10);
  if (LVar1 != 0) {
    return;
  }
  aDStack_c[0] = param_4;
  aDStack_c[1] = 1;
  RegQueryValueExA(pHStack_10,param_2,(LPDWORD)0x0,aDStack_c + 1,param_3,aDStack_c);
  RegCloseKey(pHStack_10);
  return;
}
