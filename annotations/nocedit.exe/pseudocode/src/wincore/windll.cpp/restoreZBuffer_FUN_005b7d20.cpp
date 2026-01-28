// Name: wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
// Address: 005b7d20
// Address Range: [[005b7d20, 005b7d57]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(int left,int top,int mode,int right,int bottom)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(int left,int top,int mode,int right,int bottom)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_restoreZBuffer)(left,top,mode,right,bottom);
  return iVar1;
}
