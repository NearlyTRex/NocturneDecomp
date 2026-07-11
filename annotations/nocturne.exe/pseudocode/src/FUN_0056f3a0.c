// Name: FUN_0056f3a0
// Address: 0056f3a0
// Address Range: [[0056f3a0, 0056f3d4]]
// Convention: unknown
// Signature: int FUN_0056f3a0(LPSTR param_1)

#include "nocturne.h"

int FUN_0056f3a0(LPSTR param_1)

{
  int iVar1;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(0x00000001,0x200,(LPCWSTR)&stack0x00000008,1,param_1,2,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar1 != 0) {
    return iVar1;
  }
  return -1;
}
