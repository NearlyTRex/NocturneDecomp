// Name: core_batman.cpp_FUN_00414300
// Address: 00414300
// Address Range: [[00414300, 0041431e]]
// Convention: unknown
// Signature: ECollisionType core_batman_cpp_FUN_00414300(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_batman_cpp_FUN_00414300(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)&param_1[1].field_0x138 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(param_1,param_2);
  return EVar1;
}
