// Name: engine_special.cpp_restoreZBuffer_FUN_00560050
// Address: 00560050
// Address Range: [[00560050, 00560087]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_restoreZBuffer_FUN_00560050(int slot,int left,int top,int right,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_restoreZBuffer_FUN_00560050(int slot,int left,int top,int right,int bottom)

{
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc3c)(slot,left,top,right,bottom);
  return iVar1;
}
