// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580
// Address: 0050e580
// Address Range: [[0050e580, 0050e5c0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(CDemonSet *this_ptr,int group_id,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(CDemonSet *this_ptr,int group_id,int enabled)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == pCVar2->cameras[0].camera_group) {
        core_set_cpp_CDemonSet_FUN_0050e550(this_ptr,iVar1,enabled);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
