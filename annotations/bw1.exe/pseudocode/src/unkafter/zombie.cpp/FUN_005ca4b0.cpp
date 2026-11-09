// Name: unkafter_zombie.cpp_FUN_005ca4b0
// Address: 005ca4b0
// Address Range: [[005ca4b0, 005ca4e4]]
// Convention: unknown
// Signature: int unkafter_zombie_cpp_FUN_005ca4b0(LPSTR param_1)

#include "nocturne.h"

int unkafter_zombie_cpp_FUN_005ca4b0(LPSTR param_1)

{
  int iVar1;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(DAT_00626ad8,0x200,(LPCWSTR)&stack0x00000008,1,param_1,2,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar1 != 0) {
    return iVar1;
  }
  return -1;
}
