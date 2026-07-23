// Name: crt_stdlib.c__fullpath_FUN_00565d00
// Address: 00565d00
// Address Range: [[00565d00, 00565dbf]]
// Convention: __cdecl
// Signature: __cdecl char(*) [4] crt_stdlib_c__fullpath_FUN_00565d00(char(*param_1) [4],LPCSTR param_2,uint param_3)

#include "nocturne.h"

__cdecl char(*) [4] _fullpath(char(*param_1) [4],LPCSTR param_2,uint param_3)

{
  char (*pacVar1) [4];
  int iVar2;
  DWORD DVar3;
  char (*unaff_EBP) [4];
  LPSTR pCStack_14;
  
  if (param_1 == (char (*) [4])0x0) {
    param_3 = 0x104;
    param_1 = (char (*) [4])malloc(0x104);
    unaff_EBP = param_1;
    if (param_1 == (char (*) [4])0x0) {
      FUN_00568e80(5);
      return (char (*) [4])0x0;
    }
  }
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    iVar2 = _stricmp(param_2,"con");
    if (iVar2 == 0) {
      if (param_3 < 4) {
        FUN_005638d0(unaff_EBP);
        FUN_00568e80(0xe);
        return (char (*) [4])0x0;
      }
      *param_1 = "con";
    }
    else {
      DVar3 = GetFullPathNameA(param_2,param_3,*param_1,&pCStack_14);
      if (DVar3 == 0) {
        __set_errno();
        return (char (*) [4])0x0;
      }
    }
    return param_1;
  }
  pacVar1 = (char (*) [4])FUN_0056c5f0(param_1,param_3);
  return pacVar1;
}
