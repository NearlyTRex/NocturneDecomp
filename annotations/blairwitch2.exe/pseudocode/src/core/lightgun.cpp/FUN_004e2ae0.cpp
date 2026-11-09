// Name: core_lightgun.cpp_FUN_004e2ae0
// Address: 004e2ae0
// Address Range: [[004e2ae0, 004e2b47]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_004e2ae0(CDemonActor *param_1)

#include "nocturne.h"

uint core_lightgun_cpp_FUN_004e2ae0(CDemonActor *param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CBatCreature");
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CBride");
        if (iVar1 == 0) {
          iVar1 = core_actor_cpp_FUN_0040c840(param_1,"CShadow");
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}
