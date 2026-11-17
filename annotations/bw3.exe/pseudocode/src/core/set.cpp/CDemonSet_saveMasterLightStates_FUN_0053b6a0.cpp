// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0
// Address: 0053b6a0
// Address Range: [[0053b6a0, 0053b6d7]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0(CDemonSet *this_ptr,int *light_state_buffer)

{
  CDemonLight **ppCVar1;
  int iVar2;
  
  *light_state_buffer = g_INT_0203a414;
  iVar2 = 0;
  if (0 < g_INT_0203a414) {
    do {
      ppCVar1 = g_CDemonLight_PTR_ARRAY_0203a418 + iVar2;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_INT_0203a414);
  }
  return iVar2;
}
