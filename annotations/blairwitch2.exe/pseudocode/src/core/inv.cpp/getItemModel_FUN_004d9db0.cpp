// Name: core_inv.cpp_getItemModel_FUN_004d9db0
// Address: 004d9db0
// Address Range: [[004d9db0, 004d9f04]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004d9db0(CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModelInstance * __cdecl core_inv_cpp_getItemModel_FUN_004d9db0(CDemonActor *actor_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint class_name_hash;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CWeapon");
  class_name_hash = g_CWeaponClassInfo.name_hash;
  if ((((((iVar1 == 0) &&
         (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CAmmo"),
         class_name_hash = g_CAmmoClassInfo.name_hash, iVar1 == 0)) &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CKeyActor"),
        class_name_hash = g_CKeyActorClassInfo.name_hash, iVar1 == 0)) &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CBoxActor"),
        class_name_hash = g_CBoxActorClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CHealthItem"),
        class_name_hash = g_CHealthItemClassInfo.name_hash, iVar1 == 0)))) &&
      ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CGasMask"),
       class_name_hash = g_CGasMaskClassInfo.name_hash, iVar1 == 0 &&
       ((iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CFilmReel"),
        class_name_hash = g_CFilmReelClassInfo.name_hash, iVar1 == 0 &&
        (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CTrap"),
        class_name_hash = g_CTrapClassInfo.name_hash, iVar1 == 0)))))) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CBattery"),
     class_name_hash = g_CBatteryClassInfo.name_hash, iVar1 == 0)) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0xa3;
    core_main_c_FUN_004e4500("getModel - Can't classify : %s",actor_ptr);
    return (CKeyFramedModelInstance *)0x0;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,class_name_hash);
  return (CKeyFramedModelInstance *)(pCVar2 + 1);
}
