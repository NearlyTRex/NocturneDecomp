// Name: core_lightgun.cpp_CLightGun_FUN_004c6f50
// Address: 004c6f50
// Address Range: [[004c6f50, 004c6fe9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_FUN_004c6f50(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_FUN_004c6f50(CLightGun *this_ptr)

{
  int iVar1;
  
  iVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
