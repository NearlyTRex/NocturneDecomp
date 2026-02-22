// Name: core_set.cpp_CDemonSet_restoreLightState_FUN_00571130
// Address: 00571130
// Address Range: [[00571130, 00571168]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_restoreLightState_FUN_00571130(CDemonSet *this_ptr,void *param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_restoreLightState_FUN_00571130(CDemonSet *this_ptr,void *param_2)

{
  int *piVar1;
  CDemonLight **ppCVar2;
  int iVar3;
  
  if ((g_MasterLightCount == *(int *)param_2) && (iVar3 = 0, 0 < *(int *)param_2)) {
    do {
      ppCVar2 = g_MasterLightList + iVar3;
      piVar1 = (int *)((int)param_2 + 4);
      param_2 = (void *)((int)param_2 + 4);
      iVar3 = iVar3 + 1;
      (*ppCVar2)->light_enabled_flag = *piVar1;
    } while (iVar3 < g_MasterLightCount);
  }
  return;
}
