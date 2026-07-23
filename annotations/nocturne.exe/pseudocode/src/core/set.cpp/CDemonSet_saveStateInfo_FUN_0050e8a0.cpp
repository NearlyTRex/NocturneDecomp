// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_0050e8a0
// Address: 0050e8a0
// Address Range: [[0050e8a0, 0050e91a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_0050e8a0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  _fprintf(param_2,"// Set state version\n");
  _fprintf(param_2,"1\n");
  _fprintf(param_2,"// Camera count, enabled list\n");
  iVar1 = 0;
  _fprintf(param_2,"%d\n",*param_1);
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(param_2,"%d\n",piVar2[0x68]);
      piVar2 = piVar2 + 0x68;
    } while (iVar1 < *param_1);
  }
  return;
}
