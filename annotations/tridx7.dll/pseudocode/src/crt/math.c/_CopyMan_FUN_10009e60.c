// Name: crt_math.c__CopyMan_FUN_10009e60
// Address: 10009e60
// Address Range: [[10009e60, 10009e7c]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__CopyMan_FUN_10009e60(int *dst,int *src)

#include "nocturne.h"

void __cdecl _CopyMan(int *dst,int *src)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    iVar1 = *src;
    src = src + 1;
    *dst = iVar1;
    dst = dst + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
