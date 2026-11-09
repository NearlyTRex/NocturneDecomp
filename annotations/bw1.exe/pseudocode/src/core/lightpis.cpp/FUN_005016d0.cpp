// Name: core_lightpis.cpp_FUN_005016d0
// Address: 005016d0
// Address Range: [[005016d0, 00501749]]
// Convention: unknown
// Signature: undefined4 core_lightpis_cpp_FUN_005016d0(CDemonActor *param_1)

#include "nocturne.h"

uint core_lightpis_cpp_FUN_005016d0(CDemonActor *param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c550(param_1,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_FUN_0040c550(param_1,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_FUN_0040c550(param_1,"CBatCreature");
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_FUN_0040c550(param_1,"CBride");
        if (iVar1 == 0) {
          iVar1 = core_actor_cpp_FUN_0040c550(param_1,"CShadow");
          if (iVar1 == 0) {
            iVar1 = core_actor_cpp_FUN_0040c550(param_1,"CShadowsc");
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
