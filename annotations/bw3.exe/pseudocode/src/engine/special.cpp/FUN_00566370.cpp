// Name: engine_special.cpp_FUN_00566370
// Address: 00566370
// Address Range: [[00566370, 005663a7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_FUN_00566370(int slot,int left,int top,int right,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_FUN_00566370(int slot,int left,int top,int right,int bottom)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6068)(slot,left,top,right,bottom);
  return iVar1;
}
