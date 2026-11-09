// Name: engine_special.cpp_clearZBox_FUN_00566230
// Address: 00566230
// Address Range: [[00566230, 0056625f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBox_FUN_00566230(int left,int right,int top,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_clearZBox_FUN_00566230(int left,int right,int top,int bottom)

{
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6054)(left,right,top,bottom);
  return iVar1;
}
