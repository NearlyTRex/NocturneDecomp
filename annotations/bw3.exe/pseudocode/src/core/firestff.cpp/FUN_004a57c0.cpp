// Name: core_firestff.cpp_FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5865]]
// Convention: unknown
// Signature: int core_firestff_cpp_FUN_004a57c0(CWeapon *param_1)

#include "nocturne.h"

int core_firestff_cpp_FUN_004a57c0(CWeapon *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  iVar1 = core_weapon_cpp_FUN_0057af80(param_1);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1->field_0x304,g_CHeroClassInfo.name_hash);
  if ((((iVar2 == 0) || (*(int *)&param_1->field_0x58c <= *(int *)(iVar2 + 0x20b80))) &&
      (iVar1 != 0)) && (*(int *)&param_1->field_0x588 == 0x10000)) {
    if ((*(int *)&param_1->field_0x2d4 != 2) &&
       (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&param_1->field_0x304,g_CEnemyClassInfo.name_hash),
       iVar2 == 0)) {
      return iVar1;
    }
    puVar3 = &param_1[1].field_0x80;
    do {
      (**(code **)(*(int *)(puVar3 + 0x154) + 0x14))(puVar3);
      puVar3 = puVar3 + 0x2a4;
    } while (puVar3 != &param_1[6].field_0x44c);
  }
  return iVar1;
}
