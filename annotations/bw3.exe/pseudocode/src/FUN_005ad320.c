// Name: FUN_005ad320
// Address: 005ad320
// Address Range: [[005ad320, 005ad354]]
// Convention: unknown
// Signature: int FUN_005ad320(LPSTR param_1)

#include "nocturne.h"

int FUN_005ad320(LPSTR param_1)

{
  int iVar1;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(DAT_00607e7c,0x200,(LPCWSTR)&stack0x00000008,1,param_1,2,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar1 != 0) {
    return iVar1;
  }
  return -1;
}
