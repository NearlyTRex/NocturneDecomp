// Name: dll_dx7.cpp_APIDLLrestoreZBuffer_FUN_10004e90
// Address: 10004e90
// Address Range: [[10004e90, 10004efd]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90(int left,int top,int mode,int right,int bottom)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90(int left,int top,int mode,int right,int bottom)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x4e90  25  APIDLLrestoreZBuffer */
  if ((&DAT_10014198)[left] == 0) {
    return 0;
  }
  local_10 = top;
  local_c = mode;
  local_8 = right + 1;
  local_4 = bottom + 1;
  iVar1 = (**(code **)(*DAT_10014190 + 0x14))
                    (DAT_10014190,&local_10,(&DAT_10014198)[left],&local_10,0,0);
  if (iVar1 != 0) {
    dll_dx7_cpp_FUN_10002340("restoreZBuffer failed!");
  }
  return 1;
}
