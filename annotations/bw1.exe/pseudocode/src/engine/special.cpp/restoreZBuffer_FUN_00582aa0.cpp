// Name: engine_special.cpp_restoreZBuffer_FUN_00582aa0
// Address: 00582aa0
// Address Range: [[00582aa0, 00582ad7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreZBuffer_FUN_00582aa0(int slot,int left,int top,int right,int bottom)

#include "nocturne.h"

int __cdecl engine_special_cpp_restoreZBuffer_FUN_00582aa0(int slot,int left,int top,int right,int bottom)

{
  int iVar1;
  
  if (g_INT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_APIDLL_restoreZBuffer)(slot,left,top,right,bottom);
  return iVar1;
}
