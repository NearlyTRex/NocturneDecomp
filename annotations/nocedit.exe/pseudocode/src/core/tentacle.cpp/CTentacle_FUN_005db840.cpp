// Name: core_tentacle.cpp_CTentacle_FUN_005db840
// Address: 005db840
// Address Range: [[005db840, 005db87a]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_FUN_005db840(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_FUN_005db840(CTentacle *this_ptr)

{
  int iVar1;
  
  iVar1 = (*((this_ptr->base).base.base.vtable._ub)->shouldIgnoreForTargeting)
                    ((CDemonActor *)this_ptr);
  if (iVar1 != 0) {
    if (g_CDemonMissionPtr->is_in_editor == 0) {
      return 0;
    }
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return iVar1;
}
