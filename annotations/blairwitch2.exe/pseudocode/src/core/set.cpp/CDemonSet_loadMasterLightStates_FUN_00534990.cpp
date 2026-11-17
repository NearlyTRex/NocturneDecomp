// Name: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00534990
// Address: 00534990
// Address Range: [[00534990, 005349c8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(CDemonSet *this_ptr,int *light_state_buffer)

{
  int *piVar1;
  CDemonLight **ppCVar2;
  int iVar3;
  
  if ((g_INT_01fc8d00 == *light_state_buffer) && (iVar3 = 0, 0 < *light_state_buffer)) {
    do {
      ppCVar2 = g_CDemonLight_PTR_ARRAY_01fc8d04 + iVar3;
      piVar1 = light_state_buffer + 1;
      light_state_buffer = light_state_buffer + 1;
      iVar3 = iVar3 + 1;
      (*ppCVar2)->light_enabled_flag = *piVar1;
    } while (iVar3 < g_INT_01fc8d00);
  }
  return;
}
