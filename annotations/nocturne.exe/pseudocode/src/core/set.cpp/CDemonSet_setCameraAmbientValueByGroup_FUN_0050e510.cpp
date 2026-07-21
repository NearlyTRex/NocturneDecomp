// Name: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510
// Address: 0050e510
// Address Range: [[0050e510, 0050e54f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0050e510(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (param_2 == piVar2[0x53]) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(param_1,iVar1,param_3);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x68;
    } while (iVar1 < *param_1);
  }
  return;
}
