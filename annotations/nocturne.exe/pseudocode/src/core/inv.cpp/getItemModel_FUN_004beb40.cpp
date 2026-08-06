// Name: core_inv.cpp_getItemModel_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004bec94]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *actor_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004beb40(CDemonActor *actor_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint class_name_hash;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CWeapon");
  class_name_hash = g_CWeaponActorType_02ddf970.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CAmmo"),
         class_name_hash = g_CAmmoActorType_007641bc.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CKeyActor"),
        class_name_hash = g_CKeyActorActorType_01cc30a8.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CBoxActor"),
        class_name_hash = g_CBoxActorActorType_00764800.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CHealthItem"),
        class_name_hash = g_CHealthItemActorType_01cae098.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CGasMask"),
       class_name_hash = g_CGasMaskActorType_01c78b84.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CFilmReel"),
        class_name_hash = g_CFilmReelActorType_01c08c8c.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CTrap"),
        class_name_hash = g_CTrapActorType_02dd100c.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CBattery"),
     class_name_hash = g_CBatteryActorType_00764674.name_hash, iVar1 == 0)) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 157;
    core_main_c_displayErrorAndQuit_FUN_004c8440("getModel - Can't classify : %s");
    return (CKeyFramedModelInstance *)0x0;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(actor_ptr,class_name_hash);
  return (CKeyFramedModelInstance *)(pCVar2 + 1);
}
