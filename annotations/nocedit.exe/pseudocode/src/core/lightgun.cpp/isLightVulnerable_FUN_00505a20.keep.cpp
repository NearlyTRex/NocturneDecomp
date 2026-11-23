// Name: core_lightgun.cpp_isLightVulnerable_FUN_00505a20
// Address: 00505a20
// MANUAL RECONSTRUCTION
// Address Range: [[00505a20, 00505ab9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_isLightVulnerable_FUN_00505a20(CCharacter *target)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_isLightVulnerable_FUN_00505a20(CCharacter *target)

{
  int iVar1;
  int iVar2;

  iVar1 = (*(((target->base).vtable._uc)->_uc).isInvulnerable)(target);
  if (iVar1 == 0) {
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
