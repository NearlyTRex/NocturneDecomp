// Name: core_inv.cpp_getItemModel_FUN_004fcda0
// Address: 004fcda0
// Address Range: [[004fcda0, 004fcef4]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004fcda0(CDemonActor * actor_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004fcda0(CDemonActor *actor_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint class_name_hash;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CWeapon");
  class_name_hash = g_CWeaponClassInfo.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CAmmo"),
         class_name_hash = g_CAmmoClassInfo.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CKeyActor"),
        class_name_hash = g_CKeyActorClassInfo.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBoxActor"),
        class_name_hash = g_CBoxActorClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHealthItem"),
        class_name_hash = g_CHealthItemClassInfo.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CGasMask"),
       class_name_hash = g_CGasMaskClassInfo.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CFilmReel"),
        class_name_hash = g_CFilmReelClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrap"),
        class_name_hash = g_CTrapClassInfo.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBattery"),
     class_name_hash = g_CBatteryClassInfo.name_hash, iVar1 == 0)) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 0x9d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getModel - Can't classify : %s",actor_ptr);
    return (CKeyFramedModelInstance *)0x0;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,class_name_hash);
  return (CKeyFramedModelInstance *)(pCVar2 + 1);
}
