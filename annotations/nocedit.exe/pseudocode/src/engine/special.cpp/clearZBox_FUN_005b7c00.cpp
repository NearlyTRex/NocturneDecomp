// Name: engine_special.cpp_clearZBox_FUN_005b7c00
// Address: 005b7c00
// Address Range: [[005b7c00, 005b7c2f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_clearZBox_FUN_005b7c00(int left,int right,int top,int bottom)

#include "nocturne.h"

int __cdecl engine_special_cpp_clearZBox_FUN_005b7c00(int left,int right,int top,int bottom)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clearZBox)(left,right,top,bottom);
  return iVar1;
}
