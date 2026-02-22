// Name: core_set.cpp_CDemonSet_saveLightState_FUN_00571170
// Address: 00571170
// Address Range: [[00571170, 005711a7]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveLightState_FUN_00571170(CDemonSet *this_ptr,void *param_2)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_saveLightState_FUN_00571170(CDemonSet *this_ptr,void *param_2)

{
  CDemonLight **ppCVar1;
  int iVar2;
  
  *(int *)param_2 = g_MasterLightCount;
  iVar2 = 0;
  if (0 < g_MasterLightCount) {
    do {
      ppCVar1 = g_MasterLightList + iVar2;
      param_2 = (void *)((int)param_2 + 4);
      iVar2 = iVar2 + 1;
      *(int *)param_2 = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_MasterLightCount);
  }
  return iVar2;
}
