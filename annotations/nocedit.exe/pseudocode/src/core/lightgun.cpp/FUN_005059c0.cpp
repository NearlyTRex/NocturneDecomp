// Name: core_lightgun.cpp_FUN_005059c0
// Address: 005059c0
// Address Range: [[005059c0, 00505a15]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_FUN_005059c0(void)

#include "nocturne.h"

uint core_lightgun_cpp_FUN_005059c0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBatCreature");
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBride");
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}
