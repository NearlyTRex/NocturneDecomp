// Name: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_005732a0
// Address: 005732a0
// Address Range: [[005732a0, 005732da]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_005732a0(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_005732a0(CTentacle *this_ptr)

{
  char *str1;
  int iVar1;
  char *str2;
  
  str2 = &DAT_005ec542;
  str1 = (char *)core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  iVar1 = _stricmp(str1,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c890((CDemonActor *)this_ptr);
  return iVar1;
}
