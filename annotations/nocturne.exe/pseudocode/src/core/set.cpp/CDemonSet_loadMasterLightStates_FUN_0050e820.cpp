// Name: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_0050e820
// Address: 0050e820
// Address Range: [[0050e820, 0050e858]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0050e820(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_0050e820(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_01fb99d0 == *param_2) && (iVar3 = 0, 0 < *param_2)) {
    do {
      iVar2 = iVar3 * 4;
      piVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *(int *)(*(int *)(&DAT_01fb99d4 + iVar2) + 0x1cb4) = *piVar1;
    } while (iVar3 < _DAT_01fb99d0);
  }
  return;
}
