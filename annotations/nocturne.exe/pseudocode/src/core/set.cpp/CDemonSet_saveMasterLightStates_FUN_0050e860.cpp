// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860
// Address: 0050e860
// Address Range: [[0050e860, 0050e897]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(CDemonSet *this_ptr,int *light_state_buffer)

{
  CDemonLight **ppCVar1;
  int iVar2;
  
  *light_state_buffer = g_INT_01fb99d0;
  iVar2 = 0;
  if (0 < g_INT_01fb99d0) {
    do {
      ppCVar1 = g_CDemonLight_PTR_ARRAY_01fb99d4 + iVar2;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_INT_01fb99d0);
  }
  return iVar2;
}
