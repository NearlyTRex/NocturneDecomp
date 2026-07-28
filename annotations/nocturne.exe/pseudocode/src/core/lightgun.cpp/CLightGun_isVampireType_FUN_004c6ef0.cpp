// Name: core_lightgun.cpp_CLightGun_isVampireType_FUN_004c6ef0
// Address: 004c6ef0
// Address Range: [[004c6ef0, 004c6f45]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_CLightGun_isVampireType_FUN_004c6ef0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_lightgun_cpp_CLightGun_isVampireType_FUN_004c6ef0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(in_stack_00000004,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(in_stack_00000004,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(in_stack_00000004,"CBatCreature");
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(in_stack_00000004,"CBride");
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}
