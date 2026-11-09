// Name: core_burncrss.cpp_FUN_00425360
// Address: 00425360
// Address Range: [[00425360, 004253c7]]
// Convention: unknown
// Signature: int core_burncrss_cpp_FUN_00425360(CWeapon *param_1)

#include "nocturne.h"

int core_burncrss_cpp_FUN_00425360(CWeapon *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  iVar1 = core_weapon_cpp_FUN_0057af80(param_1);
  if (*(int *)&param_1->field_0x2d4 != 2) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1->field_0x304,g_CEnemyClassInfo.name_hash);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  puVar3 = &param_1[1].field_0x14;
  do {
    (**(code **)(*(int *)(puVar3 + 0x154) + 0x14))(puVar3);
    puVar3 = puVar3 + 0x2a4;
  } while (puVar3 != &param_1[4].field_0x478);
  return iVar1;
}
