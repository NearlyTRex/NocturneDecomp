// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0
// Address: 00555ce0
// Address Range: [[00555ce0, 00555d17]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_00555ce0(CDemonSet *this_ptr,int *light_state_buffer)

{
  int iVar1;
  int iVar2;
  
  *light_state_buffer = _DAT_01fe4cb4;
  iVar2 = 0;
  if (0 < _DAT_01fe4cb4) {
    do {
      iVar1 = iVar2 * 4;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = *(int *)(*(int *)(&DAT_01fe4cb8 + iVar1) + 0x1cb4);
    } while (iVar2 < _DAT_01fe4cb4);
  }
  return iVar2;
}
