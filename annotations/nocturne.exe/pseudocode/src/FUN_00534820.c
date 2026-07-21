// Name: FUN_00534820
// Address: 00534820
// Address Range: [[00534820, 0053483f]]
// Convention: unknown
// Signature: undefined4 FUN_00534820(undefined4 param_1)

#include "nocturne.h"

uint FUN_00534820(uint param_1)

{
  uint uVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  uVar1 = core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(param_1);
  return uVar1;
}
