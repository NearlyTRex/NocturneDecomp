// Name: engine_special.cpp_restoreZBuffer_FUN_00532c90
// Address: 00532c90
// Address Range: [[00532c90, 00532cc7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(int left,int top,int mode,int right,int bottom)

#include "nocturne.h"

int __cdecl engine_special_cpp_restoreZBuffer_FUN_00532c90(int left,int top,int mode,int right,int bottom)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_restoreZBuffer)(left,top,mode,right,bottom);
  return iVar1;
}
