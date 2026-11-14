// Name: core_tentacle.cpp_CTentacle_renderOpaque_FUN_00595b80
// Address: 00595b80
// Address Range: [[00595b80, 00595bb2]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00595b80(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_renderOpaque_FUN_00595b80(CTentacle *this_ptr)

{
  int iVar1;
  
  iVar1 = (*((this_ptr->base).base.base.vtable._ub)->shouldIgnoreForTargeting)
                    ((CDemonActor *)this_ptr);
  if ((iVar1 != 0) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  return iVar1;
}
