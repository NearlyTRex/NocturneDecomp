// Name: core_lightgun.cpp_CLightGun_isLightVulnerable_FUN_00505a20
// Address: 00505a20
// Address Range: [[00505a20, 00505ab9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_isLightVulnerable_FUN_00505a20(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_isLightVulnerable_FUN_00505a20(CLightGun *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f *local_e1;
  
  pCVar1 = (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,local_e1);
  if (pCVar1 == (CVector3f *)0x0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CGhoul");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CTVBat");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CBatCreature");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CWerewolf");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0((CDemonActor *)this_ptr,"CSvetlana");
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
