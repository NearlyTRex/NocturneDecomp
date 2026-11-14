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
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *pCVar4;
  uint uVar5;
  
  core_inv_cpp_CInventory_initialize_FUN_004da4e0(&(this_ptr->base).inventory);
  uVar5 = g_CWeaponClassInfo.name_hash;
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CFlintlock");
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,uVar5);
  if (pCVar2 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x39f;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar3 = "Prye's flintlock";
  pCVar4 = pCVar2;
  do {
    cVar1 = *pcVar3;
    pCVar4->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->actor_name[1] = cVar1;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
  } while (cVar1 != '\0');
  this_ptr_00 = &(this_ptr->base).inventory;
  core_inv_cpp_FUN_004da880(this_ptr_00,pCVar2,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(this_ptr_00,(CDemonActor *)0x0,5,1);
  uVar5 = g_CWeaponClassInfo.name_hash;
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CHolycross");
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,uVar5);
  if (pCVar2 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3ab;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar3 = "Prye's holy cross";
  pCVar4 = pCVar2;
  do {
    cVar1 = *pcVar3;
    pCVar4->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->actor_name[1] = cVar1;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880(&(this_ptr->base).inventory,pCVar2,1);
  uVar5 = DAT_007e1a50;
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CLightActor");
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,uVar5);
  if (pCVar2 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3b3;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  pcVar3 = "Prye's lantern";
  pCVar2[5].orient.vec.x = 2.8026e-45;
  pCVar4 = pCVar2;
  do {
    cVar1 = *pcVar3;
    pCVar4->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->actor_name[1] = cVar1;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
  } while (cVar1 != '\0');
  (*((pCVar2->vtable)._ub)->setup)(pCVar2);
  core_inv_cpp_FUN_004da880(&(this_ptr->base).inventory,pCVar2,1);
  uVar5 = g_CBoxActorClassInfo.name_hash;
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CBoxActor");
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,uVar5);
  if (pCVar2 == (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3bd;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)(pCVar2 + 1),"journal.kfm");
  pcVar3 = "Prye's journal";
  pCVar4 = pCVar2;
  do {
    cVar1 = *pcVar3;
    pCVar4->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->actor_name[1] = cVar1;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880(&(this_ptr->base).inventory,pCVar2,1);
  return;
}
