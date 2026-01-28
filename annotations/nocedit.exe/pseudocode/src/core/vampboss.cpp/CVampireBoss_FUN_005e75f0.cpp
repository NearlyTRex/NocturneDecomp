// Name: core_vampboss.cpp_CVampireBoss_FUN_005e75f0
// Address: 005e75f0
// Address Range: [[005e75f0, 005e764b]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e75f0(CVampireBoss *this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e75f0(CVampireBoss *this_ptr)

{
  int iVar1;
  SCollisionInfo *in_stack_00000008;
  
  if (in_stack_00000008->ray_type != 2) {
    iVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
    if (iVar1 < 2) {
      if (((in_stack_00000008->ray_type == 1) || (in_stack_00000008->ray_type == 3)) &&
         (this_ptr->form == 2)) {
        in_stack_00000008->result_ptr = this_ptr->unk1 + 8;
        return 1;
      }
      iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                        ((CCharacter *)this_ptr,in_stack_00000008);
      return iVar1;
    }
  }
  return 0;
}
