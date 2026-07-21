// Name: shape_edittool.cpp_CStrList_findString_FUN_00474140
// Address: 00474140
// Address Range: [[00474140, 0047417e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00474140(int *param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00474140(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      uVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,iVar3,param_2);
      iVar2 = _stricmp(uVar1);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return -1;
}
