// Name: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
// Address: 00514300
// Address Range: [[00514300, 0051433a]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar1 * 0x44 + param_1 + 0x15b06c);
  } while (-1 < iVar2);
  while (param_2 != iVar1) {
    iVar2 = param_2 * 0x44;
    param_2 = *(int *)(iVar2 + 0x15b06c + param_1);
    *(int *)(iVar2 + 0x15b06c + param_1) = iVar1;
  }
  return;
}
