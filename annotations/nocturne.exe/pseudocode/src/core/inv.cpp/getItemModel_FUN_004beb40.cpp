// Name: core_inv.cpp_getItemModel_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004bec94]]
// Convention: unknown
// Signature: CDemonActor * core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *param_1)

#include "nocturne.h"

CDemonActor * core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *param_1)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint class_name_hash;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CWeapon");
  class_name_hash = g_CWeaponActorType_02ddf970.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CAmmo"),
         class_name_hash = g_CAmmoActorType_007641bc.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CKeyActor"),
        class_name_hash = g_CKeyActorActorType_01cc30a8.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CBoxActor"),
        class_name_hash = g_CBoxActorActorType_00764800.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CHealthItem"),
        class_name_hash = g_CHealthItemActorType_01cae098.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CGasMask"),
       class_name_hash = g_CGasMaskActorType_01c78b84.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CFilmReel"),
        class_name_hash = g_CFilmReelActorType_01c08c8c.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CTrap"),
        class_name_hash = g_CTrapActorType_02dd100c.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CBattery"),
     class_name_hash = g_CBatteryActorType_00764674.name_hash, iVar1 == 0)) {
    PTR_01cc4800 = "..\\core\\inv.cpp";
    INT_01cc4804 = 0x9d;
    core_main_c_FUN_004c8440("getModel - Can't classify : %s",param_1);
    return (CDemonActor *)0x0;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(param_1,class_name_hash);
  return pCVar2 + 1;
}
