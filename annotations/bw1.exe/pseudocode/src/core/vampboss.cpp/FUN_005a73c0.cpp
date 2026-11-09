// Name: core_vampboss.cpp_FUN_005a73c0
// Address: 005a73c0
// Address Range: [[005a73c0, 005a741b]]
// Convention: unknown
// Signature: ECollisionType core_vampboss_cpp_FUN_005a73c0(CCharacter *param_1,SCollisionInfo *param_2)

#include "nocturne.h"

ECollisionType core_vampboss_cpp_FUN_005a73c0(CCharacter *param_1,SCollisionInfo *param_2)

{
  int iVar1;
  ECollisionType EVar2;
  
  if (*(int *)param_2 != 2) {
    iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
    if (iVar1 < 2) {
      if (((*(int *)param_2 == 1) || (*(int *)param_2 == 3)) &&
         (*(int *)&param_1[0xf].field_0x8c6c == 2)) {
        *(byte **)&param_2->field_0x20 = &param_1[1].field_0x98;
        return COLLISION_TYPE_MESH;
      }
      EVar2 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0(param_1,param_2);
      return EVar2;
    }
  }
  return COLLISION_TYPE_NONE;
}
