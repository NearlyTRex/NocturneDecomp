// Name: core_lightgun.cpp_isLightSensitiveType_FUN_004ffff0
// Address: 004ffff0
// Address Range: [[004ffff0, 00500089]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_isLightSensitiveType_FUN_004ffff0(CCharacter *character)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_isLightSensitiveType_FUN_004ffff0(CCharacter *character)

{
  int iVar1;
  
  iVar1 = (*(((character->base).vtable._uc)->_uc).isInvulnerable)(character);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&character->base,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&character->base,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&character->base,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&character->base,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&character->base,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
