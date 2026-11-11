// Name: core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430
// Address: 00518430
// Address Range: [[00518430, 00518674]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_createDefaultWeapon_FUN_00518430(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_createDefaultWeapon_FUN_00518430(CPrye *this_ptr)

{
  CInventory *this_ptr_00;
  char cVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *pCVar5;
  
  core_inv_cpp_CInventory_initialize_FUN_004da4e0(&(this_ptr->base).inventory);
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
    pCVar5->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->actor_name[1] = cVar1;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
  } while (cVar1 != '\0');
  this_ptr_00 = &(this_ptr->base).inventory;
  core_inv_cpp_FUN_004da880(this_ptr_00,pCVar3,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(this_ptr_00,(CDemonActor *)0x0,5,1);
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
    pCVar5->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->actor_name[1] = cVar1;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880(&(this_ptr->base).inventory,pCVar3,1);
  uVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CLightActor",DAT_007e1a50);
  pCVar3 = (CDemonActor *)core_actor_cpp_castToClassHash_FUN_0040c840(uVar2);
  if (pCVar3 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3b3;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's lantern";
  pCVar3[5].orient.vec.x = 2.8026e-45;
  pCVar5 = pCVar3;
  do {
    cVar1 = *pcVar4;
    pCVar5->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->actor_name[1] = cVar1;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
  } while (cVar1 != '\0');
  (*((pCVar3->vtable)._ub)->setup)(pCVar3);
  core_inv_cpp_FUN_004da880(&(this_ptr->base).inventory,pCVar3,1);
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
    pCVar5->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->actor_name[1] = cVar1;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880(&(this_ptr->base).inventory,pCVar3,1);
  return;
}
