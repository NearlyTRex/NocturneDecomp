// Name: core_lightgun.cpp_isLightVulnerable_FUN_004c6f50
// Address: 004c6f50
// Address Range: [[004c6f50, 004c6fe9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_isLightVulnerable_FUN_004c6f50(CCharacter *target)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_isLightVulnerable_FUN_004c6f50(CCharacter *target)

{
  int iVar1;
  
  iVar1 = (*(((target->base).vtable._uc)->_uc).isInvulnerable)(target);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&target->base,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&target->base,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&target->base,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&target->base,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&target->base,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
