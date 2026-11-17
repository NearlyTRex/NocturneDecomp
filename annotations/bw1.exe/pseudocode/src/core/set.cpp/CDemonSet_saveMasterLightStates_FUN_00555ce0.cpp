// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0
// Address: 00555ce0
// Address Range: [[00555ce0, 00555d17]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0(CDemonSet *this_ptr,int *light_state_buffer)

{
  CDemonLight **ppCVar1;
  int iVar2;
  
  *light_state_buffer = g_INT_01fe4cb4;
  iVar2 = 0;
  if (0 < g_INT_01fe4cb4) {
    do {
      ppCVar1 = g_CDemonLight_PTR_ARRAY_01fe4cb8 + iVar2;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = (*ppCVar1)->light_enabled_flag;
    } while (iVar2 < g_INT_01fe4cb4);
  }
  return iVar2;
}
