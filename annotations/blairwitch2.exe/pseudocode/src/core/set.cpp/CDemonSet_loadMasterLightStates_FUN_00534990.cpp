// Name: core_set.cpp_CDemonSet_loadMasterLightStates_FUN_00534990
// Address: 00534990
// Address Range: [[00534990, 005349c8]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_loadMasterLightStates_FUN_00534990(CDemonSet *this_ptr,int *light_state_buffer)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_01fc8d00 == *light_state_buffer) && (iVar3 = 0, 0 < *light_state_buffer)) {
    do {
      iVar2 = iVar3 * 4;
      piVar1 = light_state_buffer + 1;
      light_state_buffer = light_state_buffer + 1;
      iVar3 = iVar3 + 1;
      *(int *)(*(int *)(&DAT_01fc8d04 + iVar2) + 0x1cb4) = *piVar1;
    } while (iVar3 < _DAT_01fc8d00);
  }
  return;
}
