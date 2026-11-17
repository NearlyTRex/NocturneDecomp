// Name: engine_special.cpp_clearZBox_FUN_00582960
// Address: 00582960
// Address Range: [[00582960, 0058298f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBox_FUN_00582960(int left,int right,int top,int bottom)

#include "nocturne.h"

int __cdecl engine_special_cpp_clearZBox_FUN_00582960(int left,int right,int top,int bottom)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_clearZBox)(left,right,top,bottom);
  return iVar1;
}
