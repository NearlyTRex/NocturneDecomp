// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_005349d0
// Address: 005349d0
// Address Range: [[005349d0, 00534a07]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_005349d0(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_005349d0(CDemonSet *this_ptr,int *light_state_buffer)

{
  CDemonLight **ppCVar1;
  int iVar2;
  
  *light_state_buffer = g_MasterLightCount;
  iVar2 = 0;
  if (0 < g_MasterLightCount) {
    do {
      ppCVar1 = g_CDemonLight_PTR_ARRAY_01fc8d04 + iVar2;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_MasterLightCount);
  }
  return iVar2;
}
