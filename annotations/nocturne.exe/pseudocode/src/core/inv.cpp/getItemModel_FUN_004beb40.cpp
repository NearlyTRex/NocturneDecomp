// Name: core_inv.cpp_getItemModel_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004bec94]]
// Convention: unknown
// Signature: int core_inv_cpp_getItemModel_FUN_004beb40(undefined4 param_1)

#include "nocturne.h"

int core_inv_cpp_getItemModel_FUN_004beb40(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CWeapon");
  uVar2 = g_CWeaponActorType_02ddf970.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CAmmo"),
         uVar2 = g_CAmmoActorType_007641bc.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CKeyActor"),
        uVar2 = g_CKeyActorActorType_01cc30a8.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CBoxActor"),
        uVar2 = g_CBoxActorActorType_00764800.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CHealthItem"),
        uVar2 = g_CHealthItemActorType_01cae098.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CGasMask"),
       uVar2 = g_CGasMaskActorType_01c78b84.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CFilmReel"),
        uVar2 = g_CFilmReelActorType_01c08c8c.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CTrap"),
        uVar2 = g_CTrapActorType_02dd100c.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1,"CBattery"),
     uVar2 = g_CBatteryActorType_00764674.name_hash, iVar1 == 0)) {
    PTR_01cc4800 = "..\\core\\inv.cpp";
    INT_01cc4804 = 0x9d;
    core_main_c_FUN_004c8440("getModel - Can't classify : %s",param_1);
    return 0;
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890(param_1,uVar2);
  return iVar1 + 0x150;
}
