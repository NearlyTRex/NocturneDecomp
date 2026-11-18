// Name: core_lightpis.cpp_isLightVulnerable_FUN_00501750
// Address: 00501750
// Address Range: [[00501750, 005017e9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightpis_cpp_isLightVulnerable_FUN_00501750(CCharacter *actor)

#include "nocturne.h"

int __cdecl core_lightpis_cpp_isLightVulnerable_FUN_00501750(CCharacter *actor)

{
  int iVar1;
  
  iVar1 = (*(((actor->base).vtable._uc)->_uc).isInvulnerable)(actor);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&actor->base,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&actor->base,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&actor->base,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&actor->base,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&actor->base,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
