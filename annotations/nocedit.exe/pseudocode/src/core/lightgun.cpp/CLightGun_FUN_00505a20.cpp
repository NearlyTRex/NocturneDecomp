// Name: core_lightgun.cpp_CLightGun_FUN_00505a20
// Address: 00505a20
// Address Range: [[00505a20, 00505ab9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_FUN_00505a20(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_FUN_00505a20(CLightGun *this_ptr)

{
  int iVar1;
  
  iVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).cfunc3)();
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
