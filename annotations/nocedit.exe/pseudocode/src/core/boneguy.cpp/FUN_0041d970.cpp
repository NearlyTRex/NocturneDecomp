// Name: core_boneguy.cpp_FUN_0041d970
// Address: 0041d970
// Address Range: [[0041d970, 0041d98e]]
// Convention: unknown
// Signature: int core_boneguy_cpp_FUN_0041d970(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_FUN_0041d970(uint param_1, uint
   param_2) */

int core_boneguy_cpp_FUN_0041d970(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  SCollisionInfo *in_stack_00000008;
  
  if (in_stack_00000004[1].model.rest_pose_data[0x13] != 0.0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    (in_stack_00000004,in_stack_00000008);
  return iVar1;
}
