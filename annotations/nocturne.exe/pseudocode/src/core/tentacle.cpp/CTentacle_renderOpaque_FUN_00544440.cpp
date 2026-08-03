// Name: core_tentacle.cpp_CTentacle_renderOpaque_FUN_00544440
// Address: 00544440
// Address Range: [[00544440, 0054446f]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00544440(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00544440(CTentacle *this_ptr)

{
  int iVar1;
  
  iVar1 = (*((this_ptr->base).base.base.vtable._ub)->shouldIgnoreForTargeting)
                    ((CDemonActor *)this_ptr);
  if ((iVar1 != 0) && (g_CDemonMission_PTR_005baf90->is_in_editor == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  return iVar1;
}
