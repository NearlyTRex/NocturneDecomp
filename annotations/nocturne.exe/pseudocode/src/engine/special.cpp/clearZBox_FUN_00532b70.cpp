// Name: engine_special.cpp_clearZBox_FUN_00532b70
// Address: 00532b70
// Address Range: [[00532b70, 00532b9f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBox_FUN_00532b70(int left,int right,int top,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_clearZBox_FUN_00532b70(int left,int right,int top,int bottom)

{
  int iVar1;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02dc9dd8)(left,right,top,bottom);
  return iVar1;
}
