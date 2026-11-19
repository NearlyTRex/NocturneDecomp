// Name: core_lightgun.cpp_isLightVulnerable_FUN_00505a20
// Address: 00505a20
// Address Range: [[00505a20, 00505ab9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_isLightVulnerable_FUN_00505a20(CCharacter *target)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_isLightVulnerable_FUN_00505a20(CCharacter *target)

{
  CVector3f *pCVar1;
  int iVar2;
  CVector3f *local_e1;
  
  pCVar1 = (*(((target->base).vtable._uw)->_uw).getMuzzlePoint)((CWeapon *)target,local_e1);
  if (pCVar1 == (CVector3f *)0x0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(&target->base,"CGhoul");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(&target->base,"CTVBat");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(&target->base,"CBatCreature");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(&target->base,"CWerewolf");
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(&target->base,"CSvetlana");
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
