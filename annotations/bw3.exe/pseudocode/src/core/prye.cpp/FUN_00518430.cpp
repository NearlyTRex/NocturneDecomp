// Name: core_prye.cpp_FUN_00518430
// Address: 00518430
// Address Range: [[00518430, 00518674]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00518430(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00518430(int param_1)

{
  char cVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *pCVar5;
  
  core_inv_cpp_FUN_004da4e0((CInventory *)(param_1 + 0x206e8));
  uVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0
                    ("CFlintlock",g_CWeaponClassInfo.name_hash);
  pCVar3 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(uVar2);
  if (pCVar3 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x39f;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's flintlock";
  pCVar5 = pCVar3;
  do {
    cVar1 = *pcVar4;
    *(char *)pCVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->field_0x1 = cVar1;
    pCVar5 = (CDemonActor *)&pCVar5->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880((CInventory *)(param_1 + 0x206e8),pCVar3,1);
  core_inv_cpp_FUN_004dbb40((CInventory *)(param_1 + 0x206e8),(CDemonActor *)0x0,5,1);
  uVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0
                    ("CHolycross",g_CWeaponClassInfo.name_hash);
  pCVar3 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(uVar2);
  if (pCVar3 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3ab;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's holy cross";
  pCVar5 = pCVar3;
  do {
    cVar1 = *pcVar4;
    *(char *)pCVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->field_0x1 = cVar1;
    pCVar5 = (CDemonActor *)&pCVar5->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880((CInventory *)(param_1 + 0x206e8),pCVar3,1);
  uVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CLightActor",DAT_007e1a50);
  pCVar3 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(uVar2);
  if (pCVar3 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3b3;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's lantern";
  *(uint *)&pCVar3[5].field_0x30 = 2;
  pCVar5 = pCVar3;
  do {
    cVar1 = *pcVar4;
    *(char *)pCVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->field_0x1 = cVar1;
    pCVar5 = (CDemonActor *)&pCVar5->field_0x2;
  } while (cVar1 != '\0');
  (*(code *)**(uint **)&pCVar3->field_0x154)(pCVar3);
  core_inv_cpp_FUN_004da880((CInventory *)(param_1 + 0x206e8),pCVar3,1);
  uVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0
                    ("CBoxActor",g_CBoxActorClassInfo.name_hash);
  pCVar3 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(uVar2);
  if (pCVar3 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3bd;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)(pCVar3 + 1),"journal.kfm");
  pcVar4 = "Prye's journal";
  pCVar5 = pCVar3;
  do {
    cVar1 = *pcVar4;
    *(char *)pCVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->field_0x1 = cVar1;
    pCVar5 = (CDemonActor *)&pCVar5->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880((CInventory *)(param_1 + 0x206e8),pCVar3,1);
  return;
}
