// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_00571170
// Address: 00571170
// Address Range: [[00571170, 005711a7]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00571170(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00571170(CDemonSet *this_ptr,int *light_state_buffer)

{
  CDemonLight **ppCVar1;
  int iVar2;
  
  *light_state_buffer = g_MasterLightCount;
  iVar2 = 0;
  if (0 < g_MasterLightCount) {
    do {
      ppCVar1 = g_MasterLightList + iVar2;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_MasterLightCount);
  }
  return iVar2;
}
