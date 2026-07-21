// Name: core_script.cpp_CScript_findDialogEntry_FUN_00505180
// Address: 00505180
// Address Range: [[00505180, 005051f6]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_00505180(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_00505180(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  iVar2 = 0;
  splitpath(param_2,0,0,local_110,0);
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = 0;
    do {
      iVar1 = _stricmp(*(int *)(param_1 + 0x20) + iVar3,local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  return -1;
}
