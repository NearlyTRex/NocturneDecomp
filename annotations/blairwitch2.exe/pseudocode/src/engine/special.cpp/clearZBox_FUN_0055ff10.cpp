// Name: engine_special.cpp_clearZBox_FUN_0055ff10
// Address: 0055ff10
// Address Range: [[0055ff10, 0055ff3f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBox_FUN_0055ff10(int left,int right,int top,int bottom)

#include "nocturne.h"

int __cdecl engine_special_cpp_clearZBox_FUN_0055ff10(int left,int right,int top,int bottom)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc28)(left,right,top,bottom);
  return iVar1;
}
