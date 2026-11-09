// Name: core_dracbrid.cpp_FUN_0047cfc0
// Address: 0047cfc0
// Address Range: [[0047cfc0, 0047cfde]]
// Convention: unknown
// Signature: ECollisionType core_dracbrid_cpp_FUN_0047cfc0(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_dracbrid_cpp_FUN_0047cfc0(CCharacter *param_1,SCollisionInfo *param_2)

{
  ECollisionType EVar1;
  
  if (*(int *)&param_1[1].field_0x124 != 0) {
    return COLLISION_TYPE_NONE;
  }
  EVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(param_1,param_2);
  return EVar1;
}
