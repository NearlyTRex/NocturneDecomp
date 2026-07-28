// Name: core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0050e860
// Address: 0050e860
// Address Range: [[0050e860, 0050e897]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(CDemonSet *this_ptr,int *light_state_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_saveMasterLightStates_FUN_0050e860(CDemonSet *this_ptr,int *light_state_buffer)

{
  int iVar1;
  int iVar2;
  
  *light_state_buffer = _DAT_01fb99d0;
  iVar2 = 0;
  if (0 < _DAT_01fb99d0) {
    do {
      iVar1 = iVar2 * 4;
      light_state_buffer = light_state_buffer + 1;
      iVar2 = iVar2 + 1;
      *light_state_buffer = *(int *)(*(int *)(&DAT_01fb99d4 + iVar1) + 0x1cb4);
    } while (iVar2 < _DAT_01fb99d0);
  }
  return iVar2;
}
