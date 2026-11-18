// Name: core_tentacle.cpp_CTentacle_renderOpaque_FUN_00572f50
// Address: 00572f50
// Address Range: [[00572f50, 00572f82]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00572f50(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00572f50(CTentacle *this_ptr)

{
  int iVar1;
  
  iVar1 = (*((this_ptr->base).base.base.vtable._ub)->shouldIgnoreForTargeting)
                    ((CDemonActor *)this_ptr);
  if ((iVar1 != 0) && (g_CDemonMission_PTR_00618170->is_in_editor == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  return iVar1;
}
