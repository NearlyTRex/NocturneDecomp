// Name: crt_stdlib.c__fullpath_FUN_00565d00
// Address: 00565d00
// Address Range: [[00565d00, 00565dbf]]
// Convention: __cdecl
// Signature: LPSTR __cdecl crt_stdlib_c__fullpath_FUN_00565d00(LPSTR param_1,LPCSTR param_2,uint param_3)

#include "nocturne.h"

LPSTR __cdecl _fullpath(LPSTR param_1,LPCSTR param_2,uint param_3)

{
  LPSTR pCVar1;
  int iVar2;
  DWORD DVar3;
  LPSTR unaff_EBP;
  LPSTR pCStack_14;
  
  if (param_1 == (LPSTR)0x0) {
    param_3 = 0x104;
    param_1 = (LPSTR)malloc(0x104);
    unaff_EBP = param_1;
    if (param_1 == (LPSTR)0x0) {
      FUN_00568e80(5);
      return (LPSTR)0x0;
    }
  }
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    iVar2 = _stricmp(param_2,&DAT_005989e4);
    if (iVar2 == 0) {
      if (param_3 < 4) {
        FUN_005638d0(unaff_EBP);
        FUN_00568e80(0xe);
        return (LPSTR)0x0;
      }
      *(uint *)param_1 = 0x006E6F63;
    }
    else {
      DVar3 = GetFullPathNameA(param_2,param_3,param_1,&pCStack_14);
      if (DVar3 == 0) {
        __set_errno();
        return (LPSTR)0x0;
      }
    }
    return param_1;
  }
  pCVar1 = (LPSTR)FUN_0056c5f0(param_1,param_3);
  return pCVar1;
}
