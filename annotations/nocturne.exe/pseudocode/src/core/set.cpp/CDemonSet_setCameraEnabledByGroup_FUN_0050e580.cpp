// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580
// Address: 0050e580
// Address Range: [[0050e580, 0050e5c0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (param_2 == piVar2[0x53]) {
        FUN_0050e550(param_1,iVar1,param_3);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x68;
    } while (iVar1 < *param_1);
  }
  return;
}
