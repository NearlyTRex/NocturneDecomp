// Name: engine_special.cpp_restoreZBuffer_FUN_00532c90
// Address: 00532c90
// Address Range: [[00532c90, 00532cc7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(int left,int top,int mode,int right,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(int left,int top,int mode,int right,int bottom)

{
  int iVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9dec)(left,top,mode,right,bottom);
  return iVar1;
}
