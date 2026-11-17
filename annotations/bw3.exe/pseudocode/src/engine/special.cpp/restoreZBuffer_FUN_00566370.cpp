// Name: engine_special.cpp_restoreZBuffer_FUN_00566370
// Address: 00566370
// Address Range: [[00566370, 005663a7]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreZBuffer_FUN_00566370(int slot,int left,int top,int right,int bottom)

#include "nocturne.h"

int __cdecl engine_special_cpp_restoreZBuffer_FUN_00566370(int slot,int left,int top,int right,int bottom)

{
  int iVar1;
  
  if (g_INT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02cf6068)(slot,left,top,right,bottom);
  return iVar1;
}
