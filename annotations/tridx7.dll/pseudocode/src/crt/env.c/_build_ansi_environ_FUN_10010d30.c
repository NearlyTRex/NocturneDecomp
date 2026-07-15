// Name: crt_env.c__build_ansi_environ_FUN_10010d30
// Address: 10010d30
// Address Range: [[10010d30, 10010db9]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c__build_ansi_environ_FUN_10010d30(void)

#include "nocturne.h"

int __cdecl _build_ansi_environ(void)

{
  size_t size;
  char *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_10016d88;
  piVar2 = DAT_10016d88;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    size = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (size == 0) {
      return -1;
    }
    lpMultiByteStr = (char *)malloc(size);
    if (lpMultiByteStr == (char *)0x0) {
      return -1;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,lpMultiByteStr,size,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    if (iVar1 == 0) break;
    piVar2 = piVar2 + 1;
    __crtsetenv(lpMultiByteStr,0);
    iVar1 = *piVar2;
  }
  return -1;
}
