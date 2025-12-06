// Name: wincore_windll.cpp_clearZBox_FUN_005b7c00
// Address: 005b7c00
// Address Range: [[005b7c00, 005b7c2f]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_clearZBox_FUN_005b7c00(int left, int top, int right, int bottom)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_clearZBox_FUN_005b7c00(int left,int top,int right,int bottom)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clearZBox)(left,top,right,bottom);
  return iVar1;
}
