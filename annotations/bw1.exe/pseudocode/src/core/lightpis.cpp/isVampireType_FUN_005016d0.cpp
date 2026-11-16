// Name: core_lightpis.cpp_isVampireType_FUN_005016d0
// Address: 005016d0
// Address Range: [[005016d0, 00501749]]
// Convention: __cdecl
// Signature: int __cdecl core_lightpis_cpp_isVampireType_FUN_005016d0(CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_lightpis_cpp_isVampireType_FUN_005016d0(CDemonActor *actor)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor,"CBatCreature");
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor,"CBride");
        if (iVar1 == 0) {
          iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor,"CShadow");
          if (iVar1 == 0) {
            iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor,"CShadowsc");
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
